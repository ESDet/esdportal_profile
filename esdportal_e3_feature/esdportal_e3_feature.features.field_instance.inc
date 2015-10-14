<?php
/**
 * @file
 * esdportal_e3_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function esdportal_e3_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'e3_contact-teacher-field_contact_addy'
  $field_instances['e3_contact-teacher-field_contact_addy'] = array(
    'bundle' => 'teacher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'e3_contact',
    'field_name' => 'field_contact_addy',
    'label' => 'Home address',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'phone' => 'phone',
          'address-optional' => 'address-optional',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-us-with-county' => 0,
        ),
        'phone_number_fields' => array(
          'extension' => 0,
          'fax' => 0,
          'mobile' => 'mobile',
          'phone' => 'phone',
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'e3_contact-teacher-field_ec'
  $field_instances['e3_contact-teacher-field_ec'] = array(
    'bundle' => 'teacher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'e3_contact',
    'field_name' => 'field_ec',
    'label' => 'Employing Early Childhood Center',
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

  // Exported field_instance: 'e3_contact-teacher-field_email'
  $field_instances['e3_contact-teacher-field_email'] = array(
    'bundle' => 'teacher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'e3_contact',
    'field_name' => 'field_email',
    'label' => 'Email',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'e3_contact-teacher-field_teacher_ec_role'
  $field_instances['e3_contact-teacher-field_teacher_ec_role'] = array(
    'bundle' => 'teacher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'e3_contact',
    'field_name' => 'field_teacher_ec_role',
    'label' => 'Position / role',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'e3_contact-teacher-field_work_email'
  $field_instances['e3_contact-teacher-field_work_email'] = array(
    'bundle' => 'teacher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'e3_contact',
    'field_name' => 'field_work_email',
    'label' => 'Work email',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'e3_contact-teacher-field_work_phone'
  $field_instances['e3_contact-teacher-field_work_phone'] = array(
    'bundle' => 'teacher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'e3_contact',
    'field_name' => 'field_work_phone',
    'label' => 'Work phone',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_classroom_organization'
  $field_instances['e3_note-class_assessment-field_classroom_organization'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Automatically calculated from bm, p, and ilf cycle values.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 75,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_classroom_organization',
    'label' => 'Classroom Organization Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'prefix' => '',
      'read-only' => FALSE,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mathfield',
      'settings' => array(),
      'type' => 'mathfield_markup',
      'weight' => 75,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_emotional_support_score'
  $field_instances['e3_note-class_assessment-field_emotional_support_score'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Automatically calculated from pc, nc, ts and rsp cycle values.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 74,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_emotional_support_score',
    'label' => 'Emotional Support Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'prefix' => '',
      'read-only' => FALSE,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mathfield',
      'settings' => array(),
      'type' => 'mathfield_markup',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'e3_note-class_assessment-field_instructional_support'
  $field_instances['e3_note-class_assessment-field_instructional_support'] = array(
    'bundle' => 'class_assessment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Automatically calculated from cd, qf, and lm cycle values',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 76,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_instructional_support',
    'label' => 'Instructional Support Score',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'prefix' => '',
      'read-only' => FALSE,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mathfield',
      'settings' => array(),
      'type' => 'mathfield_markup',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'e3_note-observation_log-field_observation_duration'
  $field_instances['e3_note-observation_log-field_observation_duration'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => TRUE,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 84,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_observation_duration',
    'label' => 'Observation Duration',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'entity_translation_sync' => FALSE,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_observation_duration'
  $field_instances['e3_note-session_log-field_observation_duration'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => TRUE,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_observation_duration',
    'label' => 'Session Duration',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'entity_translation_sync' => FALSE,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Automatically calculated from bm, p, and ilf cycle values.');
  t('Automatically calculated from cd, qf, and lm cycle values');
  t('Automatically calculated from pc, nc, ts and rsp cycle values.');
  t('Classroom Organization Score');
  t('Email');
  t('Emotional Support Score');
  t('Employing Early Childhood Center');
  t('Home address');
  t('Instructional Support Score');
  t('Observation Duration');
  t('Position / role');
  t('Session Duration');
  t('Work email');
  t('Work phone');

  return $field_instances;
}
