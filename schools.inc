<?php

/**
 * @file
 *   Migrate content from CSV into schools terms
 */

/**
 * Implements hook_migrate_api().
 */
function esdportal_migrate_migrate_api() {
  $api = array(
    'api' => 2,
  );
  return $api;
}

class Schools extends Migration {
  public function __construct($args) {
    parent::__construct($args);
    $this->description = t('Import schools from CSV.');

    $this->source = new MigrateSourceCSV($args['source_file'], $this->csvcolumns(), array(), $this->fields());

    $this->destination = new MigrateDesitnationTerm('schools');

    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_xxx', 'xxx');
    $this->addFieldMapping('field_yxx', 'yxx')
         ->defaultValue(NULL);
  }

  protected function csvcolumns() {
    $columns[1] = array("uid", "uid");
    $columns[2] = array("title", "title");
    $columns[12] = array("created", "created");
    $columns[13] = array("changed", "changed");
    $columns[16] = array("uuid ", "uuid");
    $columns[20] = array("field_location['und']['0']['name']", "loc_name");
    $columns[21] = array("field_location['und']['0']['street']", "loc_street");
    $columns[22] = array("field_location['und']['0']['additional']", "loc_additional");
    $columns[23] = array("field_location['und']['0']['city']", "loc_city");
    $columns[24] = array("field_location['und']['0']['province']", "loc_province");
    $columns[25] = array("field_location['und']['0']['postal_code']", "loc_postal_code");
    $columns[26] = array("field_location['und']['0']['country']", "loc_country");
    $columns[27] = array("field_location['und']['0']['latitude']", "loc_latitude");
    $columns[28] = array("field_location['und']['0']['longitude']", "loc_longitude");
    $columns[29] = array("field_location['und']['0']['source']", "loc_source");
    $columns[30] = array("field_location['und']['0']['is_primary']", "loc_is_primary");
    $columns[31] = array("field_location['und']['0']['province_name']", "loc_province_name");
    $columns[32] = array("field_location['und']['0']['country_name']", "loc_country_name");
    $columns[33] = array("field_location['und']['0']['email']", "loc_email");
    $columns[34] = array("field_location['und']['0']['fax']", "loc_fax");
    $columns[35] = array("field_location['und']['0']['phone']", "loc_phone");
    $columns[36] = array("field_school_contact_first_name['und']['0']['value']", "field_school_contact_first_name");
    $columns[42] = array("field_after_school_transportatio['und']['0']['value']", "field_after_school_transportatio");
    $columns[43] = array("field_dual_enrollment['und']['0']['value']", "field_dual_enrollment_institutio_0");
    $columns[44] = array("field_grades_served['und']['0']['value']", "field_grades_served_0");
    $columns[45] = array("field_grades_served['und']['1']['value']", "field_grades_served_1");
    $columns[46] = array("field_grades_served['und']['2']['value']", "field_grades_served_2");
    $columns[47] = array("field_grades_served['und']['3']['value']", "field_grades_served_3");
    $columns[76] = array("field_person_responsible['und']['0']['value']", "field_person_responsible");
    $columns[79] = array("field_in_school_programs['und']['0']['value']", "field_in_school_programs_0");
    $columns[82] = array("field_in_school_programs['und']['1']['value']", "field_in_school_programs_1");
    $columns[85] = array("field_in_school_programs['und']['2']['value']", "field_in_school_programs_2");
    $columns[88] = array("field_in_school_programs['und']['3']['value']", "field_in_school_programs_3");
    $columns[91] = array("field_discipline_programs['und']['0']['value']", "field_discipline_programs");
    $columns[94] = array("field_character_development['und']['0']['value']", "field_character_development");
    $columns[97] = array("field_transportation['und']['0']['value']", "field_transportation");
    $columns[100] = array("field_english_language_learners['und']['0']['value']", "field_english_language_learners");
    $columns[103] = array("field_special_needs['und']['0']['value']", "field_special_needs");
    $columns[106] = array("field_dual_enrollment_institutio['und']['0']['value']", "field_dual_enrollment_institutio");
    $columns[109] = array("field_family_supports['und']['0']['value']", "field_family_supports");
    $columns[112] = array("field_parent_supports['und']['0']['value']", "field_parent_supports");
    $columns[115] = array("field_student_leadership_opportu['und']['0']['value']", "field_student_leadership_opportu_0");
    $columns[118] = array("field_student_leadership_opportu['und']['1']['value']", "field_student_leadership_opportu_1");
    $columns[121] = array("field_student_development_progra['und']['0']['value']", "field_student_development_progra_0");
    $columns[124] = array("field_student_development_progra['und']['1']['value']", "field_student_development_progra_1");
    $columns[127] = array("field_organized_sports['und']['0']['value']", "field_organized_sports_0");
    $columns[130] = array("field_organized_sports['und']['1']['value']", "field_organized_sports_1");
    $columns[133] = array("field_organized_sports['und']['2']['value']", "field_organized_sports_2");
    $columns[136] = array("field_counselor_student_ratio['und']['0']['value']", "field_counselor_student_ratio");
    $columns[139] = array("field_college_counseling['und']['0']['value']", "field_college_counseling");
    $columns[142] = array("field_special_tracks['und']['0']['value']", "field_special_tracks");
    $columns[145] = array("field_early_childhood_programs['und']['0']['value']", "field_early_childhood_programs_0");
    $columns[146] = array("field_early_childhood_programs['und']['1']['value']", "field_early_childhood_programs_1");
    $columns[147] = array("field_early_childhood_transition['und']['0']['value']", "field_early_childhood_transition");
    $columns[150] = array("field_early_child_center_relatio['und']['0']['value']", "field_early_child_center_relatio_0");
    $columns[153] = array("field_ap_classes['und']['0']['value']", "field_ap_classes_0");
    $columns[154] = array("field_ap_classes['und']['1']['value']", "field_ap_classes_1");
    $columns[155] = array("field_ap_classes['und']['2']['value']", "field_ap_classes_2");
    $columns[156] = array("field_ap_classes['und']['3']['value']", "field_ap_classes_3");
    $columns[157] = array("field_student_leadership_opportu['und']['2']['value']", "field_student_leadership_opportu_2");
    $columns[160] = array("field_student_development_progra['und']['2']['value']", "field_student_development_progra_2");
    $columns[163] = array("field_student_development_progra['und']['3']['value']", "field_student_development_progra_3");
    $columns[166] = array("field_grades_served['und']['4']['value']", "field_grades_served_4");
    $columns[167] = array("field_grades_served['und']['5']['value']", "field_grades_served_5");
    $columns[168] = array("field_grades_served['und']['6']['value']", "field_grades_served_6");
    $columns[169] = array("field_grades_served['und']['7']['value']", "field_grades_served_7");
    $columns[170] = array("field_grades_served['und']['8']['value']", "field_grades_served_8");
    $columns[171] = array("field_grades_served['und']['9']['value']", "field_grades_served_9");
    $columns[172] = array("field_grades_served['und']['10']['value']", "field_grades_served_10");
    $columns[173] = array("field_in_school_programs['und']['4']['value']", "field_in_school_programs_4");
    $columns[176] = array("field_in_school_programs['und']['5']['value']", "field_in_school_programs_5");
    $columns[179] = array("field_in_school_programs['und']['6']['value']", "field_in_school_programs_6");
    $columns[182] = array("field_in_school_programs['und']['7']['value']", "field_in_school_programs_7");
    $columns[185] = array("field_in_school_programs['und']['8']['value']", "field_in_school_programs_8");
    $columns[188] = array("field_in_school_programs['und']['9']['value']", "field_in_school_programs_9");
    $columns[191] = array("field_in_school_programs['und']['10']['value']", "field_in_school_programs_10");
    $columns[194] = array("field_in_school_programs['und']['11']['value']", "field_in_school_programs_11");
    $columns[197] = array("field_in_school_programs['und']['12']['value']", "field_in_school_programs_12");
    $columns[200] = array("field_student_leadership_opportu['und']['3']['value']", "field_student_leadership_opportu_3");
    $columns[203] = array("field_organized_sports['und']['3']['value']", "field_organized_sports_3");
    $columns[206] = array("field_student_development_progra['und']['4']['value']", "field_student_development_progra_4");
    $columns[209] = array("field_email['und']['0']['value']", "field_email");
    $columns[212] = array("field_in_school_programs['und']['13']['value']", "field_in_school_programs_13");
    $columns[215] = array("field_in_school_programs['und']['14']['value']", "field_in_school_programs_14");
    $columns[218] = array("field_in_school_programs['und']['15']['value']", "field_in_school_programs_15");
    $columns[221] = array("field_in_school_programs['und']['16']['value']", "field_in_school_programs_16");
    $columns[224] = array("field_in_school_programs['und']['17']['value']", "field_in_school_programs_17");
    $columns[227] = array("field_student_leadership_opportu['und']['4']['value']", "field_student_leadership_opportu_4");
    $columns[230] = array("field_student_leadership_opportu['und']['5']['value']", "field_student_leadership_opportu_5");
    $columns[233] = array("field_student_leadership_opportu['und']['6']['value']", "field_student_leadership_opportu_6");
    $columns[236] = array("field_student_leadership_opportu['und']['7']['value']", "field_student_leadership_opportu_7");
    $columns[239] = array("field_student_leadership_opportu['und']['8']['value']", "field_student_leadership_opportu_8");
    $columns[242] = array("field_student_leadership_opportu['und']['9']['value']", "field_student_leadership_opportu_9");
    $columns[245] = array("field_student_development_progra['und']['5']['value']", "field_student_development_progra_5");
    $columns[248] = array("field_student_development_progra['und']['6']['value']", "field_student_development_progra_6");
    $columns[251] = array("field_student_development_progra['und']['7']['value']", "field_student_development_progra_7");
    $columns[254] = array("field_student_development_progra['und']['8']['value']", "field_student_development_progra_8");
    $columns[257] = array("field_early_child_center_relatio['und']['1']['value']", "field_early_child_center_relatio_1");
    $columns[260] = array("field_early_child_center_relatio['und']['2']['value']", "field_early_child_center_relatio_2");
    $columns[263] = array("field_student_leadership_opportu['und']['10']['value']", "field_student_leadership_opportu_10");
    $columns[266] = array("field_student_leadership_opportu['und']['11']['value']", "field_student_leadership_opportu_11");
    $columns[269] = array("field_student_development_progra['und']['9']['value']", "field_student_development_progra_9");
    $columns[272] = array("field_student_development_progra['und']['10']['value']", "field_student_development_progra_10");
    $columns[275] = array("field_student_development_progra['und']['11']['value']", "field_student_development_progra_11");
    $columns[278] = array("field_organized_sports['und']['4']['value']", "field_organized_sports_4");
    $columns[281] = array("field_organized_sports['und']['5']['value']", "field_organized_sports_5");
    $columns[284] = array("field_early_childhood_programs['und']['2']['value']", "field_early_childhood_programs_2");
    $columns[285] = array("field_early_childhood_programs['und']['3']['value']", "field_early_childhood_programs_3");
    $columns[286] = array("field_early_childhood_programs['und']['4']['value']", "field_early_childhood_programs_4");
    $columns[287] = array("field_organized_sports['und']['6']['value']", "field_organized_sports_6");
    $columns[290] = array("field_organized_sports['und']['7']['value']", "field_organized_sports_7");
    $columns[293] = array("field_organized_sports['und']['8']['value']", "field_organized_sports_8");
    $columns[296] = array("field_organized_sports['und']['9']['value']", "field_organized_sports_9");
    $columns[299] = array("field_ap_classes['und']['4']['value']", "field_ap_classes_4");
    $columns[300] = array("field_ap_classes['und']['5']['value']", "field_ap_classes_5");
    $columns[301] = array("field_ap_classes['und']['6']['value']", "field_ap_classes_6");
    $columns[302] = array("field_ap_classes['und']['7']['value']", "field_ap_classes_7");
    $columns[303] = array("field_ap_classes['und']['8']['value']", "field_ap_classes_8");
    $columns[304] = array("field_ap_classes['und']['9']['value']", "field_ap_classes_9");
    $columns[305] = array("field_ap_classes['und']['10']['value']", "field_ap_classes_10");
    $columns[306] = array("field_ap_classes['und']['11']['value']", "field_ap_classes_11");
    $columns[307] = array("field_ap_classes['und']['12']['value']", "field_ap_classes_12");
    $columns[308] = array("field_ap_classes['und']['13']['value']", "field_ap_classes_13");
    $columns[309] = array("field_ap_classes['und']['14']['value']", "field_ap_classes_14");
    $columns[310] = array("field_ap_classes['und']['15']['value']", "field_ap_classes_15");
    $columns[311] = array("field_ap_classes['und']['16']['value']", "field_ap_classes_16");
    $columns[312] = array("field_ap_classes['und']['17']['value']", "field_ap_classes_17");
    $columns[313] = array("field_grades_served['und']['11']['value']", "field_grades_served_11");
    $columns[314] = array("field_grades_served['und']['12']['value']", "field_grades_served_12");
    $columns[315] = array("field_student_development_progra['und']['12']['value']", "field_student_development_progra_12");
    $columns[318] = array("field_student_development_progra['und']['13']['value']", "field_student_development_progra_13");
    $columns[321] = array("field_organized_sports['und']['10']['value']", "field_organized_sports_10");
    $columns[324] = array("field_dual_enrollment_institutio['und']['1']['value']", "field_dual_enrollment_institutio_1");
    $columns[327] = array("field_dual_enrollment_institutio['und']['2']['value']", "field_dual_enrollment_institutio_2");
    $columns[330] = array("field_grades_served['und']['13']['value']", "field_grades_served_13");
    return $columns;
  }

