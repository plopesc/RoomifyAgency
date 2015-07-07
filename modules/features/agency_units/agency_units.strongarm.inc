<?php
/**
 * @file
 * agency_units.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function agency_units_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.9';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_units';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_units'] = $strongarm;

  return $export;
}
