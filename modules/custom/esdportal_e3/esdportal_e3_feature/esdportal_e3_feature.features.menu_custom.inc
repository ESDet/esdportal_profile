<?php
/**
 * @file
 * esdportal_e3_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function esdportal_e3_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-coach-menu.
  $menus['menu-coach-menu'] = array(
    'menu_name' => 'menu-coach-menu',
    'title' => 'Coach Menu',
    'description' => '',
  );
  // Exported menu: menu-e3-admin.
  $menus['menu-e3-admin'] = array(
    'menu_name' => 'menu-e3-admin',
    'title' => 'E3 Admin',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Coach Menu');
  t('E3 Admin');


  return $menus;
}
