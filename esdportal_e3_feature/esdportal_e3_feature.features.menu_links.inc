<?php
/**
 * @file
 * esdportal_e3_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function esdportal_e3_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coach-menu:e3-contact/add/teacher
  $menu_links['menu-coach-menu:e3-contact/add/teacher'] = array(
    'menu_name' => 'menu-coach-menu',
    'link_path' => 'e3-contact/add/teacher',
    'router_path' => 'e3-contact/add/teacher',
    'link_title' => 'Add Teacher',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-coach-menu:e3-note/add/class_assessment
  $menu_links['menu-coach-menu:e3-note/add/class_assessment'] = array(
    'menu_name' => 'menu-coach-menu',
    'link_path' => 'e3-note/add/class_assessment',
    'router_path' => 'e3-note/add/class_assessment',
    'link_title' => 'Add CLASS Assessment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-coach-menu:e3-note/add/observation_log
  $menu_links['menu-coach-menu:e3-note/add/observation_log'] = array(
    'menu_name' => 'menu-coach-menu',
    'link_path' => 'e3-note/add/observation_log',
    'router_path' => 'e3-note/add/observation_log',
    'link_title' => 'Add Observation Log',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-coach-menu:e3-note/add/session_log
  $menu_links['menu-coach-menu:e3-note/add/session_log'] = array(
    'menu_name' => 'menu-coach-menu',
    'link_path' => 'e3-note/add/session_log',
    'router_path' => 'e3-note/add/session_log',
    'link_title' => 'Add Session Log',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-coach-menu:my-teachers
  $menu_links['menu-coach-menu:my-teachers'] = array(
    'menu_name' => 'menu-coach-menu',
    'link_path' => 'my-teachers',
    'router_path' => 'my-teachers',
    'link_title' => 'My Teachers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add CLASS Assessment');
  t('Add Observation Log');
  t('Add Session Log');
  t('Add Teacher');
  t('My Teachers');


  return $menu_links;
}
