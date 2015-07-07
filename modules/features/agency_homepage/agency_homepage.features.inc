<?php
/**
 * @file
 * agency_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agency_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function agency_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function agency_homepage_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured".
  $flags['featured'] = array(
    'entity_type' => 'rooms_unit',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Feature this property on the home page',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove this property from the home page',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'agency_homepage',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_search_api_index().
 */
function agency_homepage_default_search_api_index() {
  $items = array();
  $items['units'] = entity_import('search_api_index', '{
    "name" : "Units",
    "machine_name" : "units",
    "description" : null,
    "server" : "db",
    "item_type" : "rooms_unit",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "base_price" : { "type" : "decimal" },
        "field_area" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_location:geom" : { "type" : "text" },
        "field_location:latlon" : { "type" : "string" },
        "field_property_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_property_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "language" : { "type" : "text" },
        "max_sleeps" : { "type" : "integer" },
        "min_sleeps" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "uid" : { "type" : "integer" },
        "unit_id" : { "type" : "integer" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "language" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "language" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "language" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "language" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function agency_homepage_default_search_api_server() {
  $items = array();
  $items['db'] = entity_import('search_api_server', '{
    "name" : "DB",
    "machine_name" : "db",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "partial_matches" : 0,
      "indexes" : {
        "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "comment_count" : {
            "table" : "search_api_db_default_node_index",
            "column" : "comment_count",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "units" : {
          "unit_id" : {
            "table" : "search_api_db_units",
            "column" : "unit_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_units",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "language" : { "table" : "search_api_db_units_text", "type" : "text", "boost" : "1.0" },
          "base_price" : {
            "table" : "search_api_db_units",
            "column" : "base_price",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "min_sleeps" : {
            "table" : "search_api_db_units",
            "column" : "min_sleeps",
            "type" : "integer",
            "boost" : "1.0"
          },
          "max_sleeps" : {
            "table" : "search_api_db_units",
            "column" : "max_sleeps",
            "type" : "integer",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_units",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "uid" : {
            "table" : "search_api_db_units",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_units",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_area" : {
            "table" : "search_api_db_units",
            "column" : "field_area",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_property_type" : {
            "table" : "search_api_db_units",
            "column" : "field_property_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_units",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_location:geom" : { "table" : "search_api_db_units_text", "type" : "text", "boost" : "1.0" },
          "field_location:latlon" : {
            "table" : "search_api_db_units",
            "column" : "field_location_latlon",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_property_image:file" : {
            "table" : "search_api_db_units",
            "column" : "field_property_image_file",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
