<?php
/**
 * @file
 * agency_homepage.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function agency_homepage_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'rooms_unit-bnb-field_property_type'
  $field_instances['rooms_unit-bnb-field_property_type'] = array(
    'bundle' => 'bnb',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'field_property_type',
    'label' => 'Property type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Property type');

  return $field_instances;
}
