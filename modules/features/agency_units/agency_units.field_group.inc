<?php
/**
 * @file
 * agency_units.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function agency_units_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|rooms_unit|bnb|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'rooms_unit';
  $field_group->bundle = 'bnb';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'field_property_description',
      1 => 'field_property_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|rooms_unit|bnb|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|rooms_unit|bnb|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'rooms_unit';
  $field_group->bundle = 'bnb';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_property_image',
      1 => 'field_property_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_images|rooms_unit|bnb|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|rooms_unit|bnb|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'rooms_unit';
  $field_group->bundle = 'bnb';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_address',
      1 => 'field_location',
      2 => 'field_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|rooms_unit|bnb|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|rooms_unit|bnb|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'rooms_unit';
  $field_group->bundle = 'bnb';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '4',
    'children' => array(
      0 => 'rooms_booking_unit_options',
      1 => 'field_availability_calendar',
      2 => 'og_unit_location_ref',
      3 => 'field_owner',
      4 => 'flag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|rooms_unit|bnb|form'] = $field_group;

  return $export;
}
