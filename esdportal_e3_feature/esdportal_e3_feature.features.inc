<?php
/**
 * @file
 * esdportal_e3_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esdportal_e3_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function esdportal_e3_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_e3_contact_type().
 */
function esdportal_e3_feature_default_e3_contact_type() {
  $items = array();
  $items['teacher'] = entity_import('e3_contact_type', '{
    "type" : "teacher",
    "label" : "Teacher",
    "weight" : 0,
    "description" : ""
  }');
  return $items;
}

/**
 * Implements hook_default_e3_note_type().
 */
function esdportal_e3_feature_default_e3_note_type() {
  $items = array();
  $items['class_assessment'] = entity_import('e3_note_type', '{
    "type" : "class_assessment",
    "label" : "CLASS Assessment",
    "weight" : 0,
    "description" : ""
  }');
  $items['class_assessment_it'] = entity_import('e3_note_type', '{
    "type" : "class_assessment_it",
    "label" : "CLASS Assessment (Infant\\/Toddler)",
    "weight" : 0,
    "description" : "CLASS Assessment specific to teachers that work with Infants and Toddlers."
  }');
  $items['observation_log'] = entity_import('e3_note_type', '{
    "type" : "observation_log",
    "label" : "Observation Log",
    "weight" : 0,
    "description" : ""
  }');
  $items['session_log'] = entity_import('e3_note_type', '{
    "type" : "session_log",
    "label" : "Session Log",
    "weight" : 0,
    "description" : ""
  }');
  return $items;
}
