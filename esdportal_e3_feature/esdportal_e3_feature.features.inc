<?php
/**
 * @file
 * esdportal_e3_feature.features.inc
 */

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
