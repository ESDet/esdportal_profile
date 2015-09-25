<?php

/**
 * @file
 */

/**
 * Contact view callback.
 */
function e3_contact_view($contact) {
  drupal_set_title(entity_label('e3_contact', $contact));
  return entity_view('e3_contact', array(entity_id('e3_contact', $contact) => $contact), 'full');
}
