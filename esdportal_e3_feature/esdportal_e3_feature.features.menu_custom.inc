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
  // Translatables
  // Included for use with string extractors like potx.
  t('Coach Menu');


  return $menus;
}
