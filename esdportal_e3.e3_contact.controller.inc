<?php

/**
 * @file
 * Controller for E3 entity types.
 */

/**
 * Defines entity controller for E3 Contact.
 */
class E3ContactController extends EntityAPIController {

  /**
   * Creates an E3 Contact entity.
   *
   * @param array $values
   *   Contact data.
   *
   * @return result of parent::create
   */
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

  /**
   * Adds features to entity form.
   *
   * @param object $entity
   *   An E3 Contact
   * @param string $view_mode
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $wrapper = entity_metadata_wrapper('e3_contact', $entity);

    $content['author'] = array(
      '#markup' => t('Created by: !author', array('!author' => $wrapper->uid->name->value(array('sanitize' => TRUE)))),
    );

    // Make firstname and lastname themed like default fields.
    $content['firstname'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' => t('First Name'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_firstname',
      '#field_type' => 'text',
      '#entity_type' => 'e3_contact',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->firstname)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->firstname)),
    );
    $content['lastname'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' => t('Last Name'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_lastname',
      '#field_type' => 'text',
      '#entity_type' => 'e3_contact',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->lastname)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->lastname)),
    );

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }

}

/**
 * Defines entity controller for E3 Contact Type.
 */
class E3ContactTypeController extends EntityAPIControllerExportable {

  /**
   * Creates an E3 Contact entity.
   *
   * @param array $values
   *
   * @return result of parent::create
   */
  public function create(array $values = array()) {
    $values += array(
      'label' => '',
      'description' => '',
    );
    return parent::create($values);
  }

  /**
   * Saves E3 Contact Type.
   *
   * @param object $entity
   * @param DatabaseTransaction $transaction
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
class E3ContactTypeUIController extends EntityDefaultUIController {
  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage E3 Contact types.';
    return $items;
  }

}

/**
 * E3 Contact class.
 */
class E3Contact extends Entity {
  /**
   *
   */
  protected function defaultLabel() {
    return $this->title;
  }

  /**
   *
   */
  protected function defaultUri() {
    return array('path' => 'e3-contact/' . $this->identifier());
  }

}

/**
 * E3 Contact Type class.
 */
class E3ContactType extends Entity {
  public $type;
  public $label;
  public $weight = 0;

  /**
   *
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'e3_contact_type');
  }

  /**
   *
   */
  function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }

}
