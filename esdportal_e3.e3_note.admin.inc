<?php

/**
 * @file
 */

/**
 * Generates the E3 experience note type editing form.
 */
function e3_note_type_form($form, &$form_state, $e3_note_type, $op = 'edit') {

  if ($op == 'clone') {
    $e3_note_type->label .= ' (cloned)';
    $e3_note_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $e3_note_type->label,
    '#description' => t('The human-readable name of this E3 Contact type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($e3_note_type->type) ? $e3_note_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $e3_note_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'e3_note_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this E3 Contact type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($e3_note_type->description) ? $e3_note_type->description : '',
    '#description' => t('Description about the E3 Contact type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save E3 Contact type'),
    '#weight' => 40,
  );

  if (!$e3_note_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete E3 Contact type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('e3_note_type_form_submit_delete'),
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing E3 Contact type.
 */
function e3_note_type_form_submit(&$form, &$form_state) {
  $e3_note_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  e3_note_type_save($e3_note_type);

  // Redirect user back to list of E3 Contact types.
  $form_state['redirect'] = 'admin/structure/e3-note-types';
}

/**
 *
 */
function e3_note_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/e3-note-types/' . $form_state['e3_note_type']->type . '/delete';
}

/**
 * E3 Contact type delete form.
 */
function e3_note_type_form_delete_confirm($form, &$form_state, $e3_note_type) {
  $form_state['e3_note_type'] = $e3_note_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['e3_note_type_id'] = array('#type' => 'value', '#value' => entity_id('e3_note_type', $e3_note_type));
  return confirm_form($form,
    t('Are you sure you want to delete E3 Contact type %title?', array('%title' => entity_label('e3_note_type', $e3_note_type))),
    'e3-note/' . entity_id('e3_note_type', $e3_note_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * E3 Contact type delete form submit handler.
 */
function e3_note_type_form_delete_confirm_submit($form, &$form_state) {
  $e3_note_type = $form_state['e3_note_type'];
  e3_note_type_delete($e3_note_type);

  watchdog('e3_note_type', '@type: deleted %title.', array('@type' => $e3_note_type->type, '%title' => $e3_note_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $e3_note_type->type, '%title' => $e3_note_type->label)));

  $form_state['redirect'] = 'admin/structure/note-types';
}

/**
 * Page to select E3 Contact type to add new entity.
 */
function e3_note_admin_add_page() {
  $items = array();
  foreach (e3_note_types() as $e3_note_type_key => $e3_note_type) {
    $items[] = l(entity_label('e3_note_type', $e3_note_type), 'e3-note/add/' . $e3_note_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of E3 Contact to create.')));
}

/**
 * Add new E3 Contact page callback.
 */
function e3_note_add($type) {
  $e3_note_type = e3_note_types($type);

  $e3_note = entity_create('e3_note', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('e3_note_type', $e3_note_type))));

  $output = drupal_get_form('e3_note_form', $e3_note);

  return $output;
}

/**
 * E3 Contact Form.
 */
function e3_note_form($form, &$form_state, $e3_note) {
  $form_state['e3_note'] = $e3_note;

  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Name'),
    '#default_value' => $e3_note->title,
  );

  $form['firstname'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('First Name'),
    '#default_value' => $e3_note->firstname,
  );

  $form['lastname'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Last Name'),
    '#default_value' => $e3_note->lastname,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $e3_note->uid,
  );

  field_attach_form('e3_note', $e3_note, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save E3 Contact'),
    '#submit' => $submit + array('e3_note_form_submit'),
  );

  // Show Delete button if we edit E3 Contact.
  $e3_note_id = entity_id('e3_note', $e3_note);
  if (!empty($e3_note_id) && e3_note_access('edit', $e3_note)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('e3_note_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'e3_note_form_validate';

  return $form;
}

/**
 *
 */
function e3_note_form_validate($form, &$form_state) {

}

/**
 * E3 Contact submit handler.
 */
function e3_note_form_submit($form, &$form_state) {
  $e3_note = $form_state['e3_note'];

  entity_form_submit_build_entity('e3_note', $e3_note, $form, $form_state);

  e3_note_save($e3_note);

  $e3_note_uri = entity_uri('e3_note', $e3_note);

  $form_state['redirect'] = $e3_note_uri['path'];

  drupal_set_message(t('E3 Contact %title saved.', array('%title' => entity_label('e3_note', $e3_note))));
}

/**
 *
 */
function e3_note_form_submit_delete($form, &$form_state) {
  $e3_note = $form_state['e3_note'];
  $e3_note_uri = entity_uri('e3_note', $e3_note);
  $form_state['redirect'] = $e3_note_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function e3_note_delete_form($form, &$form_state, $e3_note) {
  $form_state['e3_note'] = $e3_note;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['e3_note_type_id'] = array('#type' => 'value', '#value' => entity_id('e3_note', $e3_note));
  $e3_note_uri = entity_uri('e3_note', $e3_note);
  return confirm_form($form,
    t('Are you sure you want to delete E3 Contact %title?', array('%title' => entity_label('e3_note', $e3_note))),
    $e3_note_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function e3_note_delete_form_submit($form, &$form_state) {
  $e3_note = $form_state['e3_note'];
  e3_note_delete($e3_note);

  drupal_set_message(t('E3 Contact %title deleted.', array('%title' => entity_label('e3_note', $e3_note))));

  $form_state['redirect'] = '<front>';
}
