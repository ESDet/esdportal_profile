<?php
/**
 * @file
 * Contains:
 *   Drupal\esdportal_api\EcDataUtils
 *
 */

namespace Drupal\esdportal_api;

class EcDataUtils {
  public static function getEcId($ec) {
    if(isset($ec->field_esd_ec_id['und']) && isset($ec->field_esd_ec_id['und'][0]) && isset($ec->field_esd_ec_id['und'][0]['value'])) {
      return $ec->field_esd_ec_id['und'][0]['value'];
    } else {
      return null;
    }
  }
}
