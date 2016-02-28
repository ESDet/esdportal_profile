<?php

/**
 * @file
 * Generates serializers for Drupal Data module tables.
 *
 * Run with `drush scr generate_data_serializers.php` and copy `/tmp/*php` to
 * `src/Serializers`.
 */

use \Drupal\esdportal_api\EcDataUtils;

/*
 * Given a table name and its mysql primary key, generates a tobscure/json-api
 * serializer class.
 */


foreach (\Drupal\esdportal_api\EcDataUtils::getDataTablesWithBcodes() as $table) {
  $table_name = $table->name;
  $primary_key = $table->table_schema['primary key'][0];

  $camel_name = \Drupal\esdportal_api\EcDataUtils::underscoreToCamel($table_name);

  $contents = <<<EOF
<?php

/**
 * @file
 * Contains Drupal\\esdportal_api\\Serializers\\${camel_name}Serializer.
 *
 * Serializes ${table_name} records.
 */

namespace Drupal\\esdportal_api\\Serializers;

use Tobscure\\JsonApi\\SerializerAbstract;

/**
 * Serializes ${table_name} data records.
 */
class ${camel_name}Serializer extends SerializerAbstract {
  protected \$type = '${table_name}s';

  /**
   * Nothing special here, yet.
   */
  protected function attributes(\$row) {
    return \$row;
  }

  /**
   * Provides primary key as id.
   */
  protected function id(\$row) {
    return \$row->${primary_key};
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId(\$row) {
    return \$row->${primary_key};
  }
}

EOF;

  file_put_contents('/tmp/' . $camel_name . 'Serializer.php', $contents);
}
