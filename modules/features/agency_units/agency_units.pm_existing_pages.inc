<?php
/**
 * @file
 * agency_units.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function agency_units_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'units';
  $pm_existing_page->label = 'Units';
  $pm_existing_page->context = 'entity|rooms_unit|unit_id';
  $pm_existing_page->paths = 'unit/%rooms_unit';
  $export['units'] = $pm_existing_page;

  return $export;
}
