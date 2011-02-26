<?php
/**
 * @file
 * Provides default information to views.
 *
 * @author Jimmy Berry ("boombatower", http://drupal.org/user/214218)
 */

/**
 * Implements hook_views_default_views().
 */
function drupal_scan_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'drupal_scan_result';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'field_revision_conduit_result_drupal_scan_list';
  $view->human_name = 'Scan result';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Class */
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['id'] = 'conduit_result_drupal_scan_list_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['table'] = 'field_revision_conduit_result_drupal_scan_list';
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['field'] = 'conduit_result_drupal_scan_list_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['ui_name'] = 'Class';
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['label'] = '';
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_scan_list_value_raw']['empty_zero'] = 0;
  /* Sort criterion: Revision tables: conduit_result_drupal_scan_list => Value */
  $handler->display->display_options['sorts']['conduit_result_drupal_scan_list_value_raw']['id'] = 'conduit_result_drupal_scan_list_value_raw';
  $handler->display->display_options['sorts']['conduit_result_drupal_scan_list_value_raw']['table'] = 'field_revision_conduit_result_drupal_scan_list';
  $handler->display->display_options['sorts']['conduit_result_drupal_scan_list_value_raw']['field'] = 'conduit_result_drupal_scan_list_value_raw';
  /* Argument: Revision tables: conduit_result_drupal_scan_list => Entity id */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'field_revision_conduit_result_drupal_scan_list';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['entity_id']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['entity_id']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['entity_id']['validate_options']['types'] = array(
    'conduit_job_drupal_scan' => 'conduit_job_drupal_scan',
  );
  $handler->display->display_options['arguments']['entity_id']['validate_options']['access'] = '1';
  $handler->display->display_options['arguments']['entity_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['entity_id']['not'] = 0;
  /* Argument: Revision tables: conduit_result_drupal_scan_list => Revision id */
  $handler->display->display_options['arguments']['revision_id_raw']['id'] = 'revision_id_raw';
  $handler->display->display_options['arguments']['revision_id_raw']['table'] = 'field_revision_conduit_result_drupal_scan_list';
  $handler->display->display_options['arguments']['revision_id_raw']['field'] = 'revision_id_raw';
  $handler->display->display_options['arguments']['revision_id_raw']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['revision_id_raw']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['revision_id_raw']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['revision_id_raw']['validate_type'] = 'numeric';
  $handler->display->display_options['arguments']['revision_id_raw']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['revision_id_raw']['not'] = 0;
  $translatables['drupal_scan_result'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
  );

  $views[$view->name] = $view;

  return $views;
}
