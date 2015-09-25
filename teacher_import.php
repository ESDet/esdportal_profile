<?php

$csv_path = "/home/gl2748/Dev/ESD6/profiles/esdportal_profile/modules/custom/esdportal_e3/initial_teacher_import.csv";

if (($handle = fopen($csv_path, "r")) !== FALSE) {
  while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
    teacherimport($data);
  }
}
fclose($handle);

function teacherimport($data) {
  $newteacher = entity_create('e3_contact', array('type' => 'teacher'));
  $newteacher->uid = '1';
  $newteacher->firstname = $data[0];
  $newteacher->lastname = $data[1];
  $fullname = implode(' ', array($data[0], $data[1]));
  $newteacher->title = $fullname;
  $newteacher->field_teacher_phone = array(LANGUAGE_NONE => array(0 => array('value' => $data[3])));
  $newteacher->field_email = array(LANGUAGE_NONE => array(0 => array('value' => $data[2])));
  entity_save('e3_contact', $newteacher);
}

