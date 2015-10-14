<?php
/**
 * @file
 * esdportal_e3_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function esdportal_e3_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_classroom_organization'
  $field_bases['field_classroom_organization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_classroom_organization',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mathfield',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'expression' => 'f(x) = x/3; ((([field_bm_cycle_1] + [field_bm_cycle_2] + [field_bm_cycle_3] + [field_bm_cycle_4])/4) + (([field_p_cycle_1] + [field_p_cycle_2] + [field_p_cycle_3] + [field_p_cycle_4])/4) +(([field_ilf_cycle_1] + [field_ilf_cycle_2] + [field_ilf_cycle_3] + [field_ilf_cycle_4])/4))',
      'field_dependencies' => array(
        0 => 'field_bm_cycle_1',
        1 => 'field_bm_cycle_2',
        2 => 'field_bm_cycle_3',
        3 => 'field_bm_cycle_4',
        4 => 'field_p_cycle_1',
        5 => 'field_p_cycle_2',
        6 => 'field_p_cycle_3',
        7 => 'field_p_cycle_4',
        8 => 'field_ilf_cycle_1',
        9 => 'field_ilf_cycle_2',
        10 => 'field_ilf_cycle_3',
        11 => 'field_ilf_cycle_4',
      ),
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'mathfield',
  );

  // Exported field_base: 'field_contact_addy'
  $field_bases['field_contact_addy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_addy',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_emotional_support_score'
  $field_bases['field_emotional_support_score'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_emotional_support_score',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mathfield',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'expression' => 'f(x) = x/4; f((([field_rsp_cycle_1] + [field_rsp_cycle_2] + [field_rsp_cycle_3] + [field_rsp_cycle_4])/4) + (([field_ts_cycle_1] + [field_ts_cycle_2] + [field_ts_cycle_3] + [field_ts_cycle_4])/4) +(([field_pc_cycle_1] + [field_pc_cycle_2] + [field_pc_cycle_3] + [field_pc_cycle_4])/4) + (8-(([field_nc_cycle_1] + [field_nc_cycle_2] + [field_nc_cycle_3] + [field_nc_cycle_4])/4)))',
      'field_dependencies' => array(
        0 => 'field_rsp_cycle_1',
        1 => 'field_rsp_cycle_2',
        2 => 'field_rsp_cycle_3',
        3 => 'field_rsp_cycle_4',
        4 => 'field_ts_cycle_1',
        5 => 'field_ts_cycle_2',
        6 => 'field_ts_cycle_3',
        7 => 'field_ts_cycle_4',
        8 => 'field_pc_cycle_1',
        9 => 'field_pc_cycle_2',
        10 => 'field_pc_cycle_3',
        11 => 'field_pc_cycle_4',
        12 => 'field_nc_cycle_1',
        13 => 'field_nc_cycle_2',
        14 => 'field_nc_cycle_3',
        15 => 'field_nc_cycle_4',
      ),
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'mathfield',
  );

  // Exported field_base: 'field_instructional_support'
  $field_bases['field_instructional_support'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_instructional_support',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mathfield',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'expression' => 'f(x) = x/3; ((([field_cd_cycle_1] + [field_cd_cycle_2] + [field_cd_cycle_3] + [field_cd_cycle_4])/4) + (([field_qf_cycle_1] + [field_qf_cycle_2] + [field_qf_cycle_3] + [field_qf_cycle_4])/4) +(([field_lm_cycle_1] + [field_lm_cycle_2] + [field_lm_cycle_3] + [field_lm_cycle_4])/4))',
      'field_dependencies' => array(
        0 => 'field_cd_cycle_1',
        1 => 'field_cd_cycle_2',
        2 => 'field_cd_cycle_3',
        3 => 'field_cd_cycle_4',
        4 => 'field_qf_cycle_1',
        5 => 'field_qf_cycle_2',
        6 => 'field_qf_cycle_3',
        7 => 'field_qf_cycle_4',
        8 => 'field_lm_cycle_1',
        9 => 'field_lm_cycle_2',
        10 => 'field_lm_cycle_3',
        11 => 'field_lm_cycle_4',
      ),
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'mathfield',
  );

  // Exported field_base: 'field_observation_duration'
  $field_bases['field_observation_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_observation_duration',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'hms_field',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'hms_field',
  );

  // Exported field_base: 'field_teacher_ec_role'
  $field_bases['field_teacher_ec_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teacher_ec_role',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_work_email'
  $field_bases['field_work_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_work_email',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_work_phone'
  $field_bases['field_work_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_work_phone',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