  /**
   * Get multifield count part.
   *
   * @param array $field
   *   an array as found in csvcolumns() row
   *
   * @return int|bool
   *   if it's a field, return the multi #
   *   if not, return false
   */
  protected function multifieldCountPart($field) {
    preg_match('.*\_\(\d*\)$', $field[1], $matches);
    if ($matches[1]) {
      return $matches[1];
    }
    else {
      return false;
    }
  }

  /**
   * Get multifield base part.
   *
   * @param array $field
   *   an array as found in csvcolumns() row
   *
   * @return int|bool
   *   if it's a field, return the base name
   *   if not, return false
   */
  protected function multifieldBasePart($field) {
    preg_match('\(.*\)\_\d*$', $field[1], $matches);
    if ($matches[1]) {
      return $matches[1];
    }
    else {
      return false;
    }
  }

  /**
   * Find multivalue fields in columns.
   *
   * @param array $cols
   *   csv columns as produced by csvcolumns()
   *
   * @return array
   *   with multivalue field base name as key and max count as value
   */
  protected function findMultifields($cols) {
    $cols = array_filter($cols, '$this->multifieldCountPart');
    $repeaters = array();

    $i = 0;
    $last_name = '';
    foreach ($cols as $col) {
      $this_name = base_part($col[1]);
      if (array_key_exists($this_name, $repeaters)) {
        $repeaters[$base_part]++;
      }
      else {
        $repeaters[$base_part] = 1;
      }
    }
    return $repeaters;
  }

  public function prepareRow($row) {
    $repeaters = $this->findMultiFields($this->csvcolumns());
    $repeaters_lists = array();
    foreach ($repeaters as $base => $count) {
      for ($i = 1; $i <= $count; $i++) {
        $key = "$base_$i";
        $repeaters_lists[$base][] = $row->$key;
      }
      $row->$base = implode(',', $repeaters_lists[$base]);
    }
  }
}

