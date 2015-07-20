<?php
/**
 * @file
 * agency_review.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function agency_review_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create review content'.
  $permissions['create review content'] = array(
    'name' => 'create review content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any review content'.
  $permissions['delete any review content'] = array(
    'name' => 'delete any review content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own review content'.
  $permissions['delete own review content'] = array(
    'name' => 'delete own review content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any review content'.
  $permissions['edit any review content'] = array(
    'name' => 'edit any review content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own review content'.
  $permissions['edit own review content'] = array(
    'name' => 'edit own review content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any content'.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any review content'.
  $permissions['publish any review content'] = array(
    'name' => 'publish any review content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable content'.
  $permissions['publish editable content'] = array(
    'name' => 'publish editable content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable review content'.
  $permissions['publish editable review content'] = array(
    'name' => 'publish editable review content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own review content'.
  $permissions['publish own review content'] = array(
    'name' => 'publish own review content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any content'.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any review content'.
  $permissions['unpublish any review content'] = array(
    'name' => 'unpublish any review content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable content'.
  $permissions['unpublish editable content'] = array(
    'name' => 'unpublish editable content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable review content'.
  $permissions['unpublish editable review content'] = array(
    'name' => 'unpublish editable review content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own review content'.
  $permissions['unpublish own review content'] = array(
    'name' => 'unpublish own review content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  return $permissions;
}
