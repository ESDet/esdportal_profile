<?php
/**
 * @file
 * esdportal_e3_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function esdportal_e3_feature_user_default_roles() {
  $roles = array();

  // Exported role: Coach.
  $roles['Coach'] = array(
    'name' => 'Coach',
    'weight' => 8,
  );

  // Exported role: E3 Admin.
  $roles['E3 Admin'] = array(
    'name' => 'E3 Admin',
    'weight' => 7,
  );

  return $roles;
}
