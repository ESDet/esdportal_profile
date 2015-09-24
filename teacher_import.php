<?php

$row = 1;
if (($handle = fopen("/home/gl2748/Dev/ESD6/profiles/esdportal_profile/modules/custom/esdportal_e3/initial_teacher_import.csv", "r")) !== FALSE) {
    while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
//        print_r($data);
        teacherimport($data);
        }
    }
    fclose($handle);

function teacherimport() {
  $newteacher = entity_create('esdportal_contact', array('type' =>'teacher'));
  $newteacher->firstname = $data[0];
//  $newteacher->save(); 
 entity_save('esdportal_contact', $newteacher);
}
