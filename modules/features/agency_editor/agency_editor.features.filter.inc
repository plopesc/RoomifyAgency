<?php
/**
 * @file
 * agency_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function agency_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Rich Text.
  $formats['rich_text'] = array(
    'format' => 'rich_text',
    'name' => 'Rich Text',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'assets_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
