<?php
/**
 * @file
 * agency_review.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agency_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function agency_review_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function agency_review_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_pet().
 */
function agency_review_default_pet() {
  $items = array();
  $items['new_property_review'] = entity_import('pet', '{
    "name" : "new_property_review",
    "title" : "New Property Review",
    "subject" : "New Property Review",
    "mail_body" : "A new review has been submitted from [site:name].",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
