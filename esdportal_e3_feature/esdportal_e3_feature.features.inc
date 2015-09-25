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
