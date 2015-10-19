<?php
/**
 * @file
 * esdportal_e3_fieldbases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function esdportal_e3_fieldbases_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bm|e3_note|observation_log|form';
  $field_group->group_name = 'group_bm';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Behavior Management',
    'weight' => '10',
    'children' => array(
      0 => 'field_bm_expectations',
      1 => 'field_bm_proactive',
      2 => 'field_bm_redirection',
      3 => 'field_bm_score',
      4 => 'field_bm_student_behavior',
      5 => 'field_bm_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bm|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cd|e3_note|observation_log|form';
  $field_group->group_name = 'group_cd';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Concept Development',
    'weight' => '13',
    'children' => array(
      0 => 'field_cd_connections',
      1 => 'field_cd_creating',
      2 => 'field_cd_integration',
      3 => 'field_cd_reasoning',
      4 => 'field_cd_score',
      5 => 'field_cd_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cd|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dimensions|e3_note|observation_log|form';
  $field_group->group_name = 'group_dimensions';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dimensions',
    'weight' => '5',
    'children' => array(
      0 => 'group_bm',
      1 => 'group_cd',
      2 => 'group_ilf',
      3 => 'group_lm',
      4 => 'group_nc',
      5 => 'group_pc',
      6 => 'group_p',
      7 => 'group_qf',
      8 => 'group_rsp',
      9 => 'group_ts',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => '',
      ),
    ),
  );
  $export['group_dimensions|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e3_tracker|e3_contact|teacher|form';
  $field_group->group_name = 'group_e3_tracker';
  $field_group->entity_type = 'e3_contact';
  $field_group->bundle = 'teacher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E3 Tracker',
    'weight' => '12',
    'children' => array(
      0 => 'field_e3_status',
      1 => 'field_e3_cohort',
      2 => 'field_training_attendance',
      3 => 'field_training_hours_f1',
      4 => 'field_training_hours_f2',
      5 => 'field_training_hours_f3',
      6 => 'field_training_hours_m1',
      7 => 'field_training_hours_m2',
      8 => 'field_training_hours_w1',
      9 => 'field_training_hours_w2',
      10 => 'field_training_hours_s1',
      11 => 'field_training_hours_s2',
      12 => 'field_training_hours_total',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-e3-tracker field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_e3_tracker|e3_contact|teacher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ilf|e3_note|observation_log|form';
  $field_group->group_name = 'group_ilf';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Instructional Learning Formats',
    'weight' => '12',
    'children' => array(
      0 => 'field_ilf_facilitation',
      1 => 'field_ilf_objectives',
      2 => 'field_ilf_score',
      3 => 'field_ilf_student_interest',
      4 => 'field_ilf_variety',
      5 => 'field_ilf_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ilf|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lm|e3_note|observation_log|form';
  $field_group->group_name = 'group_lm';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Language Modeling',
    'weight' => '15',
    'children' => array(
      0 => 'field_lm_advanced',
      1 => 'field_lm_conversations',
      2 => 'field_lm_questions',
      3 => 'field_lm_repetition',
      4 => 'field_lm_score',
      5 => 'field_lm_talk',
      6 => 'field_lm_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lm|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nc|e3_note|observation_log|form';
  $field_group->group_name = 'group_nc';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Negative Climate',
    'weight' => '7',
    'children' => array(
      0 => 'field_nc_disrespect',
      1 => 'field_nc_negative_affect',
      2 => 'field_nc_negativity',
      3 => 'field_nc_punitive_control',
      4 => 'field_nc_score',
      5 => 'field_nc_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_nc|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_next_steps|e3_note|session_log|form';
  $field_group->group_name = 'group_next_steps';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'session_log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Next Steps',
    'weight' => '10',
    'children' => array(
      0 => 'field_next_step_1',
      1 => 'field_next_step_2',
      2 => 'field_step_complete_1',
      3 => 'field_step_complete_2',
      4 => 'field_target_date_1',
      5 => 'field_target_date_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-next-steps field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_next_steps|e3_note|session_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pc|e3_note|observation_log|form';
  $field_group->group_name = 'group_pc';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Positive Climate',
    'weight' => '6',
    'children' => array(
      0 => 'field_pc_positive_affect',
      1 => 'field_pc_positive_communication',
      2 => 'field_pc_relationships',
      3 => 'field_pc_respect',
      4 => 'field_pc_score',
      5 => 'field_pc_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pc|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p|e3_note|observation_log|form';
  $field_group->group_name = 'group_p';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Productivity',
    'weight' => '11',
    'children' => array(
      0 => 'field_p_maximizing',
      1 => 'field_p_preparation',
      2 => 'field_p_routines',
      3 => 'field_p_score',
      4 => 'field_p_transitions',
      5 => 'field_p_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_p|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qf|e3_note|observation_log|form';
  $field_group->group_name = 'group_qf';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Quality of Feedback',
    'weight' => '14',
    'children' => array(
      0 => 'field_qf_encouragement',
      1 => 'field_qf_feedback_loops',
      2 => 'field_qf_prompting',
      3 => 'field_qf_providing_info',
      4 => 'field_qf_scaffolding',
      5 => 'field_qf_score',
      6 => 'field_qf_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_qf|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rsp|e3_note|observation_log|form';
  $field_group->group_name = 'group_rsp';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Regard for Student Perspectives',
    'weight' => '9',
    'children' => array(
      0 => 'field_rsp_expression',
      1 => 'field_rsp_flexibility',
      2 => 'field_rsp_movement',
      3 => 'field_rsp_score',
      4 => 'field_rsp_support',
      5 => 'field_rsp_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rsp|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ts|e3_note|observation_log|form';
  $field_group->group_name = 'group_ts';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Teacher Sensitivity',
    'weight' => '8',
    'children' => array(
      0 => 'field_ts_addresses_problems',
      1 => 'field_ts_awareness',
      2 => 'field_ts_responsiveness',
      3 => 'field_ts_score',
      4 => 'field_ts_student_comfort',
      5 => 'field_ts_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ts|e3_note|observation_log|form'] = $field_group;

  return $export;
}
