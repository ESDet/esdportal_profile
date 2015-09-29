<?php
/**
 * @file
 * esdportal_e3_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function esdportal_e3_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer e3_contact types.
  $permissions['administer e3_contact types'] = array(
    'name' => 'administer e3_contact types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: administer e3_note types.
  $permissions['administer e3_note types'] = array(
    'name' => 'administer e3_note types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: create e3_contact entities.
  $permissions['create e3_contact entities'] = array(
    'name' => 'create e3_contact entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: create e3_note entities.
  $permissions['create e3_note entities'] = array(
    'name' => 'create e3_note entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: edit any e3_contact entities.
  $permissions['edit any e3_contact entities'] = array(
    'name' => 'edit any e3_contact entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: edit any e3_note entities.
  $permissions['edit any e3_note entities'] = array(
    'name' => 'edit any e3_note entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: edit own e3_contact entities.
  $permissions['edit own e3_contact entities'] = array(
    'name' => 'edit own e3_contact entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: edit own e3_note entities.
  $permissions['edit own e3_note entities'] = array(
    'name' => 'edit own e3_note entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: view e3_contact entities.
  $permissions['view e3_contact entities'] = array(
    'name' => 'view e3_contact entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  // Exported permission: view e3_note entities.
  $permissions['view e3_note entities'] = array(
    'name' => 'view e3_note entities',
    'roles' => array(
      'Coach' => 'Coach',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_e3',
  );

  return $permissions;
}
