core = 7.x

api = 2

projects[drupal][type] = "core"
projects[drupal][version] = "7.39"
projects[drupal][patch][installredirect][url] = "https://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch"
projects[drupal][patch][installredirect][md5] = "f950215a38830a0ce537b78b46a2d151"
projects[drupal][patch][tableheaders][url] = "https://drupal.org/files/2097081-fix-sticky-header-column-width-7.x-6.patch"
projects[drupal][patch][tableheaders][md5] = "df41415bf45413a51d618946f0fb1e6b"

projects[platform][version] = 1.3
projects[registry_rebuild][version] = 2.2

projects[composer][type] = "module"
projects[composer][subdir] = "contrib"
projects[composer][download][type] = "git"
projects[composer][download][url] = "git://git.drupal.org/project/composer.git"
projects[composer][download][branch] = "8.x-1.x"

projects[esdportal_dash][type] = "module"
projects[esdportal_dash][subdir] = "custom"
projects[esdportal_dash][download][type] = "git"
projects[esdportal_dash][download][url] = "https://github.com/ESDet/esdportal_dash.git"
projects[esdportal_dash][download][branch] = "7.x-1.x"

projects[esdportal_e3][type] = "module"
projects[esdportal_e3][subdir] = "custom"
projects[esdportal_e3][download][type] = "git"
projects[esdportal_e3][download][url] = "https://github.com/ESDet/esdportal_e3.git"
projects[esdportal_e3][download][revision] = "cac5c524dc0ca92baac1709d50642f528fcbc12f"

projects[esdportal_ecsitevisit_webform_options][type] = "module"
projects[esdportal_ecsitevisit_webform_options][subdir] = "custom"
projects[esdportal_ecsitevisit_webform_options][download][type] = "git"
projects[esdportal_ecsitevisit_webform_options][download][url] = "https://github.com/ESDet/esdportal_ecsitevisit_webform_options.git"
projects[esdportal_ecsitevisit_webform_options][download][branch] = "7.x-1.x"

projects[esdportal_scoresbybcode][type] = "module"
projects[esdportal_scoresbybcode][subdir] = "custom"
projects[esdportal_scoresbybcode][download][type] = "git"
projects[esdportal_scoresbybcode][download][url] = "https://github.com/ESDet/esdportal_scoresbybcode.git"
projects[esdportal_scoresbybcode][download][branch] = "7.x-1.x"

projects[esdportal_str][type] = "module"
projects[esdportal_str][subdir] = "features"
projects[esdportal_str][download][type] = "git"
projects[esdportal_str][download][url] = "https://github.com/ESDet/esdportal_str.git"
projects[esdportal_str][download][revision] = "ee6ac1dc141f928f4ab5faace153ea9f69676c36"

projects[esdportal_api][type] = "module"
projects[esdportal_api][subdir] = "custom"
projects[esdportal_api][download][type] = "git"
projects[esdportal_api][download][url] = "https://github.com/ESDet/esdportal_api.git"
projects[esdportal_api][download][revision] = "0defc70b5fc6f3bd0964cb4f8515fb712bdb66f6"

projects[migrate_ec][type] = "module"
projects[migrate_ec][type] = "module"
projects[migrate_ec][subdir] = "custom"
projects[migrate_ec][download][type] = "git"
projects[migrate_ec][download][url] = "https://github.com/ESDet/migrate_ec.git"
projects[migrate_ec][download][revision] = "57e5bd503d131b83ebe65409ff9776ee113c1196"

projects[migrate_esdportal][type] = "module"
projects[migrate_esdportal][subdir] = "custom"
projects[migrate_esdportal][download][type] = "git"
projects[migrate_esdportal][download][url] = "https://github.com/ESDet/migrate_esdportal.git"
projects[migrate_esdportal][download][branch] = "7.x-1.x"

projects[acl][subdir] = "contrib"
projects[acl][version] = "1.0"

projects[acl_views][type] = "module"
projects[acl_views][subdir] = "custom"
projects[acl_views][download][type] = "git"
projects[acl_views][download][url] = "https://github.com/bnchdrff/acl_views.git"
projects[acl_views][download][branch] = "7.x-1.x"

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.1"

projects[charts][subdir] = "contrib"
projects[charts][version] = "2.0-rc1"

projects[context][subdir] = "contrib"
projects[context][version] = "3.1"

projects[composer_manager][subdir] = "contrib"
projects[composer_manager][version] = "1.7"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.3"

projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.0-beta2"

projects[node_clone][subdir] = "contrib"
projects[node_clone][version] = "1.0-rc1"

projects[content_access][subdir] = "contrib"
projects[content_access][version] = "1.2-beta2"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.2"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[extlink][subdir] = "contrib"
projects[extlink][version] = "1.12"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0-rc1"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha8"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.3"

