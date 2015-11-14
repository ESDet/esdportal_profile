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
      1 => 'field_bm_notes',
      2 => 'field_bm_proactive',
      3 => 'field_bm_redirection',
      4 => 'field_bm_score',
      5 => 'field_bm_student_behavior',
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
      3 => 'field_cd_notes',
      4 => 'field_cd_reasoning',
      5 => 'field_cd_score',
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
    'weight' => '6',
    'children' => array(
      0 => 'group_rc',
      1 => 'group_bm',
      2 => 'group_cd',
      3 => 'group_ilf',
      4 => 'group_lm',
      5 => 'group_nc',
      6 => 'group_pc',
      7 => 'group_p',
      8 => 'group_qf',
      9 => 'group_rsp',
      10 => 'group_ts',
      11 => 'group_tsit',
      12 => 'group_fe',
      13 => 'group_els',
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
  $field_group->identifier = 'group_els|e3_note|observation_log|form';
  $field_group->group_name = 'group_els';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Early Language Support (Inf/Tod)',
    'weight' => '19',
    'children' => array(
      0 => 'field_els_talk',
      1 => 'field_els_communication',
      2 => 'field_els_extension',
      3 => 'field_els_score',
      4 => 'field_els_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-els field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_els|e3_note|observation_log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fe|e3_note|observation_log|form';
  $field_group->group_name = 'group_fe';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Facilitated Exploration (Inf/Tod)',
    'weight' => '18',
    'children' => array(
      0 => 'field_fe_involvement',
      1 => 'field_fe_focused',
      2 => 'field_fe_expansion',
      3 => 'field_fe_score',
      4 => 'field_fe_notes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fe field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fe|e3_note|observation_log|form'] = $field_group;

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
      1 => 'field_ilf_notes',
      2 => 'field_ilf_objectives',
      3 => 'field_ilf_score',
      4 => 'field_ilf_student_interest',
      5 => 'field_ilf_variety',
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
      2 => 'field_lm_notes',
      3 => 'field_lm_questions',
      4 => 'field_lm_repetition',
      5 => 'field_lm_score',
      6 => 'field_lm_talk',
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
      3 => 'field_nc_notes',
      4 => 'field_nc_punitive_control',
      5 => 'field_nc_score',
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
      0 => 'field_pc_notes',
      1 => 'field_pc_positive_affect',
      2 => 'field_pc_positive_communication',
      3 => 'field_pc_relationships',
      4 => 'field_pc_respect',
      5 => 'field_pc_score',
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
      1 => 'field_p_notes',
      2 => 'field_p_preparation',
      3 => 'field_p_routines',
      4 => 'field_p_score',
      5 => 'field_p_transitions',
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
      2 => 'field_qf_notes',
      3 => 'field_qf_prompting',
      4 => 'field_qf_providing_info',
      5 => 'field_qf_scaffolding',
      6 => 'field_qf_score',
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
  $field_group->identifier = 'group_rc|e3_note|observation_log|form';
  $field_group->group_name = 'group_rc';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Relational Climate',
    'weight' => '16',
    'children' => array(
      0 => 'field_rc_behaviors',
      1 => 'field_rc_expression',
      2 => 'field_rc_respect',
      3 => 'field_rc_lack_negativity',
      4 => 'field_rc_notes',
      5 => 'field_rc_score',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rc field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rc|e3_note|observation_log|form'] = $field_group;

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
      3 => 'field_rsp_notes',
      4 => 'field_rsp_score',
      5 => 'field_rsp_support',
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
  $field_group->identifier = 'group_tsit|e3_note|observation_log|form';
  $field_group->group_name = 'group_tsit';
  $field_group->entity_type = 'e3_note';
  $field_group->bundle = 'observation_log';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dimensions';
  $field_group->data = array(
    'label' => 'Teacher Sensitivity (Inf/Tod)',
    'weight' => '17',
    'children' => array(
      0 => 'field_tsit_awareness',
      1 => 'field_tsit_responsiveness',
      2 => 'field_tsit_comfort',
      3 => 'field_tsit_score',
      4 => 'field_tsit_notes',
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
  $export['group_tsit|e3_note|observation_log|form'] = $field_group;

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
      2 => 'field_ts_notes',
      3 => 'field_ts_responsiveness',
      4 => 'field_ts_score',
      5 => 'field_ts_student_comfort',
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
