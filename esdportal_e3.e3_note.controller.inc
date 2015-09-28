<?php

/**
 * @file
 * Controller for E3 entity types.
 */

/**
 * Defines entity controller for E3 Note.
 */
class E3NoteController extends EntityAPIController {

  /**
   * Creates an E3 Note entity.
   *
   * @param array $values
   *   Note data.
   *
   * @return result of parent::create
   */
  public function create(array $values = array()) {
    global $user;
    $values += array(
      'uid' => $user->uid,
      'created' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
    );
    return parent::create($values);
  }

  /**
   * Adds features to entity form.
   *
   * @param object $entity
   *   An E3 Note
   * @param string $view_mode
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $wrapper = entity_metadata_wrapper('e3_note', $entity);

    $content['author'] = array(
      '#markup' => t('Created by: !author', array('!author' => $wrapper->uid->name->value(array('sanitize' => TRUE)))),
    );

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }

}

/**
 * Defines entity controller for E3 Note Type.
 */
class E3NoteTypeController extends EntityAPIControllerExportable {

  /**
   * Creates an E3 Note entity.
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
   * Saves E3 Note Type.
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
 * UI controller for Note Type.
 */
class E3NoteTypeUIController extends EntityDefaultUIController {
  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage E3 Note types.';
    return $items;
  }

}

/**
 * E3 Note class.
 */
class E3Note extends Entity {
  /**
   *
   */
  protected function defaultLabel() {
    return "todo";
  }

  /**
   *
   */
  protected function defaultUri() {
    return array('path' => 'e3-note/' . $this->identifier());
  }

}

/**
 * E3 Note Type class.
 */
class E3NoteType extends Entity {
  public $type;
  public $label;
  public $weight = 0;

  /**
   *
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'e3_note_type');
  }

  /**
   *
   */
  function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }

}
