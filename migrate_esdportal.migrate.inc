<?php

/**
 * Implements hook_migrate_api().
 */
function migrate_esdportal_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'terms' => array(
        'title' => t('Terms'),
      ),
    ),
    'migrations' => array(
      'Schools' => array(
        'class_name' => 'Schools',
        'group_name' => 'terms',
      ),
    ),
  );
  return $api;
}

/**
 * @file
 *   Migrate content from CSV into schools terms
 */

class Schools extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import schools from CSV.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        "bcode" => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'bcode',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceCSV('/data/disk/esd/schools-joined-edited-working-display.csv', array(), array('header_rows'=>1,'embedded_newlines'=>TRUE));

    $this->destination = new MigrateDestinationTerm('schools');

    $this->addFieldMapping('name', "title");
    $this->addFieldMapping('field_address', "field_location['und']['0']['country']");
    $this->addFieldMapping('field_address:organisation_name', "field_location['und']['0']['name']");
    $this->addFieldMapping('field_address:thoroughfare', "field_location['und']['0']['street']");
    $this->addFieldMapping('field_address:premise', "field_location['und']['0']['additional']")->defaultValue(NULL);
    $this->addFieldMapping('field_address:locality', "field_location['und']['0']['city']");
    $this->addFieldMapping('field_address:administrative_area', "field_location['und']['0']['province']");
    $this->addFieldMapping('field_address:postal_code', "field_location['und']['0']['postal_code']");
    //$this->addFieldMapping('field_address:', "field_location['und']['0']['latitude']");
    //$this->addFieldMapping('field_address:', "field_location['und']['0']['longitude']");
    //$this->addFieldMapping('field_address:', "field_location['und']['0']['source']");
    //$this->addFieldMapping('field_address:', "field_location['und']['0']['is_primary']");
    //$this->addFieldMapping('field_address:', "field_location['und']['0']['province_name']");
    //$this->addFieldMapping('field_address:', "field_location['und']['0']['country_name']");
    $this->addFieldMapping('field_loc_email', "field_location['und']['0']['email']");
    $this->addFieldMapping('field_address:fax_number', "field_location['und']['0']['fax']");
    $this->addFieldMapping('field_address:phone_number', "field_location['und']['0']['phone']");
    $this->addFieldMapping('field_email', "field_email['und']['0']['value']");
    $this->addFieldMapping('field_bcode', "bcode");
    $this->addFieldMapping('field_links', 'field_links_combined');
    $this->addFieldMapping('field_links:title', 'field_links_title_combined');
    $this->addFieldMapping('field_files', 'field_files_combined');
    $this->addFieldMapping('field_files:source_dir')
            ->defaultValue('/data/disk/esd/distro/002/drupal-7.22.1-prod/sites/portal.excellentschoolsdetroit.org/files');
    $this->addFieldMapping('field_state_status', 'stateStatus');
    $this->addFieldMapping('field_school_status', 'esdStatus');
    $this->addFieldMapping('field_2011_pct_det_res', 'percentDetResident2011');
    $this->addFieldMapping('field_strict_discipline_academy', 'strictDisciplineAcademy');
    $this->addFieldMapping('field_special_ed_emphasis', 'specialEdEmphasis');
    $this->addFieldMapping('field_alternative_school', 'alternativeSchool');
    $this->addFieldMapping('field_career_technical_emphasis', 'careerTechnicalEmphasis');
    $this->addFieldMapping('field_specialty_school', 'specialtySchool');
    $this->addFieldMapping('field_governance', 'governance');
    $this->addFieldMapping('field_school_scorecard_status', 'category');
    $this->addFieldMapping('field_school_type', 'type');
    $this->addFieldMapping('field_authorized_grades', 'authorizedGrades')->separator(',');
    $this->addFieldMapping('field_district', 'district');
    $this->addFieldMapping('field_district:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_operator', 'operator');
    $this->addFieldMapping('field_operator:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_authorizer', 'authorizer');
    $this->addFieldMapping('field_authorizer:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_opted_in', 'optedIn');
    $this->addFieldMapping('field_5e_roster', '5ERoster');
    $this->addFieldMapping('field_2013_site_visit_date', 'siteVisitDate2013');
    $this->addFieldMapping('field_grdataletter', 'grDataLetter');
    $this->addFieldMapping('field_grdatatype', 'grDataType');
    $this->addFieldMapping('field_scorecard_display', 'scorecard_display');

  }

  public function prepareRow($row) {
    for ($i=0; $i<=10; $i++) {
      if (strlen($row->{"field_links['und']['$i']['url']"}) > 0) {
        $field_links_combined[] = $row->{"field_links['und']['$i']['url']"};
        $field_links_title_combined[] = $row->{"field_links['und']['$i']['title']"};
      }
    }
    for ($i=0; $i<=10; $i++) {
      $field_files_combined[] = $row->{"field_files['und']['$i']['filename']"};
    }
    $row->field_files_combined = $field_files_combined;
    $row->field_links_combined = $field_links_combined;
    $row->field_links_title_combined = $field_links_title_combined;
  }

}

