<?php
/**
 * @file
 * Provide field_group definitions.
 */

/**
 * Implements hook_field_group_info().
 */
function conduit_drupal_field_group_info() {
  $field_groups = array();

  // Create a result views for each conduit_drupal node type.
  foreach (array('drupal_coder', 'drupal_plumber', 'drupal_scan') as $module) { // @TODO Detect the modules using an info hook, etc.
    if (!module_exists($module)) {
      continue;
    }

    $type = 'conduit_job_' . $module;
    $info = conduit_job_info($type);

    $field_group = new stdClass();
    $field_group->api_version = 1;
    $field_group->group_name = $info['module'] . '_result';
    $field_group->identifier = $field_group->group_name . '|node|' . $type . '|default';
    $field_group->entity_type = 'node';
    $field_group->bundle = $type;
    $field_group->mode = 'default';
    $field_group->parent_name = '';
    $field_group->data = array(
      'label' => 'Result',
      'weight' => '10',
      'format_type' => 'view',
      'format_settings' => array(
        'instance_settings' => array(
          'primary_field' => $module == 'drupal_scan' ? 'conduit_result_drupal_scan_list' : 'conduit_result_drupal_summary',
          'field_suppress' => 'always',
        ),
      ),
    );

    // List all the conduit_result fields as children.
    module_load_install($info['module']);
    foreach (module_invoke($info['module'], 'install_instances') as $instance) {
      if (strpos($instance['field_name'], 'conduit_result') === 0 && field_info_instance($instance['entity_type'], $instance['field_name'], $instance['bundle'])) {
        $field_group->data['children'][] = $instance['field_name'];
      }
    }

    $field_groups[$field_group->identifier] = $field_group;
  }

  return $field_groups;
}
