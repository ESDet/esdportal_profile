<?php

/**
 * @file
 * CSV importer for teacher bundle contact entities.
 */

$csv_path = "/home/bc/Downloads/initial_teacher_import.csv";

if (($handle = fopen($csv_path, "r")) !== FALSE) {
  while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
    teacherimport($data);
  }
}
fclose($handle);

/**
 * Imports a single teacher record from a CSV row.
 *
 * @param array $data
 *   Four-element array from CSV.
 */
function teacherimport($data) {
  $newteacher = entity_create('e3_contact', array('type' => 'teacher'));

  $newteacher->uid = '1';
  $newteacher->firstname = $data[0];
  $newteacher->lastname = $data[1];
  $fullname = implode(' ', array($data[0], $data[1]));
  $newteacher->fullname = $fullname;
  $newteacher->field_email = array(LANGUAGE_NONE => array(0 => array('value' => $data[2])));

  $wrapper = entity_metadata_wrapper('e3_contact', $newteacher);

  $wrapper->field_contact_addy->phone_number = $data[3];

  entity_save('e3_contact', $newteacher);
}
