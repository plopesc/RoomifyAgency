<?php
/**
 * @file
 * agency_editor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function agency_editor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'assets_wysiwyg_modes';
  $strongarm->value = array(
    'image' => array(
      'full' => 'full',
      'small' => 'small',
    ),
  );
  $export['assets_wysiwyg_modes'] = $strongarm;

  return $export;
}
