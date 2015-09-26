<?php

/**
 * @file
 * AJAX functions related to E3 Contact entities.
 */

/**
 * Searches for a coach username, and returns the name with UID in brackets.
 *
 * @param string $coachname
 */
function e3_contact_coach_autocomplete($coachname = '') {
  $matches = [];

  if ($coachname) {
    // @todo limit to users with coach role, which doesn't exist yet
    $result = db_select('users')
      ->fields('users', array('name', 'uid'))
      ->condition('name', db_like($coachname) . '%', 'LIKE')
      ->range(0, 10)
      ->execute();

    foreach ($result as $user) {
      $matches[$user->uid] = check_plain($user->name) . " [$user->uid]";
    }
  }

  drupal_json_output($matches);
}
