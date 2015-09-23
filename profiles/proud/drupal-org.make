api = "2"
core = "7.x"

; *********************************************************************************
; * Modules
; *********************************************************************************

projects[admin_menu][version] = "3.0-rc5"
projects[admin_menu][subdir] = "contrib"

projects[email_registration][version] = "1.2"
projects[email_registration][subdir] = "contrib"

projects[filter_perms][version] = "1.0"
projects[filter_perms][subdir] = "contrib"

projects[menu_trail_by_path][version] = "2.0"
projects[menu_trail_by_path][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][subdir] = "devel"

projects[features][version] = "2.6"
projects[features][subdir] = "contrib"

projects[email][version] = "1.3"
projects[email][subdir] = "contrib"

projects[link][version] = "1.3"
projects[link][subdir] = "contrib"

projects[field_collection][version] = "1.0-beta8"
projects[field_collection][subdir] = "contrib"

projects[entity][version] = "1.6"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[module_filter][version] = "2.0"
projects[module_filter][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[redirect][version] = "1.0-rc3"
projects[redirect][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.6"
projects[token][subdir] = "contrib"

projects[metatag][version] = "1.7"
projects[metatag][subdir] = "contrib"

projects[google_analytics][version] = "1.4"
projects[google_analytics][subdir] = "contrib"

projects[simplehtmldom][version] = "1.12"
projects[simplehtmldom][subdir] = "contrib"

projects[admin_views][version] = "1.5"
projects[admin_views][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[image_resize_filter][version] = "1.16"
projects[image_resize_filter][subdir] = "contrib"

projects[menu_block][version] = "2.7"
projects[menu_block][subdir] = "contrib"

projects[menu_trail_by_path][version] = "2.0"
projects[menu_trail_by_path][subdir] = "contrib"

projects[pathauto_persist][version] = "1.3"
projects[pathauto_persist][subdir] = "contrib"

projects[media_formatters][version] = "1.0-alpha2"
projects[media_formatters][subdir] = "contrib"

projects[angular_media][version] = "1.0-alpha1"
projects[angular_media][subdir] = "contrib"

projects[ckeditor][version] = "1.16"
projects[ckeditor][subdir] = "contrib"

projects[ckeditor_filter][version] = "1.0"
projects[ckeditor_filter][subdir] = "contrib"

projects[ckeditor_widgets][version] = "1.0-alpha3"
projects[ckeditor_widgets][subdir] = "contrib"

projects[file_entity][version] = "2.0-beta2"
projects[file_entity][subdir] = "contrib"

projects[media][version] = "2.0-beta1"
projects[media][subdir] = "contrib"

projects[creative_commons][version] = "1.2"
projects[creative_commons][subdir] = "contrib"

projects[jquery_update][version] = "2.6"
projects[jquery_update][subdir] = "contrib"

projects[panels_extra_styles][version] = 1.1
projects[panels_extra_styles][subdir] = contrib

projects[addthis][version] = "4.0-alpha6"
projects[addthis][subdir] = "contrib"

projects[gravatar][version] = "1.1"
projects[gravatar][subdir] = "contrib"

projects[uuid][version] = 1.0-alpha6
projects[uuid][subdir] = contrib

projects[views_bootstrap][version] = "3.1"
projects[views_bootstrap][subdir] = contrib

projects[apps][version] = "1.0"
projects[apps][subdir] = contrib

projects[ctools][version] = 1.9
projects[ctools][subdir] = contrib

projects[panels][version] = 3.5
projects[panels][subdir] = contrib

projects[panelizer][version] = 3.1
projects[panelizer][subdir] = contrib

projects[fieldable_panels_panes][version] = 1.7
projects[fieldable_panels_panes][subdir] = contrib

projects[views][version] = 3.11
projects[views][subdir] = contrib

projects[views_bulk_operations][version] = 3.3
projects[views_bulk_operations][subdir] = contrib

projects[features_override][version] = 2.0-rc2
projects[features_override][subdir] = contrib


; +++++ Modules Dev/specific revisions +++++
; @todo
; * Best practice is to point to specific git commits.
; * Have a note for each of these explaining the feature (with links) that requires -dev branch

; From Nov 24, 2014
; The official releases for this module are really old (2012)
projects[oembed][subdir] = "contrib"
projects[oembed][download][type] = "git"
projects[oembed][download][revision] = "1664b19"
projects[oembed][download][branch] = "7.x-1.x"

; From Mar 13 2015, last checked Sep 3 2015
; Sandbox module
projects[fontawesome_field][type] = module
projects[fontawesome_field][subdir] = "contrib"
projects[fontawesome_field][download][type] = git
projects[fontawesome_field][download][branch] = "7.x-1.x"
projects[fontawesome_field][download][url] = http://git.drupal.org/sandbox/chrisrikli/2376759.git
projects[fontawesome_field][download][revision] = 1e78ed0
projects[fontawesome_field][patch][2477887] = https://www.drupal.org/files/issues/fontawesome_field-add-color-icon-widget-field-formatter-1.patch

projects[socialfield_widgets][type] = module
projects[socialfield_widgets][subdir] = "contrib"
projects[socialfield_widgets][download][type] = git
projects[socialfield_widgets][download][branch] = "7.x-1.x"
projects[socialfield_widgets][download][url] = http://git.drupal.org/sandbox/jlyon/socialfield_widgets.git

projects[google_analytics_embed][type] = module
projects[google_analytics_embed][subdir] = "contrib"
projects[google_analytics_embed][download][type] = git
projects[google_analytics_embed][download][branch] = "7.x-1.x"
projects[google_analytics_embed][download][url] = http://git.drupal.org/sandbox/jlyon/2564675.git 

projects[bootstrap_fieldable_panel_panes][type] = module
projects[bootstrap_fieldable_panel_panes][subdir] = "contrib"
projects[bootstrap_fieldable_panel_panes][download][type] = git
projects[bootstrap_fieldable_panel_panes][download][branch] = "7.x-1.x"
projects[bootstrap_fieldable_panel_panes][download][url] = http://git.drupal.org/sandbox/jlyon/2564689.git


; *********************************************************************************
; * Themes
; *********************************************************************************

projects[radix][version] = "3.0-rc2"
projects[radix][subdir] = "contrib"

; @todo: updates pending
projects[minimalist_admin][version] = "1.0-alpha5"  
projects[minimalist_admin][subdir] = "contrib"


; *********************************************************************************
; * Libraries
; *********************************************************************************

; NOTE: These need to be listed in http://drupal.org/packaging-whitelist.

; *********************************************************************************
; * Patches
; *********************************************************************************

; Fix CKEditor call to jQuery.browser
; Latest: Sep 4 2015: Problem with media module? See http://drupal.org/node/2199995
projects[ckeditor][patch][2199995] = "http://drupal.org/files/issues/ckeditor-219995-jQuery_browser_test_deprecated-2.patch"


; last checked Sep 4 2015
;projects[fieldable_panels_panes][patch][2256503] = http://drupal.org/files/issues/fieldable_panels_panes-n2256503-12-backport-fpp15.patch
; last checked Sep 4 2015
;projects[fieldable_panels_panes][patch][2146479] = https://www.drupal.org/files/issues/fieldable_panels_panes_2146479_13.patch

; last checked Sep 4 2015
projects[views][patch][2037469] = http://drupal.org/files/views-exposed-sorts-2037469-1.patch

; Panelizer hasn't had official release since 2013. Both of these patches have been committed to -dev
projects[panelizer][patch][1623536] = http://drupal.org/files/issues/array-to-object-on-update-1623536-26.patch
projects[panelizer][patch][2416505] = http://drupal.org/files/issues/panelizer-search_api-2416505-3.patch
