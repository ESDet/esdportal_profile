<?php

/**
 * @file
 */

/**
 * Note view callback.
 */
function e3_note_view($contact) {
  drupal_set_title(entity_label('e3_note', $note));
  return entity_view('e3_note', array(entity_id('e3_note', $note) => $note), 'full');
}
