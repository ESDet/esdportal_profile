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
        "field_bcode['und']['0']['value']" => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Building code',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceCSV('/home/bc/Desktop/codez/esd/scorecard/portal_live/schools-with-bcode.csv', array(), array('header_rows'=>1,'embedded_newlines'=>TRUE));

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

    $this->addUnMigratedDestinations(array(
      'field_school_type',
      'field_school_scorecard_status',
      'field_school_status',
    ));
  }
}

