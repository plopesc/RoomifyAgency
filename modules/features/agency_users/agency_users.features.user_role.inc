<?php
/**
 * @file
 * agency_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function agency_users_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  // Exported role: agency_owner.
  $roles['agency_owner'] = array(
    'name' => 'agency_owner',
    'weight' => 4,
  );

  // Exported role: property_owner.
  $roles['property_owner'] = array(
    'name' => 'property_owner',
    'weight' => 3,
  );

  return $roles;
}
