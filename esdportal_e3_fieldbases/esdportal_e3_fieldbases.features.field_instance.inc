<?php
/**
 * @file
 * esdportal_e3_fieldbases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function esdportal_e3_fieldbases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'e3_note-class_assessment-field_adults_present'
  $field_instances['e3_note-class_assessment-field_adults_present'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_adults_present',
    'label' => 'Number of adults in classroon',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_bm_average'
  $field_instances['e3_note-class_assessment-field_bm_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_average',
    'label' => 'Behaviour Management Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_bm_cycle_1'
  $field_instances['e3_note-class_assessment-field_bm_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_cycle_1',
    'label' => 'Behavior Management Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_bm_cycle_2'
  $field_instances['e3_note-class_assessment-field_bm_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_cycle_2',
    'label' => 'Behavior Management Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_bm_cycle_3'
  $field_instances['e3_note-class_assessment-field_bm_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_cycle_3',
    'label' => 'Behavior Management Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_bm_cycle_4'
  $field_instances['e3_note-class_assessment-field_bm_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_cycle_4',
    'label' => 'Behavior Management Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_bm_notes'
  $field_instances['e3_note-class_assessment-field_bm_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_notes',
    'label' => 'Behaviour Management Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_cd_average'
  $field_instances['e3_note-class_assessment-field_cd_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_average',
    'label' => 'Concept Development Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_cd_cycle_1'
  $field_instances['e3_note-class_assessment-field_cd_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_cycle_1',
    'label' => 'Concept Development Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_cd_cycle_2'
  $field_instances['e3_note-class_assessment-field_cd_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_cycle_2',
    'label' => 'Concept Development Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_cd_cycle_3'
  $field_instances['e3_note-class_assessment-field_cd_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_cycle_3',
    'label' => 'Concept Development Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_cd_cycle_4'
  $field_instances['e3_note-class_assessment-field_cd_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_cycle_4',
    'label' => 'Concept Development Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_cd_notes'
  $field_instances['e3_note-class_assessment-field_cd_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_notes',
    'label' => 'Concept Development Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_children_present'
  $field_instances['e3_note-class_assessment-field_children_present'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_children_present',
    'label' => 'Number of children in classroom',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_co_score'
  $field_instances['e3_note-class_assessment-field_co_score'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 68,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_co_score',
    'label' => 'Classroom Organization Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ec_employer'
  $field_instances['e3_note-class_assessment-field_ec_employer'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ec_employer',
    'label' => 'Program',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ec_teacher'
  $field_instances['e3_note-class_assessment-field_ec_teacher'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ec_teacher',
    'label' => 'Teacher',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_es_score'
  $field_instances['e3_note-class_assessment-field_es_score'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 67,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_es_score',
    'label' => 'Emotional Support score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ilf_average'
  $field_instances['e3_note-class_assessment-field_ilf_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_average',
    'label' => 'Instructional Learning Formats Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ilf_cycle_1'
  $field_instances['e3_note-class_assessment-field_ilf_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_cycle_1',
    'label' => 'Instructional Learning Formats Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ilf_cycle_2'
  $field_instances['e3_note-class_assessment-field_ilf_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_cycle_2',
    'label' => 'Instructional Learning Formats Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ilf_cycle_3'
  $field_instances['e3_note-class_assessment-field_ilf_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_cycle_3',
    'label' => 'Instructional Learning Formats Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ilf_cycle_4'
  $field_instances['e3_note-class_assessment-field_ilf_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_cycle_4',
    'label' => 'Instructional Learning Formats Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ilf_notes'
  $field_instances['e3_note-class_assessment-field_ilf_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_notes',
    'label' => 'Instructional Learning Formats Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_is_score'
  $field_instances['e3_note-class_assessment-field_is_score'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 69,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_is_score',
    'label' => 'Instructional Support Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_lm_average'
  $field_instances['e3_note-class_assessment-field_lm_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 65,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_average',
    'label' => 'Language Modeling Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_lm_cycle_1'
  $field_instances['e3_note-class_assessment-field_lm_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_cycle_1',
    'label' => 'Language Modeling Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_lm_cycle_2'
  $field_instances['e3_note-class_assessment-field_lm_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 62,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_cycle_2',
    'label' => 'Language Modeling Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_lm_cycle_3'
  $field_instances['e3_note-class_assessment-field_lm_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 63,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_cycle_3',
    'label' => 'Language Modeling Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_lm_cycle_4'
  $field_instances['e3_note-class_assessment-field_lm_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 64,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_cycle_4',
    'label' => 'Language Modeling Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_lm_notes'
  $field_instances['e3_note-class_assessment-field_lm_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 66,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_notes',
    'label' => 'Language Modeling Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_nc_average'
  $field_instances['e3_note-class_assessment-field_nc_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_average',
    'label' => 'Negative Climate Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_nc_cycle_1'
  $field_instances['e3_note-class_assessment-field_nc_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_cycle_1',
    'label' => 'Negative Climate Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_nc_cycle_2'
  $field_instances['e3_note-class_assessment-field_nc_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_cycle_2',
    'label' => 'Negative Climate Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_nc_cycle_3'
  $field_instances['e3_note-class_assessment-field_nc_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_cycle_3',
    'label' => 'Negative Climate Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_nc_cycle_4'
  $field_instances['e3_note-class_assessment-field_nc_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_cycle_4',
    'label' => 'Negative Climate Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_nc_notes'
  $field_instances['e3_note-class_assessment-field_nc_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_notes',
    'label' => 'Negative Climate Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_p_average'
  $field_instances['e3_note-class_assessment-field_p_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_average',
    'label' => 'Productivity Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_p_cycle_1'
  $field_instances['e3_note-class_assessment-field_p_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_cycle_1',
    'label' => 'Productivity Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_p_cycle_2'
  $field_instances['e3_note-class_assessment-field_p_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_cycle_2',
    'label' => 'Productivity Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_p_cycle_3'
  $field_instances['e3_note-class_assessment-field_p_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_cycle_3',
    'label' => 'Productivity Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_p_cycle_4'
  $field_instances['e3_note-class_assessment-field_p_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_cycle_4',
    'label' => 'Productivity Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_p_notes'
  $field_instances['e3_note-class_assessment-field_p_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_notes',
    'label' => 'Productivity Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_pc_average'
  $field_instances['e3_note-class_assessment-field_pc_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_average',
    'label' => 'Positive Climate Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_pc_cycle_1'
  $field_instances['e3_note-class_assessment-field_pc_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_cycle_1',
    'label' => 'Positive Climate Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_pc_cycle_2'
  $field_instances['e3_note-class_assessment-field_pc_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_cycle_2',
    'label' => 'Positive Climate Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_pc_cycle_3'
  $field_instances['e3_note-class_assessment-field_pc_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_cycle_3',
    'label' => 'Positive Climate Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_pc_cycle_4'
  $field_instances['e3_note-class_assessment-field_pc_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_cycle_4',
    'label' => 'Positive Climate Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_pc_notes'
  $field_instances['e3_note-class_assessment-field_pc_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_notes',
    'label' => 'Positive Climate Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_qf_average'
  $field_instances['e3_note-class_assessment-field_qf_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 59,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_average',
    'label' => 'Quality of Feedback Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_qf_cycle_1'
  $field_instances['e3_note-class_assessment-field_qf_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_cycle_1',
    'label' => 'Quality of Feedback Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_qf_cycle_2'
  $field_instances['e3_note-class_assessment-field_qf_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_cycle_2',
    'label' => 'Quality of Feedback Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_qf_cycle_3'
  $field_instances['e3_note-class_assessment-field_qf_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_cycle_3',
    'label' => 'Quality of Feedback Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_qf_cycle_4'
  $field_instances['e3_note-class_assessment-field_qf_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_cycle_4',
    'label' => 'Quality of Feedback Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_qf_notes'
  $field_instances['e3_note-class_assessment-field_qf_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 60,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_notes',
    'label' => 'Quality of Feedback Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_rsp_average'
  $field_instances['e3_note-class_assessment-field_rsp_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_average',
    'label' => 'Regard for Student Perspective Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_rsp_cycle_1'
  $field_instances['e3_note-class_assessment-field_rsp_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_cycle_1',
    'label' => 'Regard for Student Perspectives Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_rsp_cycle_2'
  $field_instances['e3_note-class_assessment-field_rsp_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_cycle_2',
    'label' => 'Regard for Student Perspectives Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_rsp_cycle_3'
  $field_instances['e3_note-class_assessment-field_rsp_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_cycle_3',
    'label' => 'Regard for Student Perspectives Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_rsp_cycle_4'
  $field_instances['e3_note-class_assessment-field_rsp_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_cycle_4',
    'label' => 'Regard for Student Perspectives Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_rsp_notes'
  $field_instances['e3_note-class_assessment-field_rsp_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_notes',
    'label' => 'Regard for Student Perspective Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_time_of_observation'
  $field_instances['e3_note-class_assessment-field_time_of_observation'] = array(
    'bundle' => 'class_assessment',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_time_of_observation',
    'label' => 'Time of Observation',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'restrictions' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => '',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => '',
          ),
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => '',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => '',
          ),
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ts_average'
  $field_instances['e3_note-class_assessment-field_ts_average'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_average',
    'label' => 'Teacher Sensitivity Average',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ts_cycle_1'
  $field_instances['e3_note-class_assessment-field_ts_cycle_1'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_cycle_1',
    'label' => 'Teacher Sensitivity Cycle 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ts_cycle_2'
  $field_instances['e3_note-class_assessment-field_ts_cycle_2'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_cycle_2',
    'label' => 'Teacher Sensitivity Cycle 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ts_cycle_3'
  $field_instances['e3_note-class_assessment-field_ts_cycle_3'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_cycle_3',
    'label' => 'Teacher Sensitivity Cycle 3',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ts_cycle_4'
  $field_instances['e3_note-class_assessment-field_ts_cycle_4'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_cycle_4',
    'label' => 'Teacher Sensitivity Cycle 4',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_ts_notes'
  $field_instances['e3_note-class_assessment-field_ts_notes'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_notes',
    'label' => 'Teacher Sensitivity Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_adults_present'
  $field_instances['e3_note-observation_log-field_adults_present'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 83,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_adults_present',
    'label' => 'Number of adults in classroon',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_bm_expectations'
  $field_instances['e3_note-observation_log-field_bm_expectations'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_expectations',
    'label' => 'Clear Behavior Expectations',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_bm_notes'
  $field_instances['e3_note-observation_log-field_bm_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 77,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_bm_proactive'
  $field_instances['e3_note-observation_log-field_bm_proactive'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_proactive',
    'label' => 'Proactive',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_bm_redirection'
  $field_instances['e3_note-observation_log-field_bm_redirection'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_redirection',
    'label' => 'Redirection of Misbehavior',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_bm_score'
  $field_instances['e3_note-observation_log-field_bm_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_score',
    'label' => 'Behavior Management Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_bm_student_behavior'
  $field_instances['e3_note-observation_log-field_bm_student_behavior'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_bm_student_behavior',
    'label' => 'Student Behavior',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_cd_connections'
  $field_instances['e3_note-observation_log-field_cd_connections'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_connections',
    'label' => 'Connections to Real World',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_cd_creating'
  $field_instances['e3_note-observation_log-field_cd_creating'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_creating',
    'label' => 'Creating',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_cd_integration'
  $field_instances['e3_note-observation_log-field_cd_integration'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_integration',
    'label' => 'Integration',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_cd_notes'
  $field_instances['e3_note-observation_log-field_cd_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 80,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_cd_reasoning'
  $field_instances['e3_note-observation_log-field_cd_reasoning'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_reasoning',
    'label' => 'Analysis and Reasoning',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_cd_score'
  $field_instances['e3_note-observation_log-field_cd_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_cd_score',
    'label' => 'Concept Development Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_children_present'
  $field_instances['e3_note-observation_log-field_children_present'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_children_present',
    'label' => 'Number of children in classroom',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ec_employer'
  $field_instances['e3_note-observation_log-field_ec_employer'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ec_employer',
    'label' => 'Program',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ec_teacher'
  $field_instances['e3_note-observation_log-field_ec_teacher'] = array(
    'bundle' => 'observation_log',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Which teacher were you coaching/observing for this session?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ec_teacher',
    'label' => 'Teacher',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ilf_facilitation'
  $field_instances['e3_note-observation_log-field_ilf_facilitation'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_facilitation',
    'label' => 'Effective Facilitation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ilf_notes'
  $field_instances['e3_note-observation_log-field_ilf_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 79,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ilf_objectives'
  $field_instances['e3_note-observation_log-field_ilf_objectives'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_objectives',
    'label' => 'Clarity of Learning Objectives',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ilf_score'
  $field_instances['e3_note-observation_log-field_ilf_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_score',
    'label' => 'Instructional Learning Formats Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ilf_student_interest'
  $field_instances['e3_note-observation_log-field_ilf_student_interest'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_student_interest',
    'label' => 'Student Interest',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ilf_variety'
  $field_instances['e3_note-observation_log-field_ilf_variety'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ilf_variety',
    'label' => 'Variety of Modalities and Materials',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_advanced'
  $field_instances['e3_note-observation_log-field_lm_advanced'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_advanced',
    'label' => 'Advanced Language',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_conversations'
  $field_instances['e3_note-observation_log-field_lm_conversations'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_conversations',
    'label' => 'Frequent Conversations',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_notes'
  $field_instances['e3_note-observation_log-field_lm_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 82,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_questions'
  $field_instances['e3_note-observation_log-field_lm_questions'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_questions',
    'label' => 'Open-Ended Questions',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_repetition'
  $field_instances['e3_note-observation_log-field_lm_repetition'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_repetition',
    'label' => 'Repetition and Extension',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_score'
  $field_instances['e3_note-observation_log-field_lm_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_score',
    'label' => 'Language Modeling Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_lm_talk'
  $field_instances['e3_note-observation_log-field_lm_talk'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_lm_talk',
    'label' => 'Self- and Parallel Talk',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_nc_disrespect'
  $field_instances['e3_note-observation_log-field_nc_disrespect'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 68,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_disrespect',
    'label' => 'Sarcasm/Disrespect',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_nc_negative_affect'
  $field_instances['e3_note-observation_log-field_nc_negative_affect'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 66,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_negative_affect',
    'label' => 'Negative Affect',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_nc_negativity'
  $field_instances['e3_note-observation_log-field_nc_negativity'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 69,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_negativity',
    'label' => 'Severe Negativity',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_nc_notes'
  $field_instances['e3_note-observation_log-field_nc_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 74,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_nc_punitive_control'
  $field_instances['e3_note-observation_log-field_nc_punitive_control'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 67,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_punitive_control',
    'label' => 'Punitive Control',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_nc_score'
  $field_instances['e3_note-observation_log-field_nc_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 70,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_nc_score',
    'label' => 'Negative Climate Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_p_maximizing'
  $field_instances['e3_note-observation_log-field_p_maximizing'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_maximizing',
    'label' => 'Maximizing Learning Time',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_p_notes'
  $field_instances['e3_note-observation_log-field_p_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 78,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_p_preparation'
  $field_instances['e3_note-observation_log-field_p_preparation'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_preparation',
    'label' => 'Preparation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_p_routines'
  $field_instances['e3_note-observation_log-field_p_routines'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_routines',
    'label' => 'Routines',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_p_score'
  $field_instances['e3_note-observation_log-field_p_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_score',
    'label' => 'Productivity Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_p_transitions'
  $field_instances['e3_note-observation_log-field_p_transitions'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_p_transitions',
    'label' => 'Transitions',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_pc_notes'
  $field_instances['e3_note-observation_log-field_pc_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_pc_positive_affect'
  $field_instances['e3_note-observation_log-field_pc_positive_affect'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_positive_affect',
    'label' => 'Positive Affect',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_pc_positive_communication'
  $field_instances['e3_note-observation_log-field_pc_positive_communication'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_positive_communication',
    'label' => 'Positive Communication',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_pc_relationships'
  $field_instances['e3_note-observation_log-field_pc_relationships'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_relationships',
    'label' => 'Relationships',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_pc_respect'
  $field_instances['e3_note-observation_log-field_pc_respect'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_respect',
    'label' => 'Respect',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_pc_score'
  $field_instances['e3_note-observation_log-field_pc_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_pc_score',
    'label' => 'Positive Climate Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_encouragement'
  $field_instances['e3_note-observation_log-field_qf_encouragement'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_encouragement',
    'label' => 'Encouragement and Affirmation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_feedback_loops'
  $field_instances['e3_note-observation_log-field_qf_feedback_loops'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_feedback_loops',
    'label' => 'Feedback Loops',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_notes'
  $field_instances['e3_note-observation_log-field_qf_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 81,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_prompting'
  $field_instances['e3_note-observation_log-field_qf_prompting'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_prompting',
    'label' => 'Prompting Thought Processes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_providing_info'
  $field_instances['e3_note-observation_log-field_qf_providing_info'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_providing_info',
    'label' => 'Providing Information',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_scaffolding'
  $field_instances['e3_note-observation_log-field_qf_scaffolding'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_scaffolding',
    'label' => 'Scaffolding',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_qf_score'
  $field_instances['e3_note-observation_log-field_qf_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_qf_score',
    'label' => 'Quality of Feedback Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_rsp_expression'
  $field_instances['e3_note-observation_log-field_rsp_expression'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_expression',
    'label' => 'Student Expression',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_rsp_flexibility'
  $field_instances['e3_note-observation_log-field_rsp_flexibility'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_flexibility',
    'label' => 'Flexibility and Student Focus',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_rsp_movement'
  $field_instances['e3_note-observation_log-field_rsp_movement'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_movement',
    'label' => 'Restriction of Movement',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_rsp_notes'
  $field_instances['e3_note-observation_log-field_rsp_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 76,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_rsp_score'
  $field_instances['e3_note-observation_log-field_rsp_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_score',
    'label' => 'Regard for Student Perspectives Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_rsp_support'
  $field_instances['e3_note-observation_log-field_rsp_support'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_rsp_support',
    'label' => 'Support for Autonomy and Leadership',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_time_of_observation'
  $field_instances['e3_note-observation_log-field_time_of_observation'] = array(
    'bundle' => 'observation_log',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 72,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_time_of_observation',
    'label' => 'Time of Observation',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '+15 minutes',
      'entity_translation_sync' => FALSE,
      'restrictions' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:observation_log:field_observe_date',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:observation_log:field_observe_date',
          ),
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:observation_log:field_observe_date',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:observation_log:field_observe_date',
          ),
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ts_addresses_problems'
  $field_instances['e3_note-observation_log-field_ts_addresses_problems'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_addresses_problems',
    'label' => 'Addresses Problems',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ts_awareness'
  $field_instances['e3_note-observation_log-field_ts_awareness'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_awareness',
    'label' => 'Awareness',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ts_notes'
  $field_instances['e3_note-observation_log-field_ts_notes'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 75,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ts_responsiveness'
  $field_instances['e3_note-observation_log-field_ts_responsiveness'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_responsiveness',
    'label' => 'Responsiveness',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ts_score'
  $field_instances['e3_note-observation_log-field_ts_score'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_score',
    'label' => 'Teacher Sensitivity Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_ts_student_comfort'
  $field_instances['e3_note-observation_log-field_ts_student_comfort'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ts_student_comfort',
    'label' => 'Student Comfort',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_coaching_strategy'
  $field_instances['e3_note-session_log-field_coaching_strategy'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_coaching_strategy',
    'label' => 'Coaching strategies used',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'onmodel|On-stage modeling
offmodel|Off-stage modeling w/practice
practice|Guided practice (w/o modeling)
coclass|Co-investigation - classroom (in-person or video)
costrat|Co-investigation - instructional strategy/skill
corsrc|Co-investigation - planning resource(s)
coplan|Co-planning
sideby|Side-by-side teaching
cue|Cue-coaching
shift|Shifting underlying cause conversation',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_ec_employer'
  $field_instances['e3_note-session_log-field_ec_employer'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ec_employer',
    'label' => 'Program',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_ec_teacher'
  $field_instances['e3_note-session_log-field_ec_teacher'] = array(
    'bundle' => 'session_log',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_ec_teacher',
    'label' => 'Teacher',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_focus_area'
  $field_instances['e3_note-session_log-field_focus_area'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_focus_area',
    'label' => 'Focus areas worked on',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'pc|Positive Climate
nc|Negative Climate.
ts|Teacher Sensitivity
rsp|Regard for Student Perspectives
bm|Behavior Management
p|Productivity
ilf|Instructional Learning Formats
cd|Concept Development
qf|Quality of Feedback
lm|Language Modeling',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_key_levers'
  $field_instances['e3_note-session_log-field_key_levers'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_key_levers',
    'label' => 'How you plan to achieve target',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_next_step_1'
  $field_instances['e3_note-session_log-field_next_step_1'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_next_step_1',
    'label' => '1st Next Step',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_next_step_2'
  $field_instances['e3_note-session_log-field_next_step_2'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_next_step_2',
    'label' => '2nd Next Step',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_session_challenges'
  $field_instances['e3_note-session_log-field_session_challenges'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_session_challenges',
    'label' => 'What was challenging? What might I do differently?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_session_notes'
  $field_instances['e3_note-session_log-field_session_notes'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_session_notes',
    'label' => 'What went well?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_step_complete_1'
  $field_instances['e3_note-session_log-field_step_complete_1'] = array(
    'bundle' => 'session_log',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_step_complete_1',
    'label' => '1st Step Complete',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_step_complete_2'
  $field_instances['e3_note-session_log-field_step_complete_2'] = array(
    'bundle' => 'session_log',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_step_complete_2',
    'label' => '2nd Step Complete',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_target_date_1'
  $field_instances['e3_note-session_log-field_target_date_1'] = array(
    'bundle' => 'session_log',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_target_date_1',
    'label' => '1st Target Completion Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'restrictions' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_2',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_2',
          ),
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_target_date_2'
  $field_instances['e3_note-session_log-field_target_date_2'] = array(
    'bundle' => 'session_log',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_target_date_2',
    'label' => '2nd Target Completion Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'restrictions' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_1',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 21,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_1',
          ),
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_target_focus'
  $field_instances['e3_note-session_log-field_target_focus'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_target_focus',
    'label' => 'Target Focus Area',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_target_score'
  $field_instances['e3_note-session_log-field_target_score'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_target_score',
    'label' => 'Target Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_time_of_observation'
  $field_instances['e3_note-session_log-field_time_of_observation'] = array(
    'bundle' => 'session_log',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_time_of_observation',
    'label' => 'Time of Session',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'restrictions' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_1',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_1',
          ),
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'allowed_values' => array(
          'type' => 'disabled',
        ),
        'max' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_1',
          ),
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => array(
            'day' => 28,
            'month' => 9,
            'year' => 2015,
          ),
          'host_entity_date' => array(
            'end_date' => 0,
            'field' => 'e3_note:session_log:field_target_date_1',
          ),
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('1st Next Step');
  t('1st Step Complete');
  t('1st Target Completion Date');
  t('2nd Next Step');
  t('2nd Step Complete');
  t('2nd Target Completion Date');
  t('Addresses Problems');
  t('Advanced Language');
  t('Analysis and Reasoning');
  t('Awareness');
  t('Behavior Management Cycle 1');
  t('Behavior Management Cycle 2');
  t('Behavior Management Cycle 3');
  t('Behavior Management Cycle 4');
  t('Behavior Management Score');
  t('Behaviour Management Average');
  t('Behaviour Management Notes');
  t('Clarity of Learning Objectives');
  t('Classroom Organization Score');
  t('Clear Behavior Expectations');
  t('Coaching strategies used');
  t('Concept Development Average');
  t('Concept Development Cycle 1');
  t('Concept Development Cycle 2');
  t('Concept Development Cycle 3');
  t('Concept Development Cycle 4');
  t('Concept Development Notes');
  t('Concept Development Score');
  t('Connections to Real World');
  t('Creating');
  t('Effective Facilitation');
  t('Emotional Support score');
  t('Encouragement and Affirmation');
  t('Feedback Loops');
  t('Flexibility and Student Focus');
  t('Focus areas worked on');
  t('Frequent Conversations');
  t('How you plan to achieve target');
  t('Instructional Learning Formats Average');
  t('Instructional Learning Formats Cycle 1');
  t('Instructional Learning Formats Cycle 2');
  t('Instructional Learning Formats Cycle 3');
  t('Instructional Learning Formats Cycle 4');
  t('Instructional Learning Formats Notes');
  t('Instructional Learning Formats Score');
  t('Instructional Support Score');
  t('Integration');
  t('Language Modeling Average');
  t('Language Modeling Cycle 1');
  t('Language Modeling Cycle 2');
  t('Language Modeling Cycle 3');
  t('Language Modeling Cycle 4');
  t('Language Modeling Notes');
  t('Language Modeling Score');
  t('Maximizing Learning Time');
  t('Negative Affect');
  t('Negative Climate Average');
  t('Negative Climate Cycle 1');
  t('Negative Climate Cycle 2');
  t('Negative Climate Cycle 3');
  t('Negative Climate Cycle 4');
  t('Negative Climate Notes');
  t('Negative Climate Score');
  t('Notes');
  t('Number of adults in classroon');
  t('Number of children in classroom');
  t('Open-Ended Questions');
  t('Positive Affect');
  t('Positive Climate Average');
  t('Positive Climate Cycle 1');
  t('Positive Climate Cycle 2');
  t('Positive Climate Cycle 3');
  t('Positive Climate Cycle 4');
  t('Positive Climate Notes');
  t('Positive Climate Score');
  t('Positive Communication');
  t('Preparation');
  t('Proactive');
  t('Productivity Average');
  t('Productivity Cycle 1');
  t('Productivity Cycle 2');
  t('Productivity Cycle 3');
  t('Productivity Cycle 4');
  t('Productivity Notes');
  t('Productivity Score');
  t('Program');
  t('Prompting Thought Processes');
  t('Providing Information');
  t('Punitive Control');
  t('Quality of Feedback Average');
  t('Quality of Feedback Cycle 1');
  t('Quality of Feedback Cycle 2');
  t('Quality of Feedback Cycle 3');
  t('Quality of Feedback Cycle 4');
  t('Quality of Feedback Notes');
  t('Quality of Feedback Score');
  t('Redirection of Misbehavior');
  t('Regard for Student Perspective Average');
  t('Regard for Student Perspective Notes');
  t('Regard for Student Perspectives Cycle 1');
  t('Regard for Student Perspectives Cycle 2');
  t('Regard for Student Perspectives Cycle 3');
  t('Regard for Student Perspectives Cycle 4');
  t('Regard for Student Perspectives Score');
  t('Relationships');
  t('Repetition and Extension');
  t('Respect');
  t('Responsiveness');
  t('Restriction of Movement');
  t('Routines');
  t('Sarcasm/Disrespect');
  t('Scaffolding');
  t('Self- and Parallel Talk');
  t('Severe Negativity');
  t('Student Behavior');
  t('Student Comfort');
  t('Student Expression');
  t('Student Interest');
  t('Support for Autonomy and Leadership');
  t('Target Focus Area');
  t('Target Score');
  t('Teacher');
  t('Teacher Sensitivity Average');
  t('Teacher Sensitivity Cycle 1');
  t('Teacher Sensitivity Cycle 2');
  t('Teacher Sensitivity Cycle 3');
  t('Teacher Sensitivity Cycle 4');
  t('Teacher Sensitivity Notes');
  t('Teacher Sensitivity Score');
  t('Time of Observation');
  t('Time of Session');
  t('Transitions');
  t('Variety of Modalities and Materials');
  t('What was challenging? What might I do differently?');
  t('What went well?');
  t('Which teacher were you coaching/observing for this session?');

  return $field_instances;
}
