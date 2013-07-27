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
        "vid" => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'vid',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceCSV('/data/disk/esd/schools-with-bcode.csv', array(), array('header_rows'=>1,'embedded_newlines'=>TRUE));

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
    $this->addFieldMapping('field_bcode', "field_bcode['und']['0']['value']");
    $this->addFieldMapping('field_links', 'field_links_combined');
    $this->addFieldMapping('field_links:title', 'field_links_title_combined');
    $this->addFieldMapping('field_files', 'field_files_combined');
    $this->addFieldMapping('field_files:source_dir')
            ->defaultValue('/data/disk/esd/distro/002/drupal-7.22.1-prod/sites/portal.excellentschoolsdetroit.org/files');

    $this->addUnMigratedDestinations(array(
      'field_school_type',
      'field_school_scorecard_status',
      'field_school_status',
    ));
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