projects[geocoder][subdir] = "contrib"
projects[geocoder][type] = "module"
projects[geocoder][download][type] = "git"
projects[geocoder][download][url] = "git://git.drupal.org/project/geocoder.git"
projects[geocoder][download][revision] = "7d9d3ddcc07a1403f547847fe02a67e32579b672"
projects[geocoder][patch][term_backfill][url] = "https://www.drupal.org/files/geocoder-backfill-entities-1451942-40.patch"
projects[geocoder][patch][term_backfill][md5] = "b9766fbd622b6870dc6386422f6d0633"

projects[geofield][subdir] = "contrib"
projects[geofield][version] = "2.3"

projects[geophp][type] = "module"
projects[geophp][subdir] = "contrib"
projects[geophp][download][type] = "git"
projects[geophp][download][url] = "git://git.drupal.org/project/geophp.git"
projects[geophp][download][revision] = "2777c5ebc953841dea71fba6b91ff388499fc59e"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.3"

projects[hidden_captcha][subdir] = "contrib"
projects[hidden_captcha][version] = "1.0"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.10"

projects[imce][subdir] = "contrib"
projects[imce][version] = "1.7"

projects[imce_wysiwyg][subdir] = "contrib"
projects[imce_wysiwyg][version] = "1.0"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"

projects[link][subdir] = "contrib"
projects[link][version] = "1.1"

projects[location][subdir] = "contrib"
projects[location][version] = "3.0-rc1"

projects[location_feeds][subdir] = "contrib"
projects[location_feeds][version] = "1.6"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.3"

projects[loadtermnames][type] = "module"
projects[loadtermnames][subdir] = "contrib"
projects[loadtermnames][download][type] = "git"
projects[loadtermnames][download][url] = "https://github.com/bnchdrff/loadtermnames"
projects[loadtermnames][download][branch] = "7.x-1.x"

projects[mailsystem][subdir] = "contrib"
projects[mailsystem][version] = "2.34"

projects[mimemail][subdir] = "contrib"
projects[mimemail][version] = "1.0-alpha2"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[select_or_other][subdir] = "contrib"
projects[select_or_other][version] = "2.22"

projects[services][type] = "module"
projects[services][subdir] = "contrib"
projects[services][download][type] = "git"
projects[services][download][url] = "https://github.com/bnchdrff/esdet-services.git"
projects[services][download][revision] = "4f6b16225ab467c4e06ec1ccbe17a3285c0d0b10"

projects[services_views][subdir] = "contrib"
projects[services_views][version] = "1.0-beta2"

projects[services_documentation][type] = "module"
projects[services_documentation][subdir] = "contrib"
projects[services_documentation][download][type] = "git"
projects[services_documentation][download][url] = "git://git.drupal.org/project/services_documentation.git"
projects[services_documentation][download][branch] = "7.x-1.x"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[styleguide][subdir] = "contrib"
projects[styleguide][version] = "1.1"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[taxonomy_revision][subdir] = "contrib"
projects[taxonomy_revision][version] = "1.0"

projects[variable][subdir] = "contrib"
projects[variable][version] = "2.4"

projects[video_embed_field][subdir] = "contrib"
projects[video_embed_field][version] = "2.0-beta5"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.1"

projects[views_data_export][subdir] = "contrib"
projects[views_data_export][version] = "3.0-beta6"

projects[views_date_format_sql][subdir] = "contrib"
projects[views_date_format_sql][version] = "3.1"

projects[webform][subdir] = "contrib"
projects[webform][version] = "4.0-beta1"

projects[webform_invitation][subdir] = "contrib"
projects[webform_invitation][version] = "2.3"

projects[workspace][subdir] = "contrib"
projects[workspace][version] = "1.x-dev"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.2"

projects[xautoload][subdir] = "contrib"
projects[xautoload][version] = "5.1"

; Modules
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"
projects[addressfield][download][type] = "git"
projects[addressfield][download][url] = "git://git.drupal.org/project/addressfield.git"
projects[addressfield][download][branch] = "7.x-1.x"

projects[addressfield_phone][type] = "module"
projects[addressfield_phone][subdir] = "contrib"
projects[addressfield_phone][download][type] = "git"
projects[addressfield_phone][download][url] = "git://git.drupal.org/project/addressfield_phone.git"
;projects[addressfield_phone][download][branch] = "7.x-1.x"
projects[addressfield_phone][download][revision] = "8be46013083b78915339e3357554ab891174cdf0"

projects[data][type] = "module"
projects[data][subdir] = "contrib"
projects[data][download][type] = "git"
projects[data][download][url] = "git://git.drupal.org/project/data.git"
projects[data][download][branch] = "7.x-1.x"

projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[date][download][type] = "git"
projects[date][download][url] = "git://git.drupal.org/project/date.git"
projects[date][download][branch] = "7.x-2.x"

projects[date_restrictions][type] = "module"
projects[date_restrictions][subdir] = "contrib"
projects[date_restrictions][download][type] = "git"
projects[date_restrictions][download][url] = "git://git.drupal.org/project/date_restrictions.git"
projects[date_restrictions][download][branch] = "7.x-1.x"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[devel][download][type] = "git"
projects[devel][download][url] = "git://git.drupal.org/project/devel.git"
projects[devel][download][branch] = "7.x-1.x"

