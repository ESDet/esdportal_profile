<?php
/**
 * @file
 * esdportal_e3_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function esdportal_e3_feature_taxonomy_default_vocabularies() {
  return array(
    'ec_parent_organization' => array(
      'name' => 'Early Childhood parent organization',
      'machine_name' => 'ec_parent_organization',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
