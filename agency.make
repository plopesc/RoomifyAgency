; agency make file for d.o. usage
core = "7.x"
api = "2"

; Rooms Modules
projects[rooms][version] = "1.7"
projects[rooms][subdir] = "contrib"

projects[rooms_availability_reference_modal][type] = module
projects[rooms_availability_reference_modal][download][type] = "git"
projects[rooms_availability_reference_modal][download][url] = "https://github.com/BluesparkLabs/rooms_availability_reference_modal.git"
projects[rooms_availability_reference_modal][directory_name] = "rooms_availability_reference_modal"
projects[rooms_availability_reference_modal][subdir] = "contrib"

projects[rooms_channel_manager][type] = module
projects[rooms_channel_manager][download][type] = "git"
projects[rooms_channel_manager][download][url] = "https://github.com/Roomify/rooms-channel-manager.git"
projects[rooms_channel_manager][directory_name] = "rooms_channel_manager"
projects[rooms_channel_manager][subdir] = "contrib"

projects[rooms_commission_rates][type] = module
projects[rooms_commission_rates][download][type] = "git"
projects[rooms_commission_rates][download][url] = "https://www.github.com/Roomify/rooms_commission_rates.git"
projects[rooms_commission_rates][directory_name] = "rooms_commission_rates"
projects[rooms_commission_rates][subdir] = "contrib"

projects[rooms_notification][type] = module
projects[rooms_notification][download][type] = "git"
projects[rooms_notification][download][url] = "https://www.github.com/Roomify/rooms_notification.git"
projects[rooms_notification][directory_name] = "rooms_notification"
projects[rooms_notification][subdir] = "contrib"

projects[rooms_views][type] = module
projects[rooms_views][download][type] = "git"
projects[rooms_views][download][url] = "https://github.com/Roomify/rooms_views.git"
projects[rooms_views][download][branch] = "group_size_filter"
projects[rooms_views][directory_name] = "rooms_views"
projects[rooms_views][subdir] = "contrib"

projects[agency_availability_button][type] = module
projects[agency_availability_button][download][type] = "git"
projects[agency_availability_button][download][url] = "git@github.com:Roomify/agency_availability_button.git"
projects[agency_availability_button][branch] = "7.x-1.x"
projects[agency_availability_button][subdir] = "contrib"

projects[agency_blog][type] = module
projects[agency_blog][download][type] = "git"
projects[agency_blog][download][url] = "git@github.com:Roomify/agency_blog.git"
projects[agency_blog][branch] = "7.x-1.x"
projects[agency_blog][subdir] = "contrib"

projects[agency_contact_form][type] = module
projects[agency_contact_form][download][type] = "git"
projects[agency_contact_form][download][url] = "git@github.com:Roomify/agency_contact_form.git"
projects[agency_contact_form][branch] = "7.x-1.x"
projects[agency_contact_form][subdir] = "contrib"

projects[agency_editor][type] = module
projects[agency_editor][download][type] = "git"
projects[agency_editor][download][url] = "git@github.com:Roomify/agency_editor.git"
projects[agency_editor][branch] = "7.x-1.x"
projects[agency_editor][subdir] = "contrib"

projects[agency_features_views][type] = module
projects[agency_features_views][download][type] = "git"
projects[agency_features_views][download][url] = "git@github.com:Roomify/agency_features_views.git"
projects[agency_features_views][branch] = "7.x-1.x"
projects[agency_features_views][subdir] = "contrib"


; +++++ Modules +++++

projects[addressfield][version] = "1.1"
projects[addressfield][subdir] = "contrib"

projects[asset][version] = "1.x-dev"
projects[asset][subdir] = "patched"
projects[asset][patch][] = "https://www.drupal.org/files/issues/ckeditor-4.3.1-asset-plugin-2419057-3.patch"

projects[bean][version] = "1.9"
projects[bean][subdir] = "contrib"

projects[chosen][version] = "2.0-beta4"
projects[chosen][subdir] = "contrib"

projects[ckeditor][version] = "1.16"
projects[ckeditor][subdir] = "contrib"

projects[commerce][version] = "1.11"
projects[commerce][subdir] = "contrib"

projects[commerce_cart_expiration][version] = "1.2"
projects[commerce_cart_expiration][subdir] = "contrib"

projects[composer_manager][version] = "1.7"
projects[composer_manager][subdir] = "contrib"

projects[ctools][version] = "1.7"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.8"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[email][version] = "1.3"
projects[email][subdir] = "contrib"

projects[entity][version] = "1.6"
projects[entity][subdir] = "contrib"

projects[entity_rules][version] = "1.0-alpha4"
projects[entity_rules][subdir] = "contrib"

projects[entity2text][version] = "1.0-alpha2"
projects[entity2text][subdir] = "contrib"

projects[entityform][version] = "2.0-rc1"
projects[entityform][subdir] = "contrib"

projects[entityreference_prepopulate][version] = "1.5"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[environment_indicator][version] = "2.7"
projects[environment_indicator][subdir] = "contrib"

projects[facetapi][version] = "1.5"
projects[facetapi][subdir] = "contrib"

