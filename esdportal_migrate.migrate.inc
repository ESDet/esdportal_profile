<?php

/**
 * Implements hook_migrate_api().
 */
function esdportal_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'oldPortal' => 'Old Portal Migrations',
    ),
    'migrations' => array(
      'Schools' => array(
        'class_name' => 'Schools',
        'group_name' => 'oldPortal',
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

    $this->source = new MigrateSourceCSV('/home/bc/Desktop/codez/esd/scorecard/portal_live/schools-with-bcode.csv', NULL, array('header_rows'=>1,'embedded_newlines'=>TRUE), $this->fields());

    $this->destination = new MigrateDestinationTerm('schools');

    $this->addFieldMapping('name', "title");
    $this->addFieldMapping('field_addressfield', "field_location['und']['0']['country']");
    $this->addFieldMapping('field_addressfield:organisation_name', "field_location['und']['0']['name']");
    $this->addFieldMapping('field_addressfield:thoroughfare', "field_location['und']['0']['street']");
    $this->addFieldMapping('field_addressfield:premise', "field_location['und']['0']['additional']")->defaultValue(NULL);
    $this->addFieldMapping('field_addressfield:locality', "field_location['und']['0']['city']");
    $this->addFieldMapping('field_addressfield:administrative_area', "field_location['und']['0']['province']");
    $this->addFieldMapping('field_addressfield:postal_code', "field_location['und']['0']['postal_code']");
    //$this->addFieldMapping('field_addressfield:', "field_location['und']['0']['latitude']");
    //$this->addFieldMapping('field_addressfield:', "field_location['und']['0']['longitude']");
    //$this->addFieldMapping('field_addressfield:', "field_location['und']['0']['source']");
    //$this->addFieldMapping('field_addressfield:', "field_location['und']['0']['is_primary']");
    //$this->addFieldMapping('field_addressfield:', "field_location['und']['0']['province_name']");
    //$this->addFieldMapping('field_addressfield:', "field_location['und']['0']['country_name']");
    $this->addFieldMapping('field_loc_email', "field_location['und']['0']['email']");
    $this->addFieldMapping('field_addressfield:fax_number', "field_location['und']['0']['fax']");
    $this->addFieldMapping('field_addressfield:phone_number', "field_location['und']['0']['phone']");
    $this->addFieldMapping('field_email', "field_email['und']['0']['value']");
    $this->addFieldMapping('field_bcode', "field_bcode['und']['0']['value']");

    $this->addUnMigratedDestinations(array(
      'field_school_type',
      'field_school_scorecard_status',
      'field_school_status',
    ));
  }
}

