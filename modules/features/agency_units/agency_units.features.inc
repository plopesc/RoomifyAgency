<?php
/**
 * @file
 * agency_units.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agency_units_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function agency_units_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function agency_units_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite".
  $flags['favorite'] = array(
    'entity_type' => 'rooms_unit',
    'title' => 'Favorite',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Save this property',
    'flag_long' => '',
    'flag_message' => 'Saved!',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => 'Removed!',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'agency_units',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_rooms_unit_type().
 */
function agency_units_default_rooms_unit_type() {
  $items = array();
  $items['bnb'] = entity_import('rooms_unit_type', '{
    "type" : "bnb",
    "label" : "BnB",
    "weight" : "0",
    "data" : {
      "base_price" : "100",
      "min_sleeps" : "1",
      "max_sleeps" : "4",
      "min_children" : "",
      "max_children" : "",
      "rooms_description_source" : ""
    },
    "rooms_booking_unit_options" : [],
    "rdf_mapping" : []
  }');
  return $items;
}
