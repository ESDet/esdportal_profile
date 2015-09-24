<?php

if (($handle = fopen("/home/gl2748/Dev/ESD6/profiles/esdportal_profile/modules/custom/esdportal_e3/initial_teacher_import.csv", "r")) !== FALSE) {
    while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
//        print_r($data);
//        print_r($data[1]);
        teacherimport($data);
        }
    }
    fclose($handle);

function teacherimport() {
  $newteacher = entity_create('esdportal_contact', array('type' =>'teacher'));
//  $newteacher->uid = '1';
  $wrapper = entity_metadata_wrapper('esdportal_contact', $newteacher);
  $wrapper->firstname = $data[0];
  $wrapper->field_email = $data[2];
  $wrapper->save();
}