projects[features][version] = "2.6"
projects[features][subdir] = "contrib"

projects[field_group][version] = "1.4"
projects[field_group][subdir] = "contrib"

projects[flag][version] = "3.6"
projects[flag][subdir] = "contrib"

projects[fivestar][version] = "2.1"
projects[fivestar][subdir] = "contrib"

projects[filefield_sources][version] = "1.9"
projects[filefield_sources][subdir] = "contrib"

projects[filefield_sources_plupload][version] = "1.1"
projects[filefield_sources_plupload][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[fontyourface][version] = "2.8"
projects[fontyourface][subdir] = "contrib"

projects[geofield][version] = "2.3"
projects[geofield][subdir] = "contrib"

projects[geofield_gmap][version] = "2.x-dev"
projects[geofield_gmap][subdir] = "contrib"

projects[geophp][version] = "1.7"
projects[geophp][subdir] = "contrib"

projects[getdirections][version] = "3.2"
projects[getdirections][subdir] = "contrib"

projects[google_analytics][version] = "2.1"
projects[google_analytics][subdir] = "contrib"

projects[jquery_update][version] = "2.6"
projects[jquery_update][subdir] = "contrib"

projects[leaflet][version] = "1.1"
projects[leaflet][subdir] = "patched"
; https://www.drupal.org/node/2466365
projects[leaflet][patch][] = "https://www.drupal.org/files/issues/leaflet-entity_type_not_detected-2466365-1.patch"

projects[leaflet_more_maps][version] = "1.12"
projects[leaflet_more_maps][subdir] = "contrib"

projects[less][version] = "4.0"
projects[less][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1.3"
projects[link][subdir] = "contrib"

projects[logintoboggan][version] = "1.5"
projects[logintoboggan][subdir] = "contrib"

projects[mailchimp][version] = "3.4"
projects[mailchimp][subdir] = "contrib"

projects[manualcrop][version] = "1.4"
projects[manualcrop][subdir] = "contrib"

projects[masonry][version] = "3.0-beta1"
projects[masonry][subdir] = "contrib"

projects[masonry_views][version] = "3.0-beta1"
projects[masonry_views][subdir] = "contrib"

projects[metatag][version] = "1.6"
projects[metatag][subdir] = "contrib"

projects[navbar][version] = "1.5"
projects[navbar][subdir] = "contrib"

projects[nivo_formatter][version] = "1.x-dev"
projects[nivo_formatter][subdir] = "contrib"

projects[panels][version] = "3.5"
projects[panels][subdir] = "contrib"

projects[panels_everywhere][version] = "1.0-rc2"
projects[panels_everywhere][subdir] = "contrib"

projects[panels_bootstrap_layouts][version] = "3.0"
projects[panels_bootstrap_layouts][subdir] = "contrib"

projects[panels_tabs][version] = "2.x-dev"
projects[panels_tabs][subdir] = "contrib"

projects[pet][type] = module
projects[pet][version] = 1.0-rc1
projects[pet][subdir] = "contrib"
projects[pet][patch][] = "https://www.drupal.org/files/pet-add-rules-state-2092195-1.patch"

projects[plupload][version] = "1.7"
projects[plupload][subdir] = "patched"
; https://www.drupal.org/node/2106583
projects[plupload][patch][] = "https://www.drupal.org/files/plupload-cannot-upload-with-not-php-stream-2106583-5.patch"

projects[pm_existing_pages][version] = "1.4"
projects[pm_existing_pages][subdir] = "contrib"

projects[profiler_builder][version] = "1.2"
projects[profiler_builder][subdir] = "contrib"

projects[publishcontent][version] = "1.3"
projects[publishcontent][subdir] = "contrib"

projects[rules][version] = "2.9"
projects[rules][subdir] = "contrib"

projects[rules_conditional][version] = "1.0-beta2"
projects[rules_conditional][subdir] = "contrib"

projects[rrssb][version] = "1.x-dev"
projects[rrssb][subdir] = "contrib"
projects[rrssb][patch][] = "https://www.drupal.org/files/issues/rrssb-fix_unsupported_operands-2541648-1.patch"

projects[search_api][version] = "1.15"
projects[search_api][subdir] = "contrib"

projects[search_api_db][version] = "1.4"
projects[search_api_db][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.6"
projects[token][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha6"
projects[uuid][subdir] = "contrib"

projects[variable][version] = "2.5"
projects[variable][subdir] = "contrib"

projects[views][version] = "3.11"
projects[views][subdir] = "contrib"

projects[views_bootstrap][version] = "3.1"
projects[views_bootstrap][subdir] = "contrib"

projects[views_load_more][version] = "1.5"
projects[views_load_more][subdir] = "contrib"

projects[views_php][version] = "1.0-alpha1"
projects[views_php][subdir] = "contrib"

projects[views_nivo_slider][version] = "3.0-alpha1"
projects[views_nivo_slider][subdir] = "contrib"

projects[votingapi][version] = "2.12"
projects[votingapi][subdir] = "contrib"

projects[xautoload][version] = "5.2"
projects[xautoload][subdir] = "contrib"

projects[xmlsitemap][version] = "2.2"
projects[xmlsitemap][subdir] = "contrib"

; +++++ Themes +++++

; bootstrap
projects[bootstrap][type] = "theme"
projects[bootstrap][version] = "3.x-dev"
projects[bootstrap][subdir] = "contrib"

; omega
projects[omega][type] = "theme"
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"

; omega_kickstart
projects[omega_kickstart][type] = "theme"
projects[omega_kickstart][version] = "3.4"
projects[omega_kickstart][subdir] = "contrib"

; shiny
projects[shiny][type] = "theme"
projects[shiny][version] = "1.6"
projects[shiny][subdir] = "contrib"

; +++++ Libraries +++++

; backbone
libraries[backbone][directory_name] = "backbone"
libraries[backbone][type] = "library"
libraries[backbone][destination] = "libraries"
libraries[backbone][download][type] = "get"
libraries[backbone][download][url] = "https://github.com/documentcloud/backbone/archive/1.0.0.zip"

; chosen
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"
libraries[chosen][destination] = "libraries"
libraries[chosen][download][type] = "get"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/1.4.2/chosen_v1.4.2.zip"

; ckeditor with plugins for asset module
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://ckeditor.com/online-builder/releases/minified/4.5.1/flat/0.9/ckeditor_4.5.1_991f0249c798.zip"

; imagesloaded
libraries[imagesloaded][directory_name] = "imagesloaded"
libraries[imagesloaded][type] = "library"
libraries[imagesloaded][destination] = "libraries"
libraries[imagesloaded][download][type] = "get"
libraries[imagesloaded][download][url] = "http://imagesloaded.desandro.com/imagesloaded.pkgd.min.js"

; leaflet
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][type] = "library"
libraries[leaflet][destination] = "libraries"
libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "https://github.com/Leaflet/Leaflet/archive/v0.7.3.zip"

; less.php
libraries[less.php][directory_name] = "less.php"
libraries[less.php][type] = "library"
libraries[less.php][destination] = "libraries"
libraries[less.php][download][type] = "get"
libraries[less.php][download][url] = "https://github.com/oyejorge/less.php/releases/download/v1.7.0.4/less.php_1.7.0.4.zip"

; mailchimp
libraries[mailchimp][directory_name] = "mailchimp"
libraries[mailchimp][type] = "library"
libraries[mailchimp][destination] = "libraries"
libraries[mailchimp][download][type] = "get"
libraries[mailchimp][download][url] = "https://bitbucket.org/mailchimp/mailchimp-api-php/get/2.0.6.zip"

; masonry
libraries[masonry][directory_name] = "masonry"
libraries[masonry][type] = "library"
libraries[masonry][destination] = "libraries"
libraries[masonry][download][type] = "get"
libraries[masonry][download][url] = "http://cdnjs.cloudflare.com/ajax/libs/masonry/3.3.1/masonry.pkgd.min.js"

; modernizr
libraries[modernizr][directory_name] = "modernizr"
libraries[modernizr][type] = "library"
libraries[modernizr][destination] = "libraries"
libraries[modernizr][download][type] = "get"
libraries[modernizr][download][url] = "https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip"

; moment
libraries[moment][directory_name] = "moment"
libraries[moment][type] = "library"
libraries[moment][destination] = "libraries"
libraries[moment][download][type] = "get"
libraries[moment][download][url] = "http://momentjs.com/downloads/moment.min.js"

; nivo-slider
libraries[nivo-slider][directory_name] = "nivo-slider"
libraries[nivo-slider][type] = "library"
libraries[nivo-slider][destination] = "libraries"
libraries[nivo-slider][download][type] = "get"
libraries[nivo-slider][download][url] = "https://github.com/gilbitron/Nivo-Slider/archive/3.2.zip"

; plupload
libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "library"
libraries[plupload][destination] = "libraries"
libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
libraries[plupload][patch][] = "https://www.drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-21.patch"

; rooms_fullcalendar
libraries[rooms_fullcalendar][directory_name] = "rooms_fullcalendar"
libraries[rooms_fullcalendar][type] = "library"
libraries[rooms_fullcalendar][destination] = "libraries"
libraries[rooms_fullcalendar][download][type] = "get"
libraries[rooms_fullcalendar][download][url] = "http://www.drupalrooms.com/sites/default/files/rooms_fullcalendar-2.1.1.zip"

; rrssb
libraries[rrssb][directory_name] = "rrssb"
libraries[rrssb][type] = "library"
libraries[rrssb][destination] = "libraries"
libraries[rrssb][download][type] = "get"
libraries[rrssb][download][url] = "https://github.com/kni-labs/rrssb/archive/1.8.1.zip"

; underscore
libraries[underscore][directory_name] = "underscore"
libraries[underscore][type] = "library"
libraries[underscore][destination] = "libraries"
libraries[underscore][download][type] = "get"
libraries[underscore][download][url] = "https://github.com/documentcloud/underscore/archive/1.6.0.zip"
