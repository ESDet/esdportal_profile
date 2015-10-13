<?php
/**
 * @file
 * esdportal_e3_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function esdportal_e3_feature_default_rules_configuration() {
  $items = array();
  $items['rules_note_duration'] = entity_import('rules_config', '{ "rules_note_duration" : {
      "LABEL" : "note_duration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "esdportal_e3" ],
      "ON" : { "e3_note_insert" : [], "e3_note_update" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "e3-note" ], "field" : "field_time_of_observation" } },
        { "entity_has_field" : { "entity" : [ "e3-note" ], "field" : "field_observation_duration" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "duration",
              "value" : [ "e3-note:field-time-of-observation:duration" ]
            },
            "PROVIDE" : { "variable_added" : { "duration_seconds" : "Added variable duration" } }
          }
        },
        { "data_set" : {
            "data" : [ "e3-note:field-observation-duration" ],
            "value" : [ "duration-seconds" ]
          }
        }
      ]
    }
  }');
  return $items;
}
