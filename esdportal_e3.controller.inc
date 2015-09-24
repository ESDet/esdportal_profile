<?php

class EsdportalContactController extends EntityAPIController {

  public function create(array $values = array()) {
    global $user;
    $values += array(
      'title' => '',
      'description' => '',
      'firstname' => '',
      'lastname' => '',
      'created' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
      'uid' => $user->uid,
    );
    return parent::create($values);
  }

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $wrapper = entity_metadata_wrapper('esdportal_contact', $entity);
//    Un Comment to display node author - defaults to admin if importer script was used
//    $content['author'] = array('#markup' => t('Created by: !author', array('!author' => $wrapper->uid->name->value(array('sanitize' => TRUE)))));

    // Make Description and Status themed like default fields.
    $content['firstname'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' =>t('First Name'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_fake_description',
      '#field_type' => 'text',
      '#entity_type' => 'esdportal_contact',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->firstname)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->firstname))
    );
    $content['lastname'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' =>t('Last Name'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_fake_description',
      '#field_type' => 'text',
      '#entity_type' => 'esdportal_contact',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->lastname)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->lastname))
    );

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}

 class EsdportalContactTypeController extends EntityAPIControllerExportable {
   public function create(array $values = array()) {
    $values += array(
      'label' => '',
      'description' => '',
    );
    return parent::create($values);
  }

  /**
   * Save Contact Type.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);
    // Rebuild menu registry. We do not call menu_rebuild directly, but set
    // variable that indicates rebuild in the end.
    // @see http://drupal.org/node/1399618
    variable_set('menu_rebuild_needed', TRUE);
  }
}

/**
 * UI controller for Contact Type.
 */
class EsdportalContactTypeUIController extends EntityDefaultUIController {
  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage Contact types.';
    return $items;
  }
}

/**
 * Contact class.
 */
class EsdportalContact extends Entity {
  protected function defaultLabel() {
    return $this->title;
  }

  protected function defaultUri() {
    return array('path' => 'contact/' . $this->identifier());
  }
}

/**
 * Contact Type class.
 */
class EsdportalContactType extends Entity {
  public $type;
  public $label;
  public $weight = 0;

  public function __construct($values = array()) {
    parent::__construct($values, 'esdportal_contact_type');
  }

  function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }
}
