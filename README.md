portal.excellentschoolsdetroit.org install profile
==================================================

Use this Drupal Install Profile to build portal.excellentschoolsdetroit.org.

About
-----

This install profile builds a Drupal 7 website that provides Excellent Schools Detroit with data warehousing for its staff and constituents, as well as a publicly accessible data API.

Build
-----

```shell
drush make --working-copy https://raw.githubusercontent.com/esdet/esdportal_profile/master/notplatform.make DEST_DIR
cd DEST_DIR
mysql -uroot -e 'create database portal_dev'
drush site-install esdportal_profile  --account-name=admin --account-pass=admin --db-url=mysql://root@localhost/portal_dev --yes
(cd profiles/esdportal_profile/themes/esd/; compass compile)
drush cc all
drush runserver --server=builtin 8080
```

Testing
-------

Acceptance tests for this project are implemented with [Behat](http://behat.org/)
and use [Mink](http://mink.behat.org/) for browser interactions.

### Test environment

To run the acceptance tests, you'll need to install a few libraries and PHP
packages.

Install the PHP curl extension.  On Ubuntu, this looks like:

```
sudo apt-get install curl libcurl3 libcurl3-dev php5-curl
```

Change directory to the tests subdirectory of this project:

```
cd $PATH_TO_INSTALL_PROFILE/tests
```

Install [Composer](http://getcomposer.org/):

```
curl -s https://getcomposer.org/installer | php
```

Install testing dependencies using Composer:

```
php composer.phar install
```

While Mink supports a number of different browser drivers, Drupal Behat
Extension, which provides some batteries for using Behat with a
Drupal site, requires the Selenium2 driver. We use the PhantomJS because
it has a WebDriver interface compatible with the Selenium2 driver,
it's fast, and it's headless, allowing us to run tests on external machines
or in a CI environment like Travis.

Install PhantomJS.  You can download and unpack manually from
http://phantomjs.org/download.html, or use npm.

```
npm install -g phantomjs
```

### Running tests

Run the PhantomJS WebDriver

```
phantomjs --webdriver=8643 &

```

Run Behat

```
./bin/behat features/
```

Migrating from the old portal
-----------------------------

The install profile will download the migrate_esdportal module, which includes a preconfigured migrate routine for school taxonomy terms via CSV. Enable this module so you can run the Schools data import.

To set up the Schools migrate importer source, place the schools CSV file somewhere reachable by your PHP webserver process, and modify [this line](https://github.com/bnchdrff/migrate_esdportal/blob/7.x-1.x/migrate_esdportal.migrate.inc#L45) with the correct path.

To set up the d2d migrate importer source, create a new database in the MySQL server and dump in an export of the live portal db.

The migrate_d2d imports for user and school_profile nodes need to be manually configured at admin/content/migrate/new/migrated2dwizard.

After setting up the sources for schools terms CSV and the migrate_d2d database and field mappings, run the imports like this:

```shell
drush mreg
drush mi Schools
drush mi --group=ExcellentSchoolsDetroitPortal # name of the d2d group
```

When the import is complete, use views_bulk_operations to run the following PHP snippets on all school_profile nodes:

```php
$query = db_select('taxonomy_term_data', 't');
$query->fields('t',array('tid'));
$query->condition('name', $entity->title, '=');
$school_tid = $query->execute()->fetchField();
$entity->field_school['und'][0]['tid'] = $school_tid;
node_save($entity);
```

For data sources, see [this Work Dept internal issue](https://pm.theworkdept.com/issues/3057).

Credits
-------

* Benjamin Chodoroff, @bnchdrff
* Geoff Hing, @ghing

License
-------

Copyright 2013, Benjamin Chodoroff. This software is distributed under the terms of the GNU General Public License.
