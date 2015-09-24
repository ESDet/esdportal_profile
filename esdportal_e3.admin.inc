<?php

/**
 * Generates the contact type editing form.
 */
function esdportal_contact_type_form($form, &$form_state, $contact_type, $op = 'edit') {

  if ($op == 'clone') {
    $contact_type->label .= ' (cloned)';
    $contact_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $contact_type->label,
    '#description' => t('The human-readable name of this contact type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($contact_type->type) ? $contact_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $contact_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'esdportal_contact_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this contact type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($contact_type->description) ? $contact_type->description : '',
    '#description' => t('Description about the contact type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save contact type'),
    '#weight' => 40,
  );

  if (!$contact_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete contact type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('esdportal_contact_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing contact_type.
 */
function esdportal_contact_type_form_submit(&$form, &$form_state) {
  $contact_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  esdportal_contact_type_save($contact_type);

  // Redirect user back to list of contact types.
  $form_state['redirect'] = 'admin/structure/contact-types';
}

function esdportal_contact_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/contact-types/' . $form_state['esdportal_contact_type']->type . '/delete';
}

/**
 * Contact type delete form.
 */
function esdportal_contact_type_form_delete_confirm($form, &$form_state, $contact_type) {
  $form_state['contact_type'] = $contact_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['contact_type_id'] = array('#type' => 'value', '#value' => entity_id('esdportal_contact_type' ,$contact_type));
  return confirm_form($form,
    t('Are you sure you want to delete contact type %title?', array('%title' => entity_label('contact_type', $contact_type))),
    'contact/' . entity_id('esdportal_contact_type' ,$contact_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Contact type delete form submit handler.
 */
function esdportal_contact_type_form_delete_confirm_submit($form, &$form_state) {
  $contact_type = $form_state['contact_type'];
  esdportal_contact_type_delete($contact_type);

  watchdog('esdportal_contact_type', '@type: deleted %title.', array('@type' => $contact_type->type, '%title' => $contact_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $contact_type->type, '%title' => $contact_type->label)));

  $form_state['redirect'] = 'admin/structure/contact-types';
}

/**
 * Page to select contact Type to add new task.
 */
function esdportal_contact_admin_add_page() {
  $items = array();
  foreach (esdportal_contact_types() as $contact_type_key => $contact_type) {
    $items[] = l(entity_label('esdportal_contact_type', $contact_type), 'contact/add/' . $contact_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of contact to create.')));
}

/**
 * Add new contact page callback.
 */
function esdportal_contact_add($type) {
  $contact_type = esdportal_contact_types($type);

  $contact = entity_create('esdportal_contact', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('contact_type', $contact_type))));

  $output = drupal_get_form('esdportal_contact_form', $contact);

  return $output;
}

/**
 * Contact Form.
 */
function esdportal_contact_form($form, &$form_state, $contact) {
  $form_state['contact'] = $contact;

  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Name'),
    '#default_value' => $contact->title,
  );

  $form['firstname'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('First Name'),
    '#default_value' => $contact->firstname,
  );

  $form['lastname'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Last Name'),
    '#default_value' => $contact->lastname,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $contact->uid,
  );

  field_attach_form('esdportal_contact', $contact, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save contact'),
    '#submit' => $submit + array('esdportal_contact_form_submit'),
  );

  // Show Delete button if we edit contact.
  $contact_id = entity_id('esdportal_contact' ,$contact);
  if (!empty($contact_id) && esdportal_contact_access('edit', $contact)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('esdportal_contact_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'esdportal_contact_form_validate';

  return $form;
}

function esdportal_contact_form_validate($form, &$form_state) {

}

/**
 * Contact submit handler.
 */
function esdportal_contact_form_submit($form, &$form_state) {
  $contact = $form_state['contact'];

  entity_form_submit_build_entity('esdportal_contact', $contact, $form, $form_state);

  esdportal_contact_save($contact);

  $contact_uri = entity_uri('esdportal_contact', $contact);

  $form_state['redirect'] = $contact_uri['path'];

  drupal_set_message(t('Contact %title saved.', array('%title' => entity_label('esdportal_contact', $contact))));
}

function esdportal_contact_form_submit_delete($form, &$form_state) {
  $contact = $form_state['contact'];
  $contact_uri = entity_uri('esdportal_contact', $contact);
  $form_state['redirect'] = $contact_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function esdportal_contact_delete_form($form, &$form_state, $contact) {
  $form_state['contact'] = $contact;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['contact_type_id'] = array('#type' => 'value', '#value' => entity_id('esdportal_contact' ,$contact));
  $contact_uri = entity_uri('esdportal_contact', $contact);
  return confirm_form($form,
    t('Are you sure you want to delete contact %title?', array('%title' => entity_label('esdportal_contact', $contact))),
    $contact_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function esdportal_contact_delete_form_submit($form, &$form_state) {
  $contact = $form_state['contact'];
  esdportal_contact_delete($contact);

  drupal_set_message(t('Contact %title deleted.', array('%title' => entity_label('esdportal_contact', $contact))));

  $form_state['redirect'] = '<front>';
}
