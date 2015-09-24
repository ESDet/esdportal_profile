<?php

/**
 * Contact view callback.
 */
function esdportal_contact_view($contact) {
  drupal_set_title(entity_label('esdportal_contact', $contact));
  return entity_view('esdportal_contact', array(entity_id('esdportal_contact', $contact) => $contact), 'full');
}
