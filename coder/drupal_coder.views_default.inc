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
function drupal_coder_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'drupal_coder_files';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'field_data_conduit_result_drupal_item';
  $view->human_name = 'Coder files';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Files';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 't0[conduit_result_drupal_type_0_value_raw] t1[conduit_result_drupal_type_1_value_raw] t2[conduit_result_drupal_type_2_value_raw]';
  $handler->display->display_options['style_options']['columns'] = array(
    'conduit_result_drupal_item_value_raw' => 'conduit_result_drupal_item_value_raw',
    'conduit_result_drupal_type_0_value_raw' => 'conduit_result_drupal_type_0_value_raw',
    'conduit_result_drupal_type_1_value_raw' => 'conduit_result_drupal_type_1_value_raw',
    'conduit_result_drupal_type_2_value_raw' => 'conduit_result_drupal_type_2_value_raw',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'conduit_result_drupal_item_value_raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'conduit_result_drupal_type_0_value_raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'conduit_result_drupal_type_1_value_raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'conduit_result_drupal_type_2_value_raw' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No results to display.';
  /* Field: Field tables: conduit_result_drupal_item => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['id'] = 'conduit_result_drupal_item_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['table'] = 'field_data_conduit_result_drupal_item';
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['field'] = 'conduit_result_drupal_item_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['label'] = 'File';
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['path'] = 'node/!1/?file=[conduit_result_drupal_item_value_raw]';
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['external'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_item_value_raw']['empty_zero'] = 0;
  /* Field: Field tables: conduit_result_drupal_type_0 => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['id'] = 'conduit_result_drupal_type_0_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['table'] = 'field_data_conduit_result_drupal_type_0';
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['field'] = 'conduit_result_drupal_type_0_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['label'] = 'Critical';
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['external'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_0_value_raw']['empty_zero'] = 0;
  /* Field: Field tables: conduit_result_drupal_type_1 => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['id'] = 'conduit_result_drupal_type_1_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['table'] = 'field_data_conduit_result_drupal_type_1';
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['field'] = 'conduit_result_drupal_type_1_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['label'] = 'Normal';
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['external'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_1_value_raw']['empty_zero'] = 0;
  /* Field: Field tables: conduit_result_drupal_type_2 => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['id'] = 'conduit_result_drupal_type_2_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['table'] = 'field_data_conduit_result_drupal_type_2';
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['field'] = 'conduit_result_drupal_type_2_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['label'] = 'Minor';
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['external'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_2_value_raw']['empty_zero'] = 0;
  /* Contextual filter: Field tables: conduit_result_drupal_item => Entity id */
  $handler->display->display_options['arguments']['entity_id_raw']['id'] = 'entity_id_raw';
  $handler->display->display_options['arguments']['entity_id_raw']['table'] = 'field_data_conduit_result_drupal_item';
  $handler->display->display_options['arguments']['entity_id_raw']['field'] = 'entity_id_raw';
  $handler->display->display_options['arguments']['entity_id_raw']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['entity_id_raw']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['entity_id_raw']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['entity_id_raw']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id_raw']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id_raw']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entity_id_raw']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['entity_id_raw']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['entity_id_raw']['validate_options']['types'] = array(
    'conduit_job_drupal_coder' => 'conduit_job_drupal_coder',
  );
  $handler->display->display_options['arguments']['entity_id_raw']['validate_options']['access'] = '1';
  $handler->display->display_options['arguments']['entity_id_raw']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['entity_id_raw']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/files';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Files';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['drupal_coder_files'] = array(
    t('Master'),
    t('Files'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No results'),
    t('No results to display.'),
    t('File'),
    t('node/!1/?file=[conduit_result_drupal_item_value_raw]'),
    t('Critical'),
    t('Normal'),
    t('Minor'),
    t('All'),
    t('Page'),
  );

  $views[$view->name] = $view;


  $view = conduit_drupal_views_revision($view);
  $views[$view->name] = $view;


  $view = new view;
  $view->name = 'drupal_coder_result';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'field_revision_conduit_result_drupal_summary';
  $view->human_name = 'Coder result';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'conduit-drupal';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'conduit_result_drupal_summary_value_raw';
  $handler->display->display_options['style_options']['row_class'] = 'drupal-coder-[conduit_result_drupal_type_value_raw]';
  $handler->display->display_options['style_options']['columns'] = array(
    'conduit_result_drupal_summary_value_raw' => 'conduit_result_drupal_summary_value_raw',
    'conduit_result_drupal_type_value_raw' => 'conduit_result_drupal_type_value_raw',
    'conduit_result_drupal_line_value_raw' => 'conduit_result_drupal_line_value_raw',
    'conduit_result_drupal_message_value_raw' => 'conduit_result_drupal_message_value_raw',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'conduit_result_drupal_summary_value_raw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'conduit_result_drupal_type_value_raw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'conduit_result_drupal_line_value_raw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'conduit_result_drupal_message_value_raw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['exposed_block'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No results to display.';
  /* Field: Revision tables: conduit_result_drupal_summary => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['id'] = 'conduit_result_drupal_summary_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['table'] = 'field_revision_conduit_result_drupal_summary';
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['field'] = 'conduit_result_drupal_summary_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['label'] = '';
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_summary_value_raw']['empty_zero'] = 0;
  /* Field: Revision tables: conduit_result_drupal_type => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['id'] = 'conduit_result_drupal_type_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['table'] = 'field_revision_conduit_result_drupal_type';
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['field'] = 'conduit_result_drupal_type_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['label'] = 'Severity';
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_type_value_raw']['empty_zero'] = 0;
  /* Field: Revision tables: conduit_result_drupal_line => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['id'] = 'conduit_result_drupal_line_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['table'] = 'field_revision_conduit_result_drupal_line';
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['field'] = 'conduit_result_drupal_line_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['label'] = 'Line';
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_line_value_raw']['empty_zero'] = 0;
  /* Field: Revision tables: conduit_result_drupal_message => Value */
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['id'] = 'conduit_result_drupal_message_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['table'] = 'field_revision_conduit_result_drupal_message';
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['field'] = 'conduit_result_drupal_message_value_raw';
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['label'] = 'Message';
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['alter']['html'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['hide_empty'] = 0;
  $handler->display->display_options['fields']['conduit_result_drupal_message_value_raw']['empty_zero'] = 0;
  /* Sort criterion: Revision tables: conduit_result_drupal_summary => Value */
  $handler->display->display_options['sorts']['conduit_result_drupal_summary_value_raw']['id'] = 'conduit_result_drupal_summary_value_raw';
  $handler->display->display_options['sorts']['conduit_result_drupal_summary_value_raw']['table'] = 'field_revision_conduit_result_drupal_summary';
  $handler->display->display_options['sorts']['conduit_result_drupal_summary_value_raw']['field'] = 'conduit_result_drupal_summary_value_raw';
  /* Sort criterion: Revision tables: conduit_result_drupal_line => Value */
  $handler->display->display_options['sorts']['conduit_result_drupal_line_value_raw']['id'] = 'conduit_result_drupal_line_value_raw';
  $handler->display->display_options['sorts']['conduit_result_drupal_line_value_raw']['table'] = 'field_revision_conduit_result_drupal_line';
  $handler->display->display_options['sorts']['conduit_result_drupal_line_value_raw']['field'] = 'conduit_result_drupal_line_value_raw';
  /* Sort criterion: Revision tables: conduit_result_drupal_message => Value */
  $handler->display->display_options['sorts']['conduit_result_drupal_message_value_raw']['id'] = 'conduit_result_drupal_message_value_raw';
  $handler->display->display_options['sorts']['conduit_result_drupal_message_value_raw']['table'] = 'field_revision_conduit_result_drupal_message';
  $handler->display->display_options['sorts']['conduit_result_drupal_message_value_raw']['field'] = 'conduit_result_drupal_message_value_raw';
  /* Contextual filter: Revision tables: conduit_result_drupal_summary => Entity id */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'field_revision_conduit_result_drupal_summary';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['entity_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['entity_id']['validate_options']['types'] = array(
    'conduit_job_drupal_coder' => 'conduit_job_drupal_coder',
  );
  $handler->display->display_options['arguments']['entity_id']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['entity_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['entity_id']['not'] = 0;
  /* Contextual filter: Revision tables: conduit_result_drupal_summary => Revision id */
  $handler->display->display_options['arguments']['revision_id_raw']['id'] = 'revision_id_raw';
  $handler->display->display_options['arguments']['revision_id_raw']['table'] = 'field_revision_conduit_result_drupal_summary';
  $handler->display->display_options['arguments']['revision_id_raw']['field'] = 'revision_id_raw';
  $handler->display->display_options['arguments']['revision_id_raw']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['revision_id_raw']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['revision_id_raw']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['revision_id_raw']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['revision_id_raw']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['revision_id_raw']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['revision_id_raw']['not'] = 0;
  /* Filter criterion: Revision tables: conduit_result_drupal_item => Value */
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['id'] = 'conduit_result_drupal_item_value_raw';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['table'] = 'field_revision_conduit_result_drupal_item';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['field'] = 'conduit_result_drupal_item_value_raw';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['operator'] = 'contains';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['exposed'] = TRUE;
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['expose']['operator_id'] = 'conduit_result_drupal_item_value_raw_op';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['expose']['label'] = 'File';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['expose']['operator'] = 'conduit_result_drupal_item_value_raw_op';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['expose']['identifier'] = 'file';
  $handler->display->display_options['filters']['conduit_result_drupal_item_value_raw']['expose']['multiple'] = FALSE;
  $translatables['drupal_coder_result'] = array(
    t('Defaults'),
    t('more'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No results'),
    t('No results to display.'),
    t('Severity'),
    t('Line'),
    t('Message'),
    t('All'),
    t('File'),
  );

  $views[$view->name] = $view;

  return $views;
}
