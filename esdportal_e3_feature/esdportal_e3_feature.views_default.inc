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
    'field_time_of_observation' => 'field_time_of_observation',
    'id' => 'id',
    'field_fname' => 'field_fname',
    'field_lname' => 'field_fname',
    'type' => 'type',
    'field_ec_teacher' => 'field_ec_teacher',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_of_observation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'field_fname' => array(
      'sortable' => 1,
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
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ec_teacher' => array(
      'sortable' => 1,
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
  );
  /* Relationship: E3 Experience Note: Coach */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'e3_note';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Coach';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
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
  /* Field: E3 Experience Note: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'e3_note';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Log Type';
  /* Field: E3 Experience Note: Teacher */
  $handler->display->display_options['fields']['field_ec_teacher']['id'] = 'field_ec_teacher';
  $handler->display->display_options['fields']['field_ec_teacher']['table'] = 'field_data_field_ec_teacher';
  $handler->display->display_options['fields']['field_ec_teacher']['field'] = 'field_ec_teacher';
  $handler->display->display_options['fields']['field_ec_teacher']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ec_teacher']['alter']['path'] = 'teacher-report/[field_ec_teacher-target_id]';
  $handler->display->display_options['fields']['field_ec_teacher']['settings'] = array(
    'link' => 0,
  );
  /* Field: E3 Experience Note: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'e3_note';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date added';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: E3 Experience Note: E3 experience note ID */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'e3_note';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['label'] = 'View';
  $handler->display->display_options['fields']['id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id_1']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['id_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id_1']['alter']['path'] = 'e3-note/[id_1]';
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Field: E3 Experience Note: E3 experience note ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_note';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Edit';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'e3-note/[id]/edit';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Contextual filter: E3 Experience Note: Teacher (field_ec_teacher) */
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['id'] = 'field_ec_teacher_target_id';
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['table'] = 'field_data_field_ec_teacher';
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['field'] = 'field_ec_teacher_target_id';
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ec_teacher_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    17 => 0,
    7 => 0,
    18 => 0,
    6 => 0,
    19 => 0,
    20 => 0,
  );
  /* Filter criterion: E3 Experience Note: Coach */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'e3_note';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Coach';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    17 => 0,
    7 => 0,
    18 => 0,
    6 => 0,
    19 => 0,
    20 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'e3-logs';
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
    t('Date'),
    t('Last Name'),
    t('Log Type'),
    t('Teacher'),
    t('Date added'),
    t('View'),
    t('.'),
    t('Edit'),
    t('All'),
    t('Type'),
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
    'action::esdportal_e3_assign_coach_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
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
      'selected' => 0,
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
  /* Field: E3 Contact: Firstname */
  $handler->display->display_options['fields']['firstname']['id'] = 'firstname';
  $handler->display->display_options['fields']['firstname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['firstname']['field'] = 'firstname';
  $handler->display->display_options['fields']['firstname']['label'] = 'First name';
  /* Field: E3 Contact: Lastname */
  $handler->display->display_options['fields']['lastname']['id'] = 'lastname';
  $handler->display->display_options['fields']['lastname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['lastname']['field'] = 'lastname';
  $handler->display->display_options['fields']['lastname']['label'] = 'Last name';
  /* Field: E3 Contact: Label */
  $handler->display->display_options['fields']['fullname']['id'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['fullname']['field'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['label'] = 'Name';
  $handler->display->display_options['fields']['fullname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fullname']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['fullname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['fullname']['alter']['path'] = '/e3-contact/[id]';
  /* Field: Field: Employing Early Childhood Center */
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
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Coach';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    17 => 0,
    7 => 0,
    18 => 0,
    6 => 0,
    19 => 0,
    20 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'e3-teachers';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download This List';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%exposed_%timestamp-mmm_%timestamp-dd_%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'E3 ID';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'e3-contact/[id]/edit';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Contact: Lastname */
  $handler->display->display_options['fields']['lastname']['id'] = 'lastname';
  $handler->display->display_options['fields']['lastname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['lastname']['field'] = 'lastname';
  /* Field: E3 Contact: Label */
  $handler->display->display_options['fields']['fullname']['id'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['fullname']['field'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['label'] = 'Name';
  $handler->display->display_options['fields']['fullname']['alter']['path'] = '/e3-contact/[id]/edit';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Field: Employing Early Childhood Center */
  $handler->display->display_options['fields']['field_ec']['id'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['table'] = 'field_data_field_ec';
  $handler->display->display_options['fields']['field_ec']['field'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['label'] = 'Program';
  /* Field: E3 Contact: Position / role */
  $handler->display->display_options['fields']['field_teacher_ec_role']['id'] = 'field_teacher_ec_role';
  $handler->display->display_options['fields']['field_teacher_ec_role']['table'] = 'field_data_field_teacher_ec_role';
  $handler->display->display_options['fields']['field_teacher_ec_role']['field'] = 'field_teacher_ec_role';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fname']['label'] = 'Coach';
  $handler->display->display_options['fields']['field_fname']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_lname']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Assigned Coach';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_fname] [field_lname]';
  $handler->display->display_options['path'] = 'e3-teachers-export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
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
    t('First name'),
    t('Last name'),
    t('Name'),
    t('View'),
    t('Program'),
    t('Last Name'),
    t('Page'),
    t('Data export'),
    t('Lastname'),
    t('Email'),
    t('Position / role'),
    t('Assigned Coach'),
    t('[field_fname] [field_lname]'),
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'fullname' => 'fullname',
    'firstname' => 'firstname',
    'lastname' => 'lastname',
    'field_ec' => 'field_ec',
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
    'fullname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ec' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'E3 ID';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: E3 Contact: Label */
  $handler->display->display_options['fields']['fullname']['id'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['fullname']['field'] = 'fullname';
  $handler->display->display_options['fields']['fullname']['label'] = 'Link';
  $handler->display->display_options['fields']['fullname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fullname']['alter']['text'] = 'View report';
  $handler->display->display_options['fields']['fullname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['fullname']['alter']['path'] = 'teacher-report/[id]';
  /* Field: E3 Contact: Firstname */
  $handler->display->display_options['fields']['firstname']['id'] = 'firstname';
  $handler->display->display_options['fields']['firstname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['firstname']['field'] = 'firstname';
  $handler->display->display_options['fields']['firstname']['label'] = 'First name';
  /* Field: E3 Contact: Lastname */
  $handler->display->display_options['fields']['lastname']['id'] = 'lastname';
  $handler->display->display_options['fields']['lastname']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['lastname']['field'] = 'lastname';
  $handler->display->display_options['fields']['lastname']['label'] = 'Last name';
  /* Field: Field: Employing Early Childhood Center */
  $handler->display->display_options['fields']['field_ec']['id'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['table'] = 'field_data_field_ec';
  $handler->display->display_options['fields']['field_ec']['field'] = 'field_ec';
  $handler->display->display_options['fields']['field_ec']['label'] = 'Program';
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
  /* Field: Field: Employing Early Childhood Center */
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

  /* Display: Domains */
  $handler = $view->new_display('attachment', 'Domains', 'attachment_9');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'CLASS Header';
  $handler->display->display_options['header']['area']['content'] = '<h2>CLASS Baseline Assessment</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'class_assessment' => 'class_assessment',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'page_7' => 0,
    'page_8' => 0,
    'page_11' => 0,
    'page_10' => 0,
    'page_9' => 0,
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
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
    'page' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'page_7' => 0,
    'page_8' => 0,
    'page_11' => 0,
    'page_10' => 0,
    'page_9' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Count/Menu */
  $handler = $view->new_display('attachment', 'Count/Menu', 'attachment_8');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
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
    'field_pc_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nc_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ts_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rsp_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bm_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_p_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ilf_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cd_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_qf_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lm_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = 'Number of times observed';
  /* Field: E3 Experience Note: Positive Climate Score */
  $handler->display->display_options['fields']['field_pc_score']['id'] = 'field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['table'] = 'field_data_field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['field'] = 'field_pc_score';
  $handler->display->display_options['fields']['field_pc_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_pc_score']['label'] = 'Positive Climate';
  $handler->display->display_options['fields']['field_pc_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_score']['alter']['text'] = '[field_pc_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_pc_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pc_score']['alter']['path'] = 'teacher-report/[id]/pc';
  $handler->display->display_options['fields']['field_pc_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_pc_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pc_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Negative Climate Score */
  $handler->display->display_options['fields']['field_nc_score']['id'] = 'field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['table'] = 'field_data_field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['field'] = 'field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_nc_score']['label'] = 'Negative Climate';
  $handler->display->display_options['fields']['field_nc_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nc_score']['alter']['text'] = '[field_nc_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_nc_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nc_score']['alter']['path'] = 'teacher-report/[id]/nc';
  $handler->display->display_options['fields']['field_nc_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_nc_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_nc_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Teacher Sensitivity Score */
  $handler->display->display_options['fields']['field_ts_score']['id'] = 'field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['table'] = 'field_data_field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['field'] = 'field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_ts_score']['label'] = 'Teacher Sensitivity';
  $handler->display->display_options['fields']['field_ts_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ts_score']['alter']['text'] = '[field_ts_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_ts_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ts_score']['alter']['path'] = 'teacher-report/[id]/ts';
  $handler->display->display_options['fields']['field_ts_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_ts_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ts_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Regard for Student Perspectives Score */
  $handler->display->display_options['fields']['field_rsp_score']['id'] = 'field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['table'] = 'field_data_field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['field'] = 'field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_rsp_score']['label'] = 'Regard for Student Perspectives';
  $handler->display->display_options['fields']['field_rsp_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rsp_score']['alter']['text'] = '[field_rsp_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_rsp_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_rsp_score']['alter']['path'] = 'teacher-report/[id]/rsp';
  $handler->display->display_options['fields']['field_rsp_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_rsp_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_rsp_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Behavior Management Score */
  $handler->display->display_options['fields']['field_bm_score']['id'] = 'field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['table'] = 'field_data_field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['field'] = 'field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_bm_score']['label'] = 'Behavior Management';
  $handler->display->display_options['fields']['field_bm_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bm_score']['alter']['text'] = '[field_bm_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_bm_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_bm_score']['alter']['path'] = 'teacher-report/[id]/bm';
  $handler->display->display_options['fields']['field_bm_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_bm_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bm_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Productivity Score */
  $handler->display->display_options['fields']['field_p_score']['id'] = 'field_p_score';
  $handler->display->display_options['fields']['field_p_score']['table'] = 'field_data_field_p_score';
  $handler->display->display_options['fields']['field_p_score']['field'] = 'field_p_score';
  $handler->display->display_options['fields']['field_p_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_p_score']['label'] = 'Productivity';
  $handler->display->display_options['fields']['field_p_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_p_score']['alter']['text'] = '[field_p_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_p_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_p_score']['alter']['path'] = 'teacher-report/[id]/p';
  $handler->display->display_options['fields']['field_p_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_p_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_p_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Instructional Learning Formats Score */
  $handler->display->display_options['fields']['field_ilf_score']['id'] = 'field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['table'] = 'field_data_field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['field'] = 'field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_ilf_score']['label'] = 'Instructional Learning Formats';
  $handler->display->display_options['fields']['field_ilf_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ilf_score']['alter']['text'] = '[field_ilf_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_ilf_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ilf_score']['alter']['path'] = 'teacher-report/[id]/ilf';
  $handler->display->display_options['fields']['field_ilf_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_ilf_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ilf_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Concept Development Score */
  $handler->display->display_options['fields']['field_cd_score']['id'] = 'field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['table'] = 'field_data_field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['field'] = 'field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_cd_score']['label'] = 'Concept Development';
  $handler->display->display_options['fields']['field_cd_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cd_score']['alter']['text'] = '[field_cd_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_cd_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cd_score']['alter']['path'] = 'teacher-report/[id]/cd';
  $handler->display->display_options['fields']['field_cd_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_cd_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_cd_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Quality of Feedback Score */
  $handler->display->display_options['fields']['field_qf_score']['id'] = 'field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['table'] = 'field_data_field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['field'] = 'field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_qf_score']['label'] = 'Quality of Feedback';
  $handler->display->display_options['fields']['field_qf_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_qf_score']['alter']['text'] = '[field_qf_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_qf_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_qf_score']['alter']['path'] = 'teacher-report/[id]/qf';
  $handler->display->display_options['fields']['field_qf_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_qf_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_qf_score']['separator'] = ', ';
  /* Field: E3 Experience Note: Language Modeling Score */
  $handler->display->display_options['fields']['field_lm_score']['id'] = 'field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['table'] = 'field_data_field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['field'] = 'field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_score']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_lm_score']['label'] = 'Language Modeling';
  $handler->display->display_options['fields']['field_lm_score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lm_score']['alter']['text'] = '[field_lm_score] &ndash; Click to view details';
  $handler->display->display_options['fields']['field_lm_score']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lm_score']['alter']['path'] = 'teacher-report/[id]/lm';
  $handler->display->display_options['fields']['field_lm_score']['empty'] = 'Not yet observed';
  $handler->display->display_options['fields']['field_lm_score']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lm_score']['separator'] = ', ';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'page_7' => 0,
    'page_8' => 0,
    'page_11' => 0,
    'page_10' => 0,
    'page_9' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Target Practice */
  $handler = $view->new_display('attachment', 'Target Practice', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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

  /* Display: PC */
  $handler = $view->new_display('page', 'PC', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Positive Climate';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pc_positive_affect' => 'field_pc_positive_affect',
    'field_pc_positive_communication' => 'field_pc_positive_communication',
    'field_pc_relationships' => 'field_pc_relationships',
    'field_pc_respect' => 'field_pc_respect',
    'id' => 0,
    'field_pc_score' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_pc_score' => '#0d233a',
    'field_pc_positive_affect' => '#ffd400',
    'field_pc_positive_communication' => '#29b573',
    'field_pc_relationships' => '#f05929',
    'field_pc_respect' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Positive Affect */
  $handler->display->display_options['fields']['field_pc_positive_affect']['id'] = 'field_pc_positive_affect';
  $handler->display->display_options['fields']['field_pc_positive_affect']['table'] = 'field_data_field_pc_positive_affect';
  $handler->display->display_options['fields']['field_pc_positive_affect']['field'] = 'field_pc_positive_affect';
  $handler->display->display_options['fields']['field_pc_positive_affect']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_positive_affect']['type'] = 'list_key';
  /* Field: E3 Experience Note: Positive Communication */
  $handler->display->display_options['fields']['field_pc_positive_communication']['id'] = 'field_pc_positive_communication';
  $handler->display->display_options['fields']['field_pc_positive_communication']['table'] = 'field_data_field_pc_positive_communication';
  $handler->display->display_options['fields']['field_pc_positive_communication']['field'] = 'field_pc_positive_communication';
  $handler->display->display_options['fields']['field_pc_positive_communication']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_positive_communication']['type'] = 'list_key';
  /* Field: E3 Experience Note: Relationships */
  $handler->display->display_options['fields']['field_pc_relationships']['id'] = 'field_pc_relationships';
  $handler->display->display_options['fields']['field_pc_relationships']['table'] = 'field_data_field_pc_relationships';
  $handler->display->display_options['fields']['field_pc_relationships']['field'] = 'field_pc_relationships';
  $handler->display->display_options['fields']['field_pc_relationships']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_relationships']['type'] = 'list_key';
  /* Field: E3 Experience Note: Respect */
  $handler->display->display_options['fields']['field_pc_respect']['id'] = 'field_pc_respect';
  $handler->display->display_options['fields']['field_pc_respect']['table'] = 'field_data_field_pc_respect';
  $handler->display->display_options['fields']['field_pc_respect']['field'] = 'field_pc_respect';
  $handler->display->display_options['fields']['field_pc_respect']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_pc_respect']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Positive Climate Score (field_pc_score) */
  $handler->display->display_options['filters']['field_pc_score_value']['id'] = 'field_pc_score_value';
  $handler->display->display_options['filters']['field_pc_score_value']['table'] = 'field_data_field_pc_score';
  $handler->display->display_options['filters']['field_pc_score_value']['field'] = 'field_pc_score_value';
  $handler->display->display_options['filters']['field_pc_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_pc_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/pc';

  /* Display: PC Line */
  $handler = $view->new_display('chart', 'PC Line', 'chart_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PC Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_pc_score' => 'field_pc_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_pc_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
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
  $handler->display->display_options['fields']['field_pc_score']['label'] = 'Positive Climate Overall';
  $handler->display->display_options['fields']['field_pc_score']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pc_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Positive Climate Score (field_pc_score) */
  $handler->display->display_options['filters']['field_pc_score_value']['id'] = 'field_pc_score_value';
  $handler->display->display_options['filters']['field_pc_score_value']['table'] = 'field_data_field_pc_score';
  $handler->display->display_options['filters']['field_pc_score_value']['field'] = 'field_pc_score_value';
  $handler->display->display_options['filters']['field_pc_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_pc_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_2';

  /* Display: NC */
  $handler = $view->new_display('page', 'NC', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Negative Climate';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_nc_negative_affect' => 'field_nc_negative_affect',
    'field_nc_punitive_control' => 'field_nc_punitive_control',
    'field_nc_disrespect' => 'field_nc_disrespect',
    'field_nc_negativity' => 'field_nc_negativity',
    'id' => 0,
    'field_nc_score' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_nc_score' => '#0d233a',
    'field_nc_negative_affect' => '#ffd400',
    'field_nc_punitive_control' => '#29b573',
    'field_nc_disrespect' => '#f05929',
    'field_nc_negativity' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Negative Affect */
  $handler->display->display_options['fields']['field_nc_negative_affect']['id'] = 'field_nc_negative_affect';
  $handler->display->display_options['fields']['field_nc_negative_affect']['table'] = 'field_data_field_nc_negative_affect';
  $handler->display->display_options['fields']['field_nc_negative_affect']['field'] = 'field_nc_negative_affect';
  $handler->display->display_options['fields']['field_nc_negative_affect']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_negative_affect']['type'] = 'list_key';
  /* Field: E3 Experience Note: Punitive Control */
  $handler->display->display_options['fields']['field_nc_punitive_control']['id'] = 'field_nc_punitive_control';
  $handler->display->display_options['fields']['field_nc_punitive_control']['table'] = 'field_data_field_nc_punitive_control';
  $handler->display->display_options['fields']['field_nc_punitive_control']['field'] = 'field_nc_punitive_control';
  $handler->display->display_options['fields']['field_nc_punitive_control']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_punitive_control']['type'] = 'list_key';
  /* Field: E3 Experience Note: Sarcasm/Disrespect */
  $handler->display->display_options['fields']['field_nc_disrespect']['id'] = 'field_nc_disrespect';
  $handler->display->display_options['fields']['field_nc_disrespect']['table'] = 'field_data_field_nc_disrespect';
  $handler->display->display_options['fields']['field_nc_disrespect']['field'] = 'field_nc_disrespect';
  $handler->display->display_options['fields']['field_nc_disrespect']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_disrespect']['type'] = 'list_key';
  /* Field: E3 Experience Note: Severe Negativity */
  $handler->display->display_options['fields']['field_nc_negativity']['id'] = 'field_nc_negativity';
  $handler->display->display_options['fields']['field_nc_negativity']['table'] = 'field_data_field_nc_negativity';
  $handler->display->display_options['fields']['field_nc_negativity']['field'] = 'field_nc_negativity';
  $handler->display->display_options['fields']['field_nc_negativity']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_negativity']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Negative Climate Score (field_nc_score) */
  $handler->display->display_options['filters']['field_nc_score_value']['id'] = 'field_nc_score_value';
  $handler->display->display_options['filters']['field_nc_score_value']['table'] = 'field_data_field_nc_score';
  $handler->display->display_options['filters']['field_nc_score_value']['field'] = 'field_nc_score_value';
  $handler->display->display_options['filters']['field_nc_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_nc_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/nc';

  /* Display: NC Line */
  $handler = $view->new_display('chart', 'NC Line', 'chart_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'NC Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_nc_score' => 'field_nc_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_nc_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Negative Climate Score */
  $handler->display->display_options['fields']['field_nc_score']['id'] = 'field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['table'] = 'field_data_field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['field'] = 'field_nc_score';
  $handler->display->display_options['fields']['field_nc_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_nc_score']['label'] = 'Negative Climate Overall';
  $handler->display->display_options['fields']['field_nc_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Negative Climate Score (field_nc_score) */
  $handler->display->display_options['filters']['field_nc_score_value']['id'] = 'field_nc_score_value';
  $handler->display->display_options['filters']['field_nc_score_value']['table'] = 'field_data_field_nc_score';
  $handler->display->display_options['filters']['field_nc_score_value']['field'] = 'field_nc_score_value';
  $handler->display->display_options['filters']['field_nc_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_nc_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_3';

  /* Display: TS */
  $handler = $view->new_display('page', 'TS', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teacher Sensitivity';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_ts_awareness' => 'field_ts_awareness',
    'field_ts_responsiveness' => 'field_ts_responsiveness',
    'field_ts_addresses_problems' => 'field_ts_addresses_problems',
    'field_ts_student_comfort' => 'field_ts_student_comfort',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_ts_awareness' => '#ffd400',
    'field_ts_responsiveness' => '#29b573',
    'field_ts_addresses_problems' => '#f05929',
    'field_ts_student_comfort' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Awareness */
  $handler->display->display_options['fields']['field_ts_awareness']['id'] = 'field_ts_awareness';
  $handler->display->display_options['fields']['field_ts_awareness']['table'] = 'field_data_field_ts_awareness';
  $handler->display->display_options['fields']['field_ts_awareness']['field'] = 'field_ts_awareness';
  $handler->display->display_options['fields']['field_ts_awareness']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_awareness']['type'] = 'list_key';
  /* Field: E3 Experience Note: Responsiveness */
  $handler->display->display_options['fields']['field_ts_responsiveness']['id'] = 'field_ts_responsiveness';
  $handler->display->display_options['fields']['field_ts_responsiveness']['table'] = 'field_data_field_ts_responsiveness';
  $handler->display->display_options['fields']['field_ts_responsiveness']['field'] = 'field_ts_responsiveness';
  $handler->display->display_options['fields']['field_ts_responsiveness']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_responsiveness']['type'] = 'list_key';
  /* Field: E3 Experience Note: Addresses Problems */
  $handler->display->display_options['fields']['field_ts_addresses_problems']['id'] = 'field_ts_addresses_problems';
  $handler->display->display_options['fields']['field_ts_addresses_problems']['table'] = 'field_data_field_ts_addresses_problems';
  $handler->display->display_options['fields']['field_ts_addresses_problems']['field'] = 'field_ts_addresses_problems';
  $handler->display->display_options['fields']['field_ts_addresses_problems']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_addresses_problems']['type'] = 'list_key';
  /* Field: E3 Experience Note: Student Comfort */
  $handler->display->display_options['fields']['field_ts_student_comfort']['id'] = 'field_ts_student_comfort';
  $handler->display->display_options['fields']['field_ts_student_comfort']['table'] = 'field_data_field_ts_student_comfort';
  $handler->display->display_options['fields']['field_ts_student_comfort']['field'] = 'field_ts_student_comfort';
  $handler->display->display_options['fields']['field_ts_student_comfort']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_student_comfort']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Teacher Sensitivity Score (field_ts_score) */
  $handler->display->display_options['filters']['field_ts_score_value']['id'] = 'field_ts_score_value';
  $handler->display->display_options['filters']['field_ts_score_value']['table'] = 'field_data_field_ts_score';
  $handler->display->display_options['filters']['field_ts_score_value']['field'] = 'field_ts_score_value';
  $handler->display->display_options['filters']['field_ts_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_ts_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/ts';

  /* Display: TS Line */
  $handler = $view->new_display('chart', 'TS Line', 'chart_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'TS Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_ts_score' => 'field_ts_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_ts_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Teacher Sensitivity Score */
  $handler->display->display_options['fields']['field_ts_score']['id'] = 'field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['table'] = 'field_data_field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['field'] = 'field_ts_score';
  $handler->display->display_options['fields']['field_ts_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ts_score']['label'] = 'Teacher Sensitivity Overall';
  $handler->display->display_options['fields']['field_ts_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Teacher Sensitivity Score (field_ts_score) */
  $handler->display->display_options['filters']['field_ts_score_value']['id'] = 'field_ts_score_value';
  $handler->display->display_options['filters']['field_ts_score_value']['table'] = 'field_data_field_ts_score';
  $handler->display->display_options['filters']['field_ts_score_value']['field'] = 'field_ts_score_value';
  $handler->display->display_options['filters']['field_ts_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_ts_score_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ts_score_value']['group'] = 1;
  $handler->display->display_options['parent_display'] = 'page_4';

  /* Display: RSP */
  $handler = $view->new_display('page', 'RSP', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Regard for Student Perspectives';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_rsp_flexibility' => 'field_rsp_flexibility',
    'field_rsp_support' => 'field_rsp_support',
    'field_rsp_expression' => 'field_rsp_expression',
    'field_rsp_movement' => 'field_rsp_movement',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_rsp_flexibility' => '#ffd400',
    'field_rsp_support' => '#29b573',
    'field_rsp_expression' => '#f05929',
    'field_rsp_movement' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Flexibility and Student Focus */
  $handler->display->display_options['fields']['field_rsp_flexibility']['id'] = 'field_rsp_flexibility';
  $handler->display->display_options['fields']['field_rsp_flexibility']['table'] = 'field_data_field_rsp_flexibility';
  $handler->display->display_options['fields']['field_rsp_flexibility']['field'] = 'field_rsp_flexibility';
  $handler->display->display_options['fields']['field_rsp_flexibility']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_flexibility']['type'] = 'list_key';
  /* Field: E3 Experience Note: Support for Autonomy and Leadership */
  $handler->display->display_options['fields']['field_rsp_support']['id'] = 'field_rsp_support';
  $handler->display->display_options['fields']['field_rsp_support']['table'] = 'field_data_field_rsp_support';
  $handler->display->display_options['fields']['field_rsp_support']['field'] = 'field_rsp_support';
  $handler->display->display_options['fields']['field_rsp_support']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_support']['type'] = 'list_key';
  /* Field: E3 Experience Note: Student Expression */
  $handler->display->display_options['fields']['field_rsp_expression']['id'] = 'field_rsp_expression';
  $handler->display->display_options['fields']['field_rsp_expression']['table'] = 'field_data_field_rsp_expression';
  $handler->display->display_options['fields']['field_rsp_expression']['field'] = 'field_rsp_expression';
  $handler->display->display_options['fields']['field_rsp_expression']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_expression']['type'] = 'list_key';
  /* Field: E3 Experience Note: Restriction of Movement */
  $handler->display->display_options['fields']['field_rsp_movement']['id'] = 'field_rsp_movement';
  $handler->display->display_options['fields']['field_rsp_movement']['table'] = 'field_data_field_rsp_movement';
  $handler->display->display_options['fields']['field_rsp_movement']['field'] = 'field_rsp_movement';
  $handler->display->display_options['fields']['field_rsp_movement']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_movement']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Regard for Student Perspectives Score (field_rsp_score) */
  $handler->display->display_options['filters']['field_rsp_score_value']['id'] = 'field_rsp_score_value';
  $handler->display->display_options['filters']['field_rsp_score_value']['table'] = 'field_data_field_rsp_score';
  $handler->display->display_options['filters']['field_rsp_score_value']['field'] = 'field_rsp_score_value';
  $handler->display->display_options['filters']['field_rsp_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_rsp_score_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_rsp_score_value']['group'] = 1;
  $handler->display->display_options['path'] = 'teacher-report/%/rsp';

  /* Display: RSP Line */
  $handler = $view->new_display('chart', 'RSP Line', 'chart_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSP Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_rsp_score' => 'field_rsp_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_rsp_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Regard for Student Perspectives Score */
  $handler->display->display_options['fields']['field_rsp_score']['id'] = 'field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['table'] = 'field_data_field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['field'] = 'field_rsp_score';
  $handler->display->display_options['fields']['field_rsp_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_rsp_score']['label'] = 'Regard for Student Perspectives Overall';
  $handler->display->display_options['fields']['field_rsp_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Regard for Student Perspectives Score (field_rsp_score) */
  $handler->display->display_options['filters']['field_rsp_score_value']['id'] = 'field_rsp_score_value';
  $handler->display->display_options['filters']['field_rsp_score_value']['table'] = 'field_data_field_rsp_score';
  $handler->display->display_options['filters']['field_rsp_score_value']['field'] = 'field_rsp_score_value';
  $handler->display->display_options['filters']['field_rsp_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_rsp_score_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_rsp_score_value']['group'] = 1;
  $handler->display->display_options['parent_display'] = 'page_5';

  /* Display: BM */
  $handler = $view->new_display('page', 'BM', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Behavior Management';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_bm_expectations' => 'field_bm_expectations',
    'field_bm_proactive' => 'field_bm_proactive',
    'field_bm_redirection' => 'field_bm_redirection',
    'field_bm_student_behavior' => 'field_bm_student_behavior',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_bm_expectations' => '#ffd400',
    'field_bm_proactive' => '#29b573',
    'field_bm_redirection' => '#f05929',
    'field_bm_student_behavior' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Clear Behavior Expectations */
  $handler->display->display_options['fields']['field_bm_expectations']['id'] = 'field_bm_expectations';
  $handler->display->display_options['fields']['field_bm_expectations']['table'] = 'field_data_field_bm_expectations';
  $handler->display->display_options['fields']['field_bm_expectations']['field'] = 'field_bm_expectations';
  $handler->display->display_options['fields']['field_bm_expectations']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_expectations']['type'] = 'list_key';
  /* Field: E3 Experience Note: Proactive */
  $handler->display->display_options['fields']['field_bm_proactive']['id'] = 'field_bm_proactive';
  $handler->display->display_options['fields']['field_bm_proactive']['table'] = 'field_data_field_bm_proactive';
  $handler->display->display_options['fields']['field_bm_proactive']['field'] = 'field_bm_proactive';
  $handler->display->display_options['fields']['field_bm_proactive']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_proactive']['type'] = 'list_key';
  /* Field: E3 Experience Note: Redirection of Misbehavior */
  $handler->display->display_options['fields']['field_bm_redirection']['id'] = 'field_bm_redirection';
  $handler->display->display_options['fields']['field_bm_redirection']['table'] = 'field_data_field_bm_redirection';
  $handler->display->display_options['fields']['field_bm_redirection']['field'] = 'field_bm_redirection';
  $handler->display->display_options['fields']['field_bm_redirection']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_redirection']['type'] = 'list_key';
  /* Field: E3 Experience Note: Student Behavior */
  $handler->display->display_options['fields']['field_bm_student_behavior']['id'] = 'field_bm_student_behavior';
  $handler->display->display_options['fields']['field_bm_student_behavior']['table'] = 'field_data_field_bm_student_behavior';
  $handler->display->display_options['fields']['field_bm_student_behavior']['field'] = 'field_bm_student_behavior';
  $handler->display->display_options['fields']['field_bm_student_behavior']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_student_behavior']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Behavior Management Score (field_bm_score) */
  $handler->display->display_options['filters']['field_bm_score_value']['id'] = 'field_bm_score_value';
  $handler->display->display_options['filters']['field_bm_score_value']['table'] = 'field_data_field_bm_score';
  $handler->display->display_options['filters']['field_bm_score_value']['field'] = 'field_bm_score_value';
  $handler->display->display_options['filters']['field_bm_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_bm_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/bm';

  /* Display: BM Line */
  $handler = $view->new_display('chart', 'BM Line', 'chart_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'BM Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_bm_score' => 'field_bm_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_bm_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Behavior Management Score */
  $handler->display->display_options['fields']['field_bm_score']['id'] = 'field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['table'] = 'field_data_field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['field'] = 'field_bm_score';
  $handler->display->display_options['fields']['field_bm_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_bm_score']['label'] = 'Behavior Management Overall';
  $handler->display->display_options['fields']['field_bm_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Behavior Management Score (field_bm_score) */
  $handler->display->display_options['filters']['field_bm_score_value']['id'] = 'field_bm_score_value';
  $handler->display->display_options['filters']['field_bm_score_value']['table'] = 'field_data_field_bm_score';
  $handler->display->display_options['filters']['field_bm_score_value']['field'] = 'field_bm_score_value';
  $handler->display->display_options['filters']['field_bm_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_bm_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_6';

  /* Display: P */
  $handler = $view->new_display('page', 'P', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Productivity';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_p_maximizing' => 'field_p_maximizing',
    'field_p_routines' => 'field_p_routines',
    'field_p_transitions' => 'field_p_transitions',
    'field_p_preparation' => 'field_p_preparation',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_p_maximizing' => '#ffd400',
    'field_p_routines' => '#29b573',
    'field_p_transitions' => '#f05929',
    'field_p_preparation' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Maximizing Learning Time */
  $handler->display->display_options['fields']['field_p_maximizing']['id'] = 'field_p_maximizing';
  $handler->display->display_options['fields']['field_p_maximizing']['table'] = 'field_data_field_p_maximizing';
  $handler->display->display_options['fields']['field_p_maximizing']['field'] = 'field_p_maximizing';
  $handler->display->display_options['fields']['field_p_maximizing']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_maximizing']['type'] = 'list_key';
  /* Field: E3 Experience Note: Routines */
  $handler->display->display_options['fields']['field_p_routines']['id'] = 'field_p_routines';
  $handler->display->display_options['fields']['field_p_routines']['table'] = 'field_data_field_p_routines';
  $handler->display->display_options['fields']['field_p_routines']['field'] = 'field_p_routines';
  $handler->display->display_options['fields']['field_p_routines']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_routines']['type'] = 'list_key';
  /* Field: E3 Experience Note: Transitions */
  $handler->display->display_options['fields']['field_p_transitions']['id'] = 'field_p_transitions';
  $handler->display->display_options['fields']['field_p_transitions']['table'] = 'field_data_field_p_transitions';
  $handler->display->display_options['fields']['field_p_transitions']['field'] = 'field_p_transitions';
  $handler->display->display_options['fields']['field_p_transitions']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_transitions']['type'] = 'list_key';
  /* Field: E3 Experience Note: Preparation */
  $handler->display->display_options['fields']['field_p_preparation']['id'] = 'field_p_preparation';
  $handler->display->display_options['fields']['field_p_preparation']['table'] = 'field_data_field_p_preparation';
  $handler->display->display_options['fields']['field_p_preparation']['field'] = 'field_p_preparation';
  $handler->display->display_options['fields']['field_p_preparation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_preparation']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Productivity Score (field_p_score) */
  $handler->display->display_options['filters']['field_p_score_value']['id'] = 'field_p_score_value';
  $handler->display->display_options['filters']['field_p_score_value']['table'] = 'field_data_field_p_score';
  $handler->display->display_options['filters']['field_p_score_value']['field'] = 'field_p_score_value';
  $handler->display->display_options['filters']['field_p_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_p_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/p';

  /* Display: P Line */
  $handler = $view->new_display('chart', 'P Line', 'chart_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'P Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_p_score' => 'field_p_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_p_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Productivity Score */
  $handler->display->display_options['fields']['field_p_score']['id'] = 'field_p_score';
  $handler->display->display_options['fields']['field_p_score']['table'] = 'field_data_field_p_score';
  $handler->display->display_options['fields']['field_p_score']['field'] = 'field_p_score';
  $handler->display->display_options['fields']['field_p_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_p_score']['label'] = 'Productivity Overall';
  $handler->display->display_options['fields']['field_p_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Productivity Score (field_p_score) */
  $handler->display->display_options['filters']['field_p_score_value']['id'] = 'field_p_score_value';
  $handler->display->display_options['filters']['field_p_score_value']['table'] = 'field_data_field_p_score';
  $handler->display->display_options['filters']['field_p_score_value']['field'] = 'field_p_score_value';
  $handler->display->display_options['filters']['field_p_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_p_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_7';

  /* Display: ILF */
  $handler = $view->new_display('page', 'ILF', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instructional Learning Formats';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_ilf_facilitation' => 'field_ilf_facilitation',
    'field_ilf_variety' => 'field_ilf_variety',
    'field_ilf_student_interest' => 'field_ilf_student_interest',
    'field_ilf_objectives' => 'field_ilf_objectives',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_ilf_facilitation' => '#ffd400',
    'field_ilf_variety' => '#29b573',
    'field_ilf_student_interest' => '#f05929',
    'field_ilf_objectives' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Effective Facilitation */
  $handler->display->display_options['fields']['field_ilf_facilitation']['id'] = 'field_ilf_facilitation';
  $handler->display->display_options['fields']['field_ilf_facilitation']['table'] = 'field_data_field_ilf_facilitation';
  $handler->display->display_options['fields']['field_ilf_facilitation']['field'] = 'field_ilf_facilitation';
  $handler->display->display_options['fields']['field_ilf_facilitation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_facilitation']['type'] = 'list_key';
  /* Field: E3 Experience Note: Variety of Modalities and Materials */
  $handler->display->display_options['fields']['field_ilf_variety']['id'] = 'field_ilf_variety';
  $handler->display->display_options['fields']['field_ilf_variety']['table'] = 'field_data_field_ilf_variety';
  $handler->display->display_options['fields']['field_ilf_variety']['field'] = 'field_ilf_variety';
  $handler->display->display_options['fields']['field_ilf_variety']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_variety']['type'] = 'list_key';
  /* Field: E3 Experience Note: Student Interest */
  $handler->display->display_options['fields']['field_ilf_student_interest']['id'] = 'field_ilf_student_interest';
  $handler->display->display_options['fields']['field_ilf_student_interest']['table'] = 'field_data_field_ilf_student_interest';
  $handler->display->display_options['fields']['field_ilf_student_interest']['field'] = 'field_ilf_student_interest';
  $handler->display->display_options['fields']['field_ilf_student_interest']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_student_interest']['type'] = 'list_key';
  /* Field: E3 Experience Note: Clarity of Learning Objectives */
  $handler->display->display_options['fields']['field_ilf_objectives']['id'] = 'field_ilf_objectives';
  $handler->display->display_options['fields']['field_ilf_objectives']['table'] = 'field_data_field_ilf_objectives';
  $handler->display->display_options['fields']['field_ilf_objectives']['field'] = 'field_ilf_objectives';
  $handler->display->display_options['fields']['field_ilf_objectives']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_objectives']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Instructional Learning Formats Score (field_ilf_score) */
  $handler->display->display_options['filters']['field_ilf_score_value']['id'] = 'field_ilf_score_value';
  $handler->display->display_options['filters']['field_ilf_score_value']['table'] = 'field_data_field_ilf_score';
  $handler->display->display_options['filters']['field_ilf_score_value']['field'] = 'field_ilf_score_value';
  $handler->display->display_options['filters']['field_ilf_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_ilf_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/ilf';

  /* Display: ILF Line */
  $handler = $view->new_display('chart', 'ILF Line', 'chart_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ILF Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_ilf_score' => 'field_ilf_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_ilf_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Instructional Learning Formats Score */
  $handler->display->display_options['fields']['field_ilf_score']['id'] = 'field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['table'] = 'field_data_field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['field'] = 'field_ilf_score';
  $handler->display->display_options['fields']['field_ilf_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_ilf_score']['label'] = 'Instructional Learning Formats Overall';
  $handler->display->display_options['fields']['field_ilf_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Instructional Learning Formats Score (field_ilf_score) */
  $handler->display->display_options['filters']['field_ilf_score_value']['id'] = 'field_ilf_score_value';
  $handler->display->display_options['filters']['field_ilf_score_value']['table'] = 'field_data_field_ilf_score';
  $handler->display->display_options['filters']['field_ilf_score_value']['field'] = 'field_ilf_score_value';
  $handler->display->display_options['filters']['field_ilf_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_ilf_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_8';

  /* Display: CD */
  $handler = $view->new_display('page', 'CD', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Concept Development';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_cd_reasoning' => 'field_cd_reasoning',
    'field_cd_creating' => 'field_cd_creating',
    'field_cd_integration' => 'field_cd_integration',
    'field_cd_connections' => 'field_cd_connections',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_cd_reasoning' => '#ffd400',
    'field_cd_creating' => '#29b573',
    'field_cd_integration' => '#f05929',
    'field_cd_connections' => '#00aff0',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Analysis and Reasoning */
  $handler->display->display_options['fields']['field_cd_reasoning']['id'] = 'field_cd_reasoning';
  $handler->display->display_options['fields']['field_cd_reasoning']['table'] = 'field_data_field_cd_reasoning';
  $handler->display->display_options['fields']['field_cd_reasoning']['field'] = 'field_cd_reasoning';
  $handler->display->display_options['fields']['field_cd_reasoning']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_reasoning']['type'] = 'list_key';
  /* Field: E3 Experience Note: Creating */
  $handler->display->display_options['fields']['field_cd_creating']['id'] = 'field_cd_creating';
  $handler->display->display_options['fields']['field_cd_creating']['table'] = 'field_data_field_cd_creating';
  $handler->display->display_options['fields']['field_cd_creating']['field'] = 'field_cd_creating';
  $handler->display->display_options['fields']['field_cd_creating']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_creating']['type'] = 'list_key';
  /* Field: E3 Experience Note: Integration */
  $handler->display->display_options['fields']['field_cd_integration']['id'] = 'field_cd_integration';
  $handler->display->display_options['fields']['field_cd_integration']['table'] = 'field_data_field_cd_integration';
  $handler->display->display_options['fields']['field_cd_integration']['field'] = 'field_cd_integration';
  $handler->display->display_options['fields']['field_cd_integration']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_integration']['type'] = 'list_key';
  /* Field: E3 Experience Note: Connections to Real World */
  $handler->display->display_options['fields']['field_cd_connections']['id'] = 'field_cd_connections';
  $handler->display->display_options['fields']['field_cd_connections']['table'] = 'field_data_field_cd_connections';
  $handler->display->display_options['fields']['field_cd_connections']['field'] = 'field_cd_connections';
  $handler->display->display_options['fields']['field_cd_connections']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_connections']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: E3 Experience Note: Concept Development Score (field_cd_score) */
  $handler->display->display_options['filters']['field_cd_score_value']['id'] = 'field_cd_score_value';
  $handler->display->display_options['filters']['field_cd_score_value']['table'] = 'field_data_field_cd_score';
  $handler->display->display_options['filters']['field_cd_score_value']['field'] = 'field_cd_score_value';
  $handler->display->display_options['filters']['field_cd_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_cd_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/cd';

  /* Display: CD Line */
  $handler = $view->new_display('chart', 'CD Line', 'chart_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CD Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_cd_score' => 'field_cd_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_cd_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Concept Development Score */
  $handler->display->display_options['fields']['field_cd_score']['id'] = 'field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['table'] = 'field_data_field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['field'] = 'field_cd_score';
  $handler->display->display_options['fields']['field_cd_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_cd_score']['label'] = 'Concept Development Overall';
  $handler->display->display_options['fields']['field_cd_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  $handler->display->display_options['parent_display'] = 'page_11';

  /* Display: QF */
  $handler = $view->new_display('page', 'QF', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quality of Feedback';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_qf_scaffolding' => 'field_qf_scaffolding',
    'field_qf_feedback_loops' => 'field_qf_feedback_loops',
    'field_qf_prompting' => 'field_qf_prompting',
    'field_qf_providing_info' => 'field_qf_providing_info',
    'field_qf_encouragement' => 'field_qf_encouragement',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_qf_scaffolding' => '#ffd400',
    'field_qf_feedback_loops' => '#29b573',
    'field_qf_prompting' => '#f05929',
    'field_qf_providing_info' => '#00aff0',
    'field_qf_encouragement' => '#ff00ff',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Scaffolding */
  $handler->display->display_options['fields']['field_qf_scaffolding']['id'] = 'field_qf_scaffolding';
  $handler->display->display_options['fields']['field_qf_scaffolding']['table'] = 'field_data_field_qf_scaffolding';
  $handler->display->display_options['fields']['field_qf_scaffolding']['field'] = 'field_qf_scaffolding';
  $handler->display->display_options['fields']['field_qf_scaffolding']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_scaffolding']['type'] = 'list_key';
  /* Field: E3 Experience Note: Feedback Loops */
  $handler->display->display_options['fields']['field_qf_feedback_loops']['id'] = 'field_qf_feedback_loops';
  $handler->display->display_options['fields']['field_qf_feedback_loops']['table'] = 'field_data_field_qf_feedback_loops';
  $handler->display->display_options['fields']['field_qf_feedback_loops']['field'] = 'field_qf_feedback_loops';
  $handler->display->display_options['fields']['field_qf_feedback_loops']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_feedback_loops']['type'] = 'list_key';
  /* Field: E3 Experience Note: Prompting Thought Processes */
  $handler->display->display_options['fields']['field_qf_prompting']['id'] = 'field_qf_prompting';
  $handler->display->display_options['fields']['field_qf_prompting']['table'] = 'field_data_field_qf_prompting';
  $handler->display->display_options['fields']['field_qf_prompting']['field'] = 'field_qf_prompting';
  $handler->display->display_options['fields']['field_qf_prompting']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_prompting']['type'] = 'list_key';
  /* Field: E3 Experience Note: Providing Information */
  $handler->display->display_options['fields']['field_qf_providing_info']['id'] = 'field_qf_providing_info';
  $handler->display->display_options['fields']['field_qf_providing_info']['table'] = 'field_data_field_qf_providing_info';
  $handler->display->display_options['fields']['field_qf_providing_info']['field'] = 'field_qf_providing_info';
  $handler->display->display_options['fields']['field_qf_providing_info']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_providing_info']['type'] = 'list_key';
  /* Field: E3 Experience Note: Encouragement and Affirmation */
  $handler->display->display_options['fields']['field_qf_encouragement']['id'] = 'field_qf_encouragement';
  $handler->display->display_options['fields']['field_qf_encouragement']['table'] = 'field_data_field_qf_encouragement';
  $handler->display->display_options['fields']['field_qf_encouragement']['field'] = 'field_qf_encouragement';
  $handler->display->display_options['fields']['field_qf_encouragement']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_encouragement']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Quality of Feedback Score (field_qf_score) */
  $handler->display->display_options['filters']['field_qf_score_value']['id'] = 'field_qf_score_value';
  $handler->display->display_options['filters']['field_qf_score_value']['table'] = 'field_data_field_qf_score';
  $handler->display->display_options['filters']['field_qf_score_value']['field'] = 'field_qf_score_value';
  $handler->display->display_options['filters']['field_qf_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_qf_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/qf';

  /* Display: QF Line */
  $handler = $view->new_display('chart', 'QF Line', 'chart_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'QF Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_qf_score' => 'field_qf_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_qf_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Quality of Feedback Score */
  $handler->display->display_options['fields']['field_qf_score']['id'] = 'field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['table'] = 'field_data_field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['field'] = 'field_qf_score';
  $handler->display->display_options['fields']['field_qf_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_qf_score']['label'] = 'Quality of Feedback Overall';
  $handler->display->display_options['fields']['field_qf_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Quality of Feedback Score (field_qf_score) */
  $handler->display->display_options['filters']['field_qf_score_value']['id'] = 'field_qf_score_value';
  $handler->display->display_options['filters']['field_qf_score_value']['table'] = 'field_data_field_qf_score';
  $handler->display->display_options['filters']['field_qf_score_value']['field'] = 'field_qf_score_value';
  $handler->display->display_options['filters']['field_qf_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_qf_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_10';

  /* Display: LM */
  $handler = $view->new_display('page', 'LM', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Language Modeling';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'more recent ›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_of_observation';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_lm_conversations' => 'field_lm_conversations',
    'field_lm_questions' => 'field_lm_questions',
    'field_lm_repetition' => 'field_lm_repetition',
    'field_lm_talk' => 'field_lm_talk',
    'field_lm_advanced' => 'field_lm_advanced',
    'id' => 0,
    'field_time_of_observation' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_lm_conversations' => '#ffd400',
    'field_lm_questions' => '#29b573',
    'field_lm_repetition' => '#f05929',
    'field_lm_talk' => '#00aff0',
    'field_lm_advanced' => '#ff00ff',
    'field_time_of_observation' => '#f28f43',
  );
  $handler->display->display_options['style_options']['title'] = 'Observation Scores';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_max'] = '7';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Frequent Conversations */
  $handler->display->display_options['fields']['field_lm_conversations']['id'] = 'field_lm_conversations';
  $handler->display->display_options['fields']['field_lm_conversations']['table'] = 'field_data_field_lm_conversations';
  $handler->display->display_options['fields']['field_lm_conversations']['field'] = 'field_lm_conversations';
  $handler->display->display_options['fields']['field_lm_conversations']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_conversations']['type'] = 'list_key';
  /* Field: E3 Experience Note: Open-Ended Questions */
  $handler->display->display_options['fields']['field_lm_questions']['id'] = 'field_lm_questions';
  $handler->display->display_options['fields']['field_lm_questions']['table'] = 'field_data_field_lm_questions';
  $handler->display->display_options['fields']['field_lm_questions']['field'] = 'field_lm_questions';
  $handler->display->display_options['fields']['field_lm_questions']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_questions']['type'] = 'list_key';
  /* Field: E3 Experience Note: Repetition and Extension */
  $handler->display->display_options['fields']['field_lm_repetition']['id'] = 'field_lm_repetition';
  $handler->display->display_options['fields']['field_lm_repetition']['table'] = 'field_data_field_lm_repetition';
  $handler->display->display_options['fields']['field_lm_repetition']['field'] = 'field_lm_repetition';
  $handler->display->display_options['fields']['field_lm_repetition']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_repetition']['type'] = 'list_key';
  /* Field: E3 Experience Note: Self- and Parallel Talk */
  $handler->display->display_options['fields']['field_lm_talk']['id'] = 'field_lm_talk';
  $handler->display->display_options['fields']['field_lm_talk']['table'] = 'field_data_field_lm_talk';
  $handler->display->display_options['fields']['field_lm_talk']['field'] = 'field_lm_talk';
  $handler->display->display_options['fields']['field_lm_talk']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_talk']['type'] = 'list_key';
  /* Field: E3 Experience Note: Advanced Language */
  $handler->display->display_options['fields']['field_lm_advanced']['id'] = 'field_lm_advanced';
  $handler->display->display_options['fields']['field_lm_advanced']['table'] = 'field_data_field_lm_advanced';
  $handler->display->display_options['fields']['field_lm_advanced']['field'] = 'field_lm_advanced';
  $handler->display->display_options['fields']['field_lm_advanced']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_advanced']['type'] = 'list_key';
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['max_length'] = '6';
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Language Modeling Score (field_lm_score) */
  $handler->display->display_options['filters']['field_lm_score_value']['id'] = 'field_lm_score_value';
  $handler->display->display_options['filters']['field_lm_score_value']['table'] = 'field_data_field_lm_score';
  $handler->display->display_options['filters']['field_lm_score_value']['field'] = 'field_lm_score_value';
  $handler->display->display_options['filters']['field_lm_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_lm_score_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'teacher-report/%/lm';

  /* Display: LM Line */
  $handler = $view->new_display('chart', 'LM Line', 'chart_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'LM Line';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart_extension';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'id';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_lm_score' => 'field_lm_score',
    'id' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'id' => '#2f7ed8',
    'field_lm_score' => '#134370',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: E3 Experience Note: Language Modeling Score */
  $handler->display->display_options['fields']['field_lm_score']['id'] = 'field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['table'] = 'field_data_field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['field'] = 'field_lm_score';
  $handler->display->display_options['fields']['field_lm_score']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_lm_score']['label'] = 'Language Modeling Overall';
  $handler->display->display_options['fields']['field_lm_score']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'observation_log' => 'observation_log',
  );
  /* Filter criterion: E3 Experience Note: Language Modeling Score (field_lm_score) */
  $handler->display->display_options['filters']['field_lm_score_value']['id'] = 'field_lm_score_value';
  $handler->display->display_options['filters']['field_lm_score_value']['table'] = 'field_data_field_lm_score';
  $handler->display->display_options['filters']['field_lm_score_value']['field'] = 'field_lm_score_value';
  $handler->display->display_options['filters']['field_lm_score_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['field_lm_score_value']['operator'] = 'not empty';
  $handler->display->display_options['parent_display'] = 'page_9';

  /* Display: Focus Session */
  $handler = $view->new_display('attachment', 'Focus Session', 'attachment_6');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Spacing';
  $handler->display->display_options['header']['area']['content'] = '<hr>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation']['id'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation']['label'] = 'Start time';
  $handler->display->display_options['fields']['field_time_of_observation']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: E3 Experience Note: Time of Observation */
  $handler->display->display_options['fields']['field_time_of_observation_1']['id'] = 'field_time_of_observation_1';
  $handler->display->display_options['fields']['field_time_of_observation_1']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation_1']['field'] = 'field_time_of_observation';
  $handler->display->display_options['fields']['field_time_of_observation_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_time_of_observation_1']['label'] = 'End time';
  $handler->display->display_options['fields']['field_time_of_observation_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_of_observation_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
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
  /* Field: E3 Experience Note: What was challenging? What might I do differently? */
  $handler->display->display_options['fields']['field_session_challenges']['id'] = 'field_session_challenges';
  $handler->display->display_options['fields']['field_session_challenges']['table'] = 'field_data_field_session_challenges';
  $handler->display->display_options['fields']['field_session_challenges']['field'] = 'field_session_challenges';
  $handler->display->display_options['fields']['field_session_challenges']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_session_challenges']['label'] = 'Challenges';
  /* Field: E3 Experience Note: What went well? */
  $handler->display->display_options['fields']['field_session_notes']['id'] = 'field_session_notes';
  $handler->display->display_options['fields']['field_session_notes']['table'] = 'field_data_field_session_notes';
  $handler->display->display_options['fields']['field_session_notes']['field'] = 'field_session_notes';
  $handler->display->display_options['fields']['field_session_notes']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: E3 Contact: E3 contact ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'e3_contact';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: E3 Experience Note: Focus areas worked on (field_focus_area) */
  $handler->display->display_options['arguments']['field_focus_area_value']['id'] = 'field_focus_area_value';
  $handler->display->display_options['arguments']['field_focus_area_value']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['arguments']['field_focus_area_value']['field'] = 'field_focus_area_value';
  $handler->display->display_options['arguments']['field_focus_area_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['arguments']['field_focus_area_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_focus_area_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_focus_area_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_focus_area_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_focus_area_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_focus_area_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_focus_area_value']['limit'] = '0';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'session_log' => 'session_log',
  );
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'page_4' => 'page_4',
    'page_5' => 'page_5',
    'page_6' => 'page_6',
    'page_7' => 'page_7',
    'page_8' => 'page_8',
    'page_11' => 'page_11',
    'page_10' => 'page_10',
    'page_9' => 'page_9',
    'default' => 0,
    'page_1' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Focus Steps */
  $handler = $view->new_display('attachment', 'Focus Steps', 'attachment_7');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'field_next_step_1' => 'field_next_step_1',
    'field_target_date_1' => 'field_target_date_1',
    'field_next_step_2' => 'field_next_step_1',
    'field_target_date_2' => 'field_target_date_1',
    'field_target_focus' => 'field_target_focus',
    'field_step_complete_1' => 'field_step_complete_1',
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
    'field_target_focus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_step_complete_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '</br>',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Spacing';
  $handler->display->display_options['header']['area']['content'] = '<hr>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: E3 Contact: E3 contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'e3_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_target_date_1']['label'] = 'Completion Date';
  $handler->display->display_options['fields']['field_target_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
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
  /* Field: E3 Experience Note: 1st Step Complete */
  $handler->display->display_options['fields']['field_step_complete_1']['id'] = 'field_step_complete_1';
  $handler->display->display_options['fields']['field_step_complete_1']['table'] = 'field_data_field_step_complete_1';
  $handler->display->display_options['fields']['field_step_complete_1']['field'] = 'field_step_complete_1';
  $handler->display->display_options['fields']['field_step_complete_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['fields']['field_step_complete_1']['label'] = 'Complete';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: E3 Experience Note: Time of Observation (field_time_of_observation) */
  $handler->display->display_options['sorts']['field_time_of_observation_value']['id'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['table'] = 'field_data_field_time_of_observation';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['field'] = 'field_time_of_observation_value';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['sorts']['field_time_of_observation_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: E3 Contact: E3 contact ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'e3_contact';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: E3 Experience Note: Focus areas worked on (field_focus_area) */
  $handler->display->display_options['arguments']['field_focus_area_value']['id'] = 'field_focus_area_value';
  $handler->display->display_options['arguments']['field_focus_area_value']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['arguments']['field_focus_area_value']['field'] = 'field_focus_area_value';
  $handler->display->display_options['arguments']['field_focus_area_value']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['arguments']['field_focus_area_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_focus_area_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_focus_area_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_focus_area_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_focus_area_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_focus_area_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_focus_area_value']['limit'] = '0';
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
  /* Filter criterion: E3 Experience Note: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'e3_note';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ec_teacher_e3_note';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'session_log' => 'session_log',
  );
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'page_4' => 'page_4',
    'page_5' => 'page_5',
    'page_6' => 'page_6',
    'page_7' => 'page_7',
    'page_8' => 'page_8',
    'page_11' => 'page_11',
    'page_10' => 'page_10',
    'page_9' => 'page_9',
    'default' => 0,
    'page_1' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
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
    t('E3 ID'),
    t('Link'),
    t('View report'),
    t('First name'),
    t('Last name'),
    t('Program'),
    t('Teacher Report'),
    t('E3 Teacher Report'),
    t('<a href="/my-teachers" style="color:white; background:#f05a28; display:inline; padding:10px; border:solid white 2px; font-weight:bold">Back to Teacher List</a><a href="/e3-note/add/observation_log" style="color:white; background:#f05a28; display:inline; padding:10px; border:solid white 2px">Add Log Entry</a>'),
    t('Email'),
    t('Work Info'),
    t('Works at'),
    t('Work email'),
    t('Work phone'),
    t('Domains'),
    t('CLASS Header'),
    t('<h2>CLASS Baseline Assessment</h2>'),
    t('CLASS Ave'),
    t('Count/Menu'),
    t('Number of times observed'),
    t('Positive Climate'),
    t('[field_pc_score] &ndash; Click to view details'),
    t('Not yet observed'),
    t('Negative Climate'),
    t('[field_nc_score] &ndash; Click to view details'),
    t('Teacher Sensitivity'),
    t('[field_ts_score] &ndash; Click to view details'),
    t('Regard for Student Perspectives'),
    t('[field_rsp_score] &ndash; Click to view details'),
    t('Behavior Management'),
    t('[field_bm_score] &ndash; Click to view details'),
    t('Productivity'),
    t('[field_p_score] &ndash; Click to view details'),
    t('Instructional Learning Formats'),
    t('[field_ilf_score] &ndash; Click to view details'),
    t('Concept Development'),
    t('[field_cd_score] &ndash; Click to view details'),
    t('Quality of Feedback'),
    t('[field_qf_score] &ndash; Click to view details'),
    t('Language Modeling'),
    t('[field_lm_score] &ndash; Click to view details'),
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
    t('PC'),
    t('more recent ›'),
    t('Positive Affect'),
    t('Positive Communication'),
    t('Relationships'),
    t('Respect'),
    t('PC Line'),
    t('Positive Climate Overall'),
    t('NC'),
    t('Negative Affect'),
    t('Punitive Control'),
    t('Sarcasm/Disrespect'),
    t('Severe Negativity'),
    t('NC Line'),
    t('Negative Climate Overall'),
    t('TS'),
    t('Awareness'),
    t('Responsiveness'),
    t('Addresses Problems'),
    t('Student Comfort'),
    t('TS Line'),
    t('Teacher Sensitivity Overall'),
    t('RSP'),
    t('Flexibility and Student Focus'),
    t('Support for Autonomy and Leadership'),
    t('Student Expression'),
    t('Restriction of Movement'),
    t('RSP Line'),
    t('Regard for Student Perspectives Overall'),
    t('BM'),
    t('Clear Behavior Expectations'),
    t('Proactive'),
    t('Redirection of Misbehavior'),
    t('Student Behavior'),
    t('BM Line'),
    t('Behavior Management Overall'),
    t('P'),
    t('Maximizing Learning Time'),
    t('Routines'),
    t('Transitions'),
    t('Preparation'),
    t('P Line'),
    t('Productivity Overall'),
    t('ILF'),
    t('Effective Facilitation'),
    t('Variety of Modalities and Materials'),
    t('Student Interest'),
    t('Clarity of Learning Objectives'),
    t('ILF Line'),
    t('Instructional Learning Formats Overall'),
    t('CD'),
    t('Analysis and Reasoning'),
    t('Creating'),
    t('Integration'),
    t('Connections to Real World'),
    t('CD Line'),
    t('Concept Development Overall'),
    t('QF'),
    t('Scaffolding'),
    t('Feedback Loops'),
    t('Prompting Thought Processes'),
    t('Providing Information'),
    t('Encouragement and Affirmation'),
    t('QF Line'),
    t('Quality of Feedback Overall'),
    t('LM'),
    t('Frequent Conversations'),
    t('Open-Ended Questions'),
    t('Repetition and Extension'),
    t('Self- and Parallel Talk'),
    t('Advanced Language'),
    t('LM Line'),
    t('Language Modeling Overall'),
    t('Focus Session'),
    t('Spacing'),
    t('<hr>'),
    t('Start time'),
    t('End time'),
    t('Focus Steps'),
    t('Completion Date'),
    t('Complete'),
  );
  $export['e3_teacher_reports'] = $view;

  return $export;
}
