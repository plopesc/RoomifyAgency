<?php
/**
 * @file
 * agency_system.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function agency_system_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'development';
  $environment->name = 'Development';
  $environment->regexurl = 'master-eclxkq4u24ppu.us.platform.sh';
  $environment->settings = array(
    'color' => '#29d418',
    'text_color' => '#000000',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['development'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local';
  $environment->name = 'Local';
  $environment->regexurl = '(.*)\\.local';
  $environment->settings = array(
    'color' => '#d0d0d0',
    'text_color' => '#000000',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local'] = $environment;

  return $export;
}
