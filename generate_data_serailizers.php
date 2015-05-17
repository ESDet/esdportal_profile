<?php

use \Drupal\esdportal_api\EcDataUtils;

function generate_data_serializer($table_name, $primary_key) {

$contents = <<<EOF
<?php

/**
 * @file
 * Contains Drupal\\esdportal_api\\Serializers\\${table_name}Serializer.
 *
 * Serializes ${table_name} records.
 */

namespace Drupal\\esdportal_api\\Serializers;

use Tobscure\\JsonApi\\SerializerAbstract;

class ${table_name}Serializer extends SerializerAbstract {
  protected \$type = '${table_name}s';

  protected function attributes(\$row) {
    return \$row;
  }

  protected function id(\$row) {
    return \$row->${primary_key};
  }
  protected function getId(\$row) {
    return \$row->${primary_key};
  }
}

EOF;

file_put_contents('/tmp/' . $table_name . 'Serializer.php', $contents);

}


foreach (\Drupal\esdportal_api\EcDataUtils::getDataTablesWithBcodes() as $table) {
  generate_data_serializer($table->name, $table->table_schema['primary key'][0]);
}
