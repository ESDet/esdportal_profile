<?php

/**
 * @file migrate_ec.migrate.inc
 * Imports early childhood taxonomy terms from Great Start export.
 */

/**
 * Implements hook_migrate_api().
 */
function migrate_ec_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'terms' => array(
        'title' => t('Terms'),
        'disable_hooks' => array(
          'field_attach_presave' => array(
            'geocoder',
          ),
        ),
      ),
      'nodes' => array(
        'title' => t('Nodes'),
      ),
    ),
    'migrations' => array(
      'GS_ec_terms' => array(
        'class_name' => 'GS_ec_terms',
        'group_name' => 'terms',
      ),
      'GS_ec_profiles' => array(
        'class_name' => 'GS_ec_profiles',
        'group_name' => 'nodes',
      ),
    ),
  );
  return $api;
}

class GS_ec_terms extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import early childhood center base records (taxonomy terms) from Great Start export.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'State of Michigan license number, minus letters',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    //$query = db_select('earlychild', 'ec')
    //           ->fields('ec');
    //$this->source = new MigrateSourceSQL($query);
    $this->source = new MigrateSourceCSV('/tmp/migrate_ec/esd-ec-gsexport.csv', array(), array('header_rows'=>1, 'embedded_newlines'=>FALSE));

    $this->destination = new MigrateDestinationTerm('ec');

    $this->addFieldMapping('name', 'Business Name');
    $this->addFieldMapping('field_address')->defaultValue('US');
    $this->addFieldMapping('field_address:name_line', 'Business Name');
    $this->addFieldMapping('field_address:locality', 'City');
    $this->addFieldMapping('field_address:administrative_area', 'State');
    $this->addFieldMapping('field_address:phone_number', 'Phone');
    $this->addFieldMapping('field_address:postal_code', 'Zip Code');
    $this->addFieldMapping('field_address:thoroughfare', 'Address');
    $this->addFieldMapping(NULL, 'Accepts Ages From');
    $this->addFieldMapping('field_age_from', 'AgeFromMonthified');
    $this->addFieldMapping(NULL, 'Accepts Ages To');
    $this->addFieldMapping('field_age_to', 'AgeToMonthified');
    $this->addFieldMapping('field_ec_license_type', 'License Type');
    $this->addFieldMapping('field_ec_license_type:create_term', TRUE);
    $this->addFieldMapping('field_ec_license_type:ignore_case', TRUE);
    $this->addFieldMapping('field_esd_ec_id', 'id');
    $this->addFieldMapping('field_licensed_date', 'Licensed/registered date');
    //$this->addFieldMapping('field_months_of_operation MonthsOfOperation
    $this->addFieldMapping('field_state_license_id', 'License Number');
  }

  public function prepareRow($row) {
    $age_from_matches = array();
    $age_to_matches = array();
    preg_match('/(\d*) years (\d*) months/', $row->{'Accepts Ages From'}, $age_from_matches);
    $row->AgeFromMonthified = (int) $age_from_matches[1] * 12 + (int) $age_from_matches[2];
    preg_match('/(\d*) years (\d*) months/', $row->{'Accepts Ages To'}, $age_to_matches);
    $row->AgeToMonthified = (int) $age_to_matches[1] * 12 + (int) $age_to_matches[2];
  }
}

class GS_ec_profiles extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Updates early childhood center profiles (nodes) from Great Start export.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'State of Michigan license number, minus letters',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    //$query = db_select('earlychild', 'ec')
    //           ->fields('ec');
    //$this->source = new MigrateSourceSQL($query);
    $this->source = new MigrateSourceCSV('/tmp/migrate_ec/esd-ec-gsexport.csv', array(), array('header_rows'=>1, 'embedded_newlines'=>FALSE));

    $this->destination = new MigrateDestinationNode('ec_profile');

    $this->addFieldMapping('title', 'Business Name');
    $this->addFieldMapping('field_esd_ec_id', 'id');
    //$this->addFieldMapping('field_gsc_provider_id GSCProviderID
    //$this->addFieldMapping('field_months_of_operation MonthsOfOperation
    $this->addFieldMapping(NULL, 'Preschool');
    $this->addFieldMapping(NULL, 'Head Start');
    $this->addFieldMapping(NULL, 'Early Head Start');
    $this->addFieldMapping(NULL, 'Great Start Readiness Program');
    $this->addFieldMapping(NULL, 'School Age ONLY');
    $this->addFieldMapping(NULL, 'Montessori');
    $this->addFieldMapping(NULL, 'Reggio Inspired');
    $this->addFieldMapping(NULL, 'Faith-based');
  }

  public function prepareRow($row) {
    
  }
}
