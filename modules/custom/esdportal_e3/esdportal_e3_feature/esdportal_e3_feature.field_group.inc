<?php
/**
 * @file
 * esdportal_e3_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function esdportal_e3_feature_field_group_info() {
  $export = array();

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
      0 => 'field_assigned_coach',
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

  return $export;
}
