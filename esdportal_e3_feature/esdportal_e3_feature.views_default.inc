<?php
/**
 * @file
 * esdportal_e3_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function esdportal_e3_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'e3_log_entry_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'e3_note';
  $view->human_name = 'E3 Log Entry Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'E3 Log Entry Management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'id' => 'id',
    'type' => 'type',
    'uid' => 'uid',
    'created' => 'created',
    'changed' => 'changed',
    'field_fname' => 'field_fname',
    'field_lname' => 'field_fname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: E3 Experience Note: Coach */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'e3_note';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Coach';
  /* Field: Bulk operations: E3 Experience Note */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'e3_note';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'VBO';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::esdportal_str_send_unsafe_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: E3 Experience Note: E3 experience note ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_note';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Log ID';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'e3-note/[id]/edit';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Experience Note: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'e3_note';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Log Type';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fname']['label'] = 'Coach';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['relationship'] = 'uid';
  /* Field: E3 Experience Note: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'e3_note';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: E3 Experience Note: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'e3_note';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'e3-log-management';
  $translatables['e3_log_entry_management'] = array(
    t('Master'),
    t('E3 Log Entry Management'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Coach'),
    t('VBO'),
    t('Log ID'),
    t('.'),
    t('Log Type'),
    t('Last Name'),
    t('Date created'),
    t('Date changed'),
    t('Page'),
  );
  $export['e3_log_entry_management'] = $view;

  $view = new view();
  $view->name = 'e3_teacher_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'e3_contact';
  $view->human_name = 'E3 Teacher Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'E3 Teacher Management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'uid' => 'uid',
    'field_contact_addy_first_name' => 'field_contact_addy_first_name',
    'field_contact_addy_last_name' => 'field_contact_addy_last_name',
    'fullname' => 'fullname',
    'field_ec' => 'field_ec',
    'field_fname' => 'field_fname',
    'field_lname' => 'field_fname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_addy_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_addy_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fullname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ec' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: E3 Contact: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'e3_contact';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Coach';
  /* Field: Bulk operations: E3 Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::esdportal_str_send_unsafe_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'E3 ID';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'e3-contact/[id]/edit';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Contact: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: E3 Contact: Home address - First name */
  $handler->display->display_options['fields']['field_contact_addy_first_name']['id'] = 'field_contact_addy_first_name';
  $handler->display->display_options['fields']['field_contact_addy_first_name']['table'] = 'field_data_field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy_first_name']['field'] = 'field_contact_addy_first_name';
  $handler->display->display_options['fields']['field_contact_addy_first_name']['label'] = 'First name';
  /* Field: E3 Contact: Home address - Last name */
  $handler->display->display_options['fields']['field_contact_addy_last_name']['id'] = 'field_contact_addy_last_name';
  $handler->display->display_options['fields']['field_contact_addy_last_name']['table'] = 'field_data_field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy_last_name']['field'] = 'field_contact_addy_last_name';
  $handler->display->display_options['fields']['field_contact_addy_last_name']['label'] = 'Last name';
  /* Field: E3 Contact: Label */
  $handler->display->display_options['fields']['fullname']['id'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['fullname']['field'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['label'] = 'Name';
  $handler->display->display_options['fields']['fullname']['alter']['path'] = '/e3-contact/[id]/edit';
  /* Field: Field: related Early Childchood Center record */
  $handler->display->display_options['fields']['field_ec']['id'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['table'] = 'field_data_field_ec';
  $handler->display->display_options['fields']['field_ec']['field'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['label'] = 'Program';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fname']['label'] = 'Coach';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['relationship'] = 'uid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'e3-teacher-management';
  $translatables['e3_teacher_management'] = array(
    t('Master'),
    t('E3 Teacher Management'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Coach'),
    t('E3 Contact'),
    t('E3 ID'),
    t('.'),
    t('Type'),
    t('First name'),
    t('Last name'),
    t('Name'),
    t('Program'),
    t('Last Name'),
    t('Page'),
  );
  $export['e3_teacher_management'] = $view;

  $view = new view();
  $view->name = 'e3_teacher_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'e3_contact';
  $view->human_name = 'E3 Teacher Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'E3 Teacher Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    20 => '20',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ec_teacher_e3_note']['id'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['relationships']['reverse_field_ec_teacher_e3_note']['table'] = 'e3_contact';
  $handler->display->display_options['relationships']['reverse_field_ec_teacher_e3_note']['field'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['relationships']['reverse_field_ec_teacher_e3_note']['label'] = 'Related Log Entry';
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Positive Climate Score */
  $handler->display->display_options['fields']['field_pc_score']['id'] = 'field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['table'] = 'field_data_field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['field'] = 'field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_pc_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pc_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Negative Climate Score */
  $handler->display->display_options['fields']['field_nc_score']['id'] = 'field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['table'] = 'field_data_field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['field'] = 'field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_nc_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Teacher Sensitivity Score */
  $handler->display->display_options['fields']['field_ts_score']['id'] = 'field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['table'] = 'field_data_field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['field'] = 'field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_ts_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ts_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Regard for Student Perspectives Score */
  $handler->display->display_options['fields']['field_rsp_score']['id'] = 'field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['table'] = 'field_data_field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['field'] = 'field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_rsp_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Behavior Management Score */
  $handler->display->display_options['fields']['field_bm_score']['id'] = 'field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['table'] = 'field_data_field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['field'] = 'field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_bm_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Productivity Score */
  $handler->display->display_options['fields']['field_p_score']['id'] = 'field_p_score';
  $handler->display->display_options['fields']['field_p_score']['table'] = 'field_data_field_p_score';
  $handler->display->display_options['fields']['field_p_score']['field'] = 'field_p_score';
  $handler->display->display_options['fields']['field_p_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_p_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_p_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Instructional Learning Formats Score */
  $handler->display->display_options['fields']['field_ilf_score']['id'] = 'field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['table'] = 'field_data_field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['field'] = 'field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_ilf_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ilf_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Concept Development Score */
  $handler->display->display_options['fields']['field_cd_score']['id'] = 'field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['table'] = 'field_data_field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['field'] = 'field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_cd_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Quality of Feedback Score */
  $handler->display->display_options['fields']['field_qf_score']['id'] = 'field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['table'] = 'field_data_field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['field'] = 'field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_qf_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_qf_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Language Modeling Score */
  $handler->display->display_options['fields']['field_lm_score']['id'] = 'field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['table'] = 'field_data_field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['field'] = 'field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_lm_score']['type'] = 'list_key';
  /* Contextual filter: E3 Contact: E3 contact ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'e3_contact';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: E3 Contact: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'e3_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher' => 'teacher',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: My Teachers */
  $handler = $view->new_display('page', 'My Teachers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Teachers';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Contact: Label */
  $handler->display->display_options['fields']['fullname']['id'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['fullname']['field'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['label'] = 'Name';
  $handler->display->display_options['fields']['fullname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['fullname']['alter']['path'] = 'teacher-report/[id]';
  /* Field: E3 Contact: Home address - First name */
  $handler->display->display_options['fields']['field_contact_addy_first_name']['id'] = 'field_contact_addy_first_name';
  $handler->display->display_options['fields']['field_contact_addy_first_name']['table'] = 'field_data_field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy_first_name']['field'] = 'field_contact_addy_first_name';
  $handler->display->display_options['fields']['field_contact_addy_first_name']['label'] = 'First name';
  /* Field: E3 Contact: Home address - Last name */
  $handler->display->display_options['fields']['field_contact_addy_last_name']['id'] = 'field_contact_addy_last_name';
  $handler->display->display_options['fields']['field_contact_addy_last_name']['table'] = 'field_data_field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy_last_name']['field'] = 'field_contact_addy_last_name';
  $handler->display->display_options['fields']['field_contact_addy_last_name']['label'] = 'Last name';
  /* Field: Field: related Early Childchood Center record */
  $handler->display->display_options['fields']['field_ec']['id'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['table'] = 'field_data_field_ec';
  $handler->display->display_options['fields']['field_ec']['field'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['label'] = 'Program';
  /* Field: E3 Contact: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: E3 Contact: Author */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'e3_contact';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'my-teachers';

  /* Display: Teacher Report */
  $handler = $view->new_display('page', 'Teacher Report', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'E3 Teacher Report';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'fullname' => 'fullname',
    'id' => 'id',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/my-teachers" style="color:white; background:#f05a28; display:inline; padding:10px; border:solid white 2px; font-weight:bold">Back to Teacher List</a><a href="/e3-note/add/observation_log" style="color:white; background:#f05a28; display:inline; padding:10px; border:solid white 2px">Add Log Entry</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: Label */
  $handler->display->display_options['fields']['fullname']['id'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['fullname']['field'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['label'] = '';
  $handler->display->display_options['fields']['fullname']['element_type'] = 'h3';
  $handler->display->display_options['fields']['fullname']['element_label_colon'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'E3 ID';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Contact: Home address */
  $handler->display->display_options['fields']['field_contact_addy']['id'] = 'field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy']['table'] = 'field_data_field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy']['field'] = 'field_contact_addy';
  $handler->display->display_options['fields']['field_contact_addy']['label'] = '';
  $handler->display->display_options['fields']['field_contact_addy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_addy']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_contact_addy']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'teacher-report';

  /* Display: Work Info */
  $handler = $view->new_display('attachment', 'Work Info', 'attachment_5');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Field: related Early Childchood Center record */
  $handler->display->display_options['fields']['field_ec']['id'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['table'] = 'field_data_field_ec';
  $handler->display->display_options['fields']['field_ec']['field'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['label'] = 'Works at';
  $handler->display->display_options['fields']['field_ec']['element_label_type'] = 'h4';
  /* Field: E3 Contact: Position / role */
  $handler->display->display_options['fields']['field_teacher_ec_role']['id'] = 'field_teacher_ec_role';
  $handler->display->display_options['fields']['field_teacher_ec_role']['table'] = 'field_data_field_teacher_ec_role';
  $handler->display->display_options['fields']['field_teacher_ec_role']['field'] = 'field_teacher_ec_role';
  $handler->display->display_options['fields']['field_teacher_ec_role']['label'] = '';
  $handler->display->display_options['fields']['field_teacher_ec_role']['element_label_colon'] = FALSE;
  /* Field: E3 Contact: Work email */
  $handler->display->display_options['fields']['field_work_email']['id'] = 'field_work_email';
  $handler->display->display_options['fields']['field_work_email']['table'] = 'field_data_field_work_email';
  $handler->display->display_options['fields']['field_work_email']['field'] = 'field_work_email';
  $handler->display->display_options['fields']['field_work_email']['element_type'] = 'span';
  /* Field: E3 Contact: Work phone */
  $handler->display->display_options['fields']['field_work_phone']['id'] = 'field_work_phone';
  $handler->display->display_options['fields']['field_work_phone']['table'] = 'field_data_field_work_phone';
  $handler->display->display_options['fields']['field_work_phone']['field'] = 'field_work_phone';
  $handler->display->display_options['fields']['field_work_phone']['element_type'] = 'span';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Target Practice */
  $handler = $view->new_display('attachment', 'Target Practice', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Planning and Strategy';
  $handler->display->display_options['header']['area']['content'] = '<h2>What\'s next?</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: E3 Experience Note: Target Focus Area */
  $handler->display->display_options['fields']['field_target_focus']['id'] = 'field_target_focus';
  $handler->display->display_options['fields']['field_target_focus']['table'] = 'field_data_field_target_focus';
  $handler->display->display_options['fields']['field_target_focus']['field'] = 'field_target_focus';
  $handler->display->display_options['fields']['field_target_focus']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: Target Score */
  $handler->display->display_options['fields']['field_target_score']['id'] = 'field_target_score';
  $handler->display->display_options['fields']['field_target_score']['table'] = 'field_data_field_target_score';
  $handler->display->display_options['fields']['field_target_score']['field'] = 'field_target_score';
  $handler->display->display_options['fields']['field_target_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: How you plan to achieve target */
  $handler->display->display_options['fields']['field_key_levers']['id'] = 'field_key_levers';
  $handler->display->display_options['fields']['field_key_levers']['table'] = 'field_data_field_key_levers';
  $handler->display->display_options['fields']['field_key_levers']['field'] = 'field_key_levers';
  $handler->display->display_options['fields']['field_key_levers']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: E3 Contact: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'e3_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher' => 'teacher',
  );
  /* Filter criterion: E3 Experience Note: Target Score (field_target_score) */
  $handler->display->display_options['filters']['field_target_score_value']['id'] = 'field_target_score_value';
  $handler->display->display_options['filters']['field_target_score_value']['table'] = 'field_data_field_target_score';
  $handler->display->display_options['filters']['field_target_score_value']['field'] = 'field_target_score_value';
  $handler->display->display_options['filters']['field_target_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_target_score_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_target_score_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Next Steps */
  $handler = $view->new_display('attachment', 'Next Steps', 'attachment_4');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_next_step_1' => 'field_next_step_1',
    'field_target_date_1' => 'field_target_date_1',
    'field_step_complete_1' => 'field_step_complete_1',
    'field_next_step_2' => 'field_next_step_1',
    'field_target_date_2' => 'field_target_date_1',
    'field_step_complete_2' => 'field_step_complete_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_next_step_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br></br>',
      'empty_column' => 0,
    ),
    'field_target_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br></br>',
      'empty_column' => 0,
    ),
    'field_step_complete_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br>',
      'empty_column' => 0,
    ),
    'field_next_step_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_step_complete_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Experience Note: 1st Next Step */
  $handler->display->display_options['fields']['field_next_step_1']['id'] = 'field_next_step_1';
  $handler->display->display_options['fields']['field_next_step_1']['table'] = 'field_data_field_next_step_1';
  $handler->display->display_options['fields']['field_next_step_1']['field'] = 'field_next_step_1';
  $handler->display->display_options['fields']['field_next_step_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_next_step_1']['label'] = 'Next Steps';
  /* Field: E3 Experience Note: 1st Target Completion Date */
  $handler->display->display_options['fields']['field_target_date_1']['id'] = 'field_target_date_1';
  $handler->display->display_options['fields']['field_target_date_1']['table'] = 'field_data_field_target_date_1';
  $handler->display->display_options['fields']['field_target_date_1']['field'] = 'field_target_date_1';
  $handler->display->display_options['fields']['field_target_date_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: 1st Step Complete */
  $handler->display->display_options['fields']['field_step_complete_1']['id'] = 'field_step_complete_1';
  $handler->display->display_options['fields']['field_step_complete_1']['table'] = 'field_data_field_step_complete_1';
  $handler->display->display_options['fields']['field_step_complete_1']['field'] = 'field_step_complete_1';
  $handler->display->display_options['fields']['field_step_complete_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_step_complete_1']['label'] = 'Complete?';
  $handler->display->display_options['fields']['field_step_complete_1']['type'] = 'editable';
  $handler->display->display_options['fields']['field_step_complete_1']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: E3 Experience Note: 2nd Next Step */
  $handler->display->display_options['fields']['field_next_step_2']['id'] = 'field_next_step_2';
  $handler->display->display_options['fields']['field_next_step_2']['table'] = 'field_data_field_next_step_2';
  $handler->display->display_options['fields']['field_next_step_2']['field'] = 'field_next_step_2';
  $handler->display->display_options['fields']['field_next_step_2']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: 2nd Target Completion Date */
  $handler->display->display_options['fields']['field_target_date_2']['id'] = 'field_target_date_2';
  $handler->display->display_options['fields']['field_target_date_2']['table'] = 'field_data_field_target_date_2';
  $handler->display->display_options['fields']['field_target_date_2']['field'] = 'field_target_date_2';
  $handler->display->display_options['fields']['field_target_date_2']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_target_date_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: E3 Experience Note: 2nd Step Complete */
  $handler->display->display_options['fields']['field_step_complete_2']['id'] = 'field_step_complete_2';
  $handler->display->display_options['fields']['field_step_complete_2']['table'] = 'field_data_field_step_complete_2';
  $handler->display->display_options['fields']['field_step_complete_2']['field'] = 'field_step_complete_2';
  $handler->display->display_options['fields']['field_step_complete_2']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_step_complete_2']['type'] = 'editable';
  $handler->display->display_options['fields']['field_step_complete_2']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: E3 Contact: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'e3_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher' => 'teacher',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: E3 Experience Note: 1st Next Step (field_next_step_1) */
  $handler->display->display_options['filters']['field_next_step_1_value']['id'] = 'field_next_step_1_value';
  $handler->display->display_options['filters']['field_next_step_1_value']['table'] = 'field_data_field_next_step_1';
  $handler->display->display_options['filters']['field_next_step_1_value']['field'] = 'field_next_step_1_value';
  $handler->display->display_options['filters']['field_next_step_1_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_next_step_1_value']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Session Log */
  $handler = $view->new_display('attachment', 'Session Log', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Session Log</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'human_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: E3 Experience Note: Focus areas worked on */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_focus_area']['label'] = 'Focus areas';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '</br>';
  /* Field: E3 Experience Note: Coaching strategies used */
  $handler->display->display_options['fields']['field_coaching_strategy']['id'] = 'field_coaching_strategy';
  $handler->display->display_options['fields']['field_coaching_strategy']['table'] = 'field_data_field_coaching_strategy';
  $handler->display->display_options['fields']['field_coaching_strategy']['field'] = 'field_coaching_strategy';
  $handler->display->display_options['fields']['field_coaching_strategy']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_coaching_strategy']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_coaching_strategy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_coaching_strategy']['separator'] = '</br>';
  /* Field: E3 Experience Note: What went well? */
  $handler->display->display_options['fields']['field_session_notes']['id'] = 'field_session_notes';
  $handler->display->display_options['fields']['field_session_notes']['table'] = 'field_data_field_session_notes';
  $handler->display->display_options['fields']['field_session_notes']['field'] = 'field_session_notes';
  $handler->display->display_options['fields']['field_session_notes']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: What was challenging? What might I do differently? */
  $handler->display->display_options['fields']['field_session_challenges']['id'] = 'field_session_challenges';
  $handler->display->display_options['fields']['field_session_challenges']['table'] = 'field_data_field_session_challenges';
  $handler->display->display_options['fields']['field_session_challenges']['field'] = 'field_session_challenges';
  $handler->display->display_options['fields']['field_session_challenges']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_session_challenges']['label'] = 'Challenges';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: E3 Contact: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'e3_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher' => 'teacher',
  );
  /* Filter criterion: E3 Experience Note: Focus areas worked on (field_focus_area) */
  $handler->display->display_options['filters']['field_focus_area_value']['id'] = 'field_focus_area_value';
  $handler->display->display_options['filters']['field_focus_area_value']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['filters']['field_focus_area_value']['field'] = 'field_focus_area_value';
  $handler->display->display_options['filters']['field_focus_area_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_focus_area_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_focus_area_value']['value'] = array();
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: CLASS Ave */
  $handler = $view->new_display('attachment', 'CLASS Ave', 'attachment_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = '';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pc_score' => 'field_pc_score',
    'field_nc_score' => 'field_nc_score',
    'field_ts_score' => 'field_ts_score',
    'field_rsp_score' => 'field_rsp_score',
    'field_bm_score' => 'field_bm_score',
    'field_p_score' => 'field_p_score',
    'field_ilf_score' => 'field_ilf_score',
    'field_cd_score' => 'field_cd_score',
    'field_qf_score' => 'field_qf_score',
    'field_lm_score' => 'field_lm_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_pc_score' => '#134370',
    'field_nc_score' => '#134370',
    'field_ts_score' => '#134370',
    'field_rsp_score' => '#29b573',
    'field_bm_score' => '#29b573',
    'field_p_score' => '#29b573',
    'field_ilf_score' => '#29b573',
    'field_cd_score' => '#00aff0',
    'field_qf_score' => '#00aff0',
    'field_lm_score' => '#00aff0',
  );
  $handler->display->display_options['style_options']['title'] = 'CLASS Assessment Baseline';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Indicators */
  $handler = $view->new_display('page', 'Indicators', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = '';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pc_score' => 'field_pc_score',
    'field_pc_positive_affect' => 'field_pc_positive_affect',
    'field_pc_positive_communication' => 'field_pc_positive_communication',
    'field_pc_relationships' => 'field_pc_relationships',
    'field_pc_respect' => 'field_pc_respect',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_pc_score' => '#0d233a',
    'field_pc_positive_affect' => '#8bbc21',
    'field_pc_positive_communication' => '#910000',
    'field_pc_relationships' => '#1aadce',
    'field_pc_respect' => '#492970',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Positive Climate Score */
  $handler->display->display_options['fields']['field_pc_score']['id'] = 'field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['table'] = 'field_data_field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['field'] = 'field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_score']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_pc_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pc_score']['type'] = 'list_key';
  /* Field: E3 Experience Note: Positive Affect */
  $handler->display->display_options['fields']['field_pc_positive_affect']['id'] = 'field_pc_positive_affect';
  $handler->display->display_options['fields']['field_pc_positive_affect']['table'] = 'field_data_field_pc_positive_affect';
  $handler->display->display_options['fields']['field_pc_positive_affect']['field'] = 'field_pc_positive_affect';
  $handler->display->display_options['fields']['field_pc_positive_affect']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: Positive Communication */
  $handler->display->display_options['fields']['field_pc_positive_communication']['id'] = 'field_pc_positive_communication';
  $handler->display->display_options['fields']['field_pc_positive_communication']['table'] = 'field_data_field_pc_positive_communication';
  $handler->display->display_options['fields']['field_pc_positive_communication']['field'] = 'field_pc_positive_communication';
  $handler->display->display_options['fields']['field_pc_positive_communication']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: Relationships */
  $handler->display->display_options['fields']['field_pc_relationships']['id'] = 'field_pc_relationships';
  $handler->display->display_options['fields']['field_pc_relationships']['table'] = 'field_data_field_pc_relationships';
  $handler->display->display_options['fields']['field_pc_relationships']['field'] = 'field_pc_relationships';
  $handler->display->display_options['fields']['field_pc_relationships']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  /* Field: E3 Experience Note: Respect */
  $handler->display->display_options['fields']['field_pc_respect']['id'] = 'field_pc_respect';
  $handler->display->display_options['fields']['field_pc_respect']['table'] = 'field_data_field_pc_respect';
  $handler->display->display_options['fields']['field_pc_respect']['field'] = 'field_pc_respect';
  $handler->display->display_options['fields']['field_pc_respect']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['path'] = 'teacher-report/pc/%';
  $translatables['e3_teacher_reports'] = array(
    t('Master'),
    t('E3 Teacher Reports'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Related Log Entry'),
    t('E3 contact ID'),
    t('.'),
    t(','),
    t('Positive Climate Score'),
    t('Negative Climate Score'),
    t('Teacher Sensitivity Score'),
    t('Regard for Student Perspectives Score'),
    t('Behavior Management Score'),
    t('Productivity Score'),
    t('Instructional Learning Formats Score'),
    t('Concept Development Score'),
    t('Quality of Feedback Score'),
    t('Language Modeling Score'),
    t('All'),
    t('My Teachers'),
    t('Name'),
    t('First name'),
    t('Last name'),
    t('Program'),
    t('Type'),
    t('Teacher Report'),
    t('E3 Teacher Report'),
    t('<a href="/my-teachers" style="color:white; background:#f05a28; display:inline; padding:10px; border:solid white 2px; font-weight:bold">Back to Teacher List</a><a href="/e3-note/add/observation_log" style="color:white; background:#f05a28; display:inline; padding:10px; border:solid white 2px">Add Log Entry</a>'),
    t('E3 ID'),
    t('Email'),
    t('Work Info'),
    t('Works at'),
    t('Work email'),
    t('Work phone'),
    t('Target Practice'),
    t('Planning and Strategy'),
    t('<h2>What\'s next?</h2>'),
    t('Date'),
    t('Target Focus Area'),
    t('Target Score'),
    t('How you plan to achieve target'),
    t('Next Steps'),
    t('1st Target Completion Date'),
    t('Complete?'),
    t('2nd Next Step'),
    t('2nd Target Completion Date'),
    t('2nd Step Complete'),
    t('Session Log'),
    t('<h2>Session Log</h2>'),
    t('Focus areas'),
    t('Coaching strategies used'),
    t('What went well?'),
    t('Challenges'),
    t('CLASS Ave'),
    t('Indicators'),
    t('Positive Affect'),
    t('Positive Communication'),
    t('Relationships'),
    t('Respect'),
  );
  $export['e3_teacher_reports'] = $view;

  return $export;
}
