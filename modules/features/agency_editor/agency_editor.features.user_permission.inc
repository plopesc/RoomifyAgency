<?php
/**
 * @file
 * agency_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function agency_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access asset view page'.
  $permissions['access asset view page'] = array(
    'name' => 'access asset view page',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'access assets overview'.
  $permissions['access assets overview'] = array(
    'name' => 'access assets overview',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'access search widget'.
  $permissions['access search widget'] = array(
    'name' => 'access search widget',
    'roles' => array(),
    'module' => 'asset_widget',
  );

  // Exported permission: 'administer asset types'.
  $permissions['administer asset types'] = array(
    'name' => 'administer asset types',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'administer assets'.
  $permissions['administer assets'] = array(
    'name' => 'administer assets',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'create asset with type image'.
  $permissions['create asset with type image'] = array(
    'name' => 'create asset with type image',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete asset with type image'.
  $permissions['delete asset with type image'] = array(
    'name' => 'delete asset with type image',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type image'.
  $permissions['edit asset with type image'] = array(
    'name' => 'edit asset with type image',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'use text format rich_text'.
  $permissions['use text format rich_text'] = array(
    'name' => 'use text format rich_text',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