projects[entity_translation][type] = "module"
projects[entity_translation][subdir] = "contrib"
projects[entity_translation][download][type] = "git"
projects[entity_translation][download][url] = "git://git.drupal.org/project/entity_translation.git"
projects[entity_translation][download][branch] = "7.x-1.x"

projects[editablefields][type] = "module"
projects[editablefields][subdir] = "contrib"
projects[editablefields][download][type] = "git"
projects[editablefields][download][url] = "git://git.drupal.org/project/editablefields.git"
projects[editablefields][download][branch] = "7.x-1.x"

projects[l10n_update][type] = "module"
projects[l10n_update][subdir] = "contrib"
projects[l10n_update][download][type] = "git"
projects[l10n_update][download][url] = "git://git.drupal.org/project/l10n_update.git"
projects[l10n_update][download][branch] = "7.x-2.x"

projects[location][type] = "module"
projects[location][subdir] = "contrib"
projects[location][download][type] = "git"
projects[location][download][url] = "git://git.drupal.org/project/location.git"
projects[location][download][branch] = "7.x-3.x"

projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"
projects[migrate][download][type] = "git"
projects[migrate][download][url] = "git://git.drupal.org/project/migrate.git"
;projects[migrate][download][branch] = "7.x-2.x"
projects[migrate][download][revision] = "aab31f3af8c44b37b5355bfba4732eb87b414269"

projects[migrate_d2d][type] = "module"
projects[migrate_d2d][subdir] = "contrib"
projects[migrate_d2d][download][type] = "git"
projects[migrate_d2d][download][url] = "git://git.drupal.org/project/migrate_d2d.git"
;projects[migrate_d2d][download][branch] = "7.x-2.x"
projects[migrate_d2d][download][revision] = "494211f6d4ffb492c828c3b19ed7f57b30d8bf0c"

projects[schema][type] = "module"
projects[schema][subdir] = "contrib"
projects[schema][download][type] = "git"
projects[schema][download][url] = "git://git.drupal.org/project/schema.git"
projects[schema][download][branch] = "7.x-1.x"

projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"
projects[uuid][download][type] = "git"
projects[uuid][download][url] = "git://git.drupal.org/project/uuid.git"
projects[uuid][download][revision] = "4bbf92d8c07485492c0f1065cb3647db492e1029"

projects[uuid_features][type] = "module"
projects[uuid_features][subdir] = "contrib"
projects[uuid_features][download][type] = "git"
projects[uuid_features][download][url] = "git://git.drupal.org/project/uuid_features.git"
projects[uuid_features][download][revision] = "f88f1035b28c1d7e4acdfb87b563b943c0c3d911"

projects[webform_localization][type] = "module"
projects[webform_localization][subdir] = "contrib"
projects[webform_localization][download][type] = "git"
projects[webform_localization][download][url] = "git://git.drupal.org/project/webform_localization.git"
projects[webform_localization][download][branch] = "7.x-4.x"
projects[webform_localization][patch][certain_fields_unfiltered][url] = "https://drupal.org/files/issues/certain_fields_unfiltered-1796748-5.patch"
projects[webform_localization][patch][certain_fields_unfiltered][md5] = "a4040dbdd34e3d3e256fa588b8ab38ed"

projects[webform_term_opts][type] = "module"
projects[webform_term_opts][subdir] = "contrib"
projects[webform_term_opts][download][type] = "git"
projects[webform_term_opts][download][url] = "git://git.drupal.org/project/webform_term_opts.git"
projects[webform_term_opts][download][branch] = "7.x-1.x"
projects[webform_term_opts][patch][relatable_tid][url] = "https://drupal.org/files/issues/webform_term_opts-relatable_tid-1621068-4.patch"
projects[webform_term_opts][patch][relatable_tid][md5] = "fbf90c283fe9e02116093b6d42df3071"

; Themes
projects[esd][type] = "theme"
projects[esd][download][type] = "git"
projects[esd][download][url] = "https://github.com/ESDet/esd.git"
projects[esd][download][revision] = "d05cb92635660b24f474391dea8d45b4ee1e568a"

projects[omega][type] = "theme"
projects[omega][download][type] = "git"
projects[omega][download][url] = "git://git.drupal.org/project/omega.git"
;projects[omega][download][branch] = "7.x-4.x"
projects[omega][download][revision] = "71d02c9f0d0fd0a251f648ffbb29b23bee1967ce"

; Libraries
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js"
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"

libraries[jquery.easing][download][type] = "get"
libraries[jquery.easing][download][url] = "http://blogger-hacks-all.googlecode.com/files/jquery.easing-1.3.min.js"
libraries[jquery.easing][directory_name] = "jquery.easing"
libraries[jquery.easing][type] = "library"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.2.1/ckeditor_3.2.1.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

libraries[jquery.domwindow][download][type] = "get"
libraries[jquery.domwindow][download][url] = "http://swip.codylindley.com/jquery.DOMWindow.js"
libraries[jquery.domwindow][directory_name] = "jquery.domwindow"
libraries[jquery.domwindow][type] = "library"
