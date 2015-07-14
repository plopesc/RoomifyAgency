<?php
/**
 * @file
 * agency_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function agency_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'agency_owner' => 'agency_owner',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'access gmap getdirections'.
  $permissions['access gmap getdirections'] = array(
    'name' => 'access gmap getdirections',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'getdirections',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access user getdirections'.
  $permissions['access user getdirections'] = array(
    'name' => 'access user getdirections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'getdirections',
  );

  // Exported permission: 'administer own rooms_unit channel management'.
  $permissions['administer own rooms_unit channel management'] = array(
    'name' => 'administer own rooms_unit channel management',
    'roles' => array(
      'administrator' => 'administrator',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_channel_manager',
  );

  // Exported permission: 'administer rooms channel management'.
  $permissions['administer rooms channel management'] = array(
    'name' => 'administer rooms channel management',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_channel_manager',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer rooms_booking entities'.
  $permissions['administer rooms_booking entities'] = array(
    'name' => 'administer rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'administer rooms_booking_type entities'.
  $permissions['administer rooms_booking_type entities'] = array(
    'name' => 'administer rooms_booking_type entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'administer rooms_unit availability'.
  $permissions['administer rooms_unit availability'] = array(
    'name' => 'administer rooms_unit availability',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'administer rooms_unit entities'.
  $permissions['administer rooms_unit entities'] = array(
    'name' => 'administer rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'administer rooms_unit pricing'.
  $permissions['administer rooms_unit pricing'] = array(
    'name' => 'administer rooms_unit pricing',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'administer rooms_unit_type entities'.
  $permissions['administer rooms_unit_type entities'] = array(
    'name' => 'administer rooms_unit_type entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'book units'.
  $permissions['book units'] = array(
    'name' => 'book units',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_booking_manager',
  );

  // Exported permission: 'bypass rooms_booking entities access'.
  $permissions['bypass rooms_booking entities access'] = array(
    'name' => 'bypass rooms_booking entities access',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'bypass rooms_unit entities access'.
  $permissions['bypass rooms_unit entities access'] = array(
    'name' => 'bypass rooms_unit entities access',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'configure room settings'.
  $permissions['configure room settings'] = array(
    'name' => 'configure room settings',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms',
  );

  // Exported permission: 'create location content'.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create rooms_booking entities'.
  $permissions['create rooms_booking entities'] = array(
    'name' => 'create rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_booking entities of bundle standard_booking'.
  $permissions['create rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'create rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_unit entities'.
  $permissions['create rooms_unit entities'] = array(
    'name' => 'create rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create rooms_unit entities of bundle bnb'.
  $permissions['create rooms_unit entities of bundle bnb'] = array(
    'name' => 'create rooms_unit entities of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete any location content'.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any rooms_booking entity'.
  $permissions['delete any rooms_booking entity'] = array(
    'name' => 'delete any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete any rooms_booking entity of bundle standard_booking'.
  $permissions['delete any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'delete any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete any rooms_unit entity'.
  $permissions['delete any rooms_unit entity'] = array(
    'name' => 'delete any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete any rooms_unit entity of bundle bnb'.
  $permissions['delete any rooms_unit entity of bundle bnb'] = array(
    'name' => 'delete any rooms_unit entity of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete own location content'.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own rooms_booking entities'.
  $permissions['delete own rooms_booking entities'] = array(
    'name' => 'delete own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete own rooms_booking entities of bundle standard_booking'.
  $permissions['delete own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'delete own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete own rooms_unit entities'.
  $permissions['delete own rooms_unit entities'] = array(
    'name' => 'delete own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete own rooms_unit entities of bundle bnb'.
  $permissions['delete own rooms_unit entities of bundle bnb'] = array(
    'name' => 'delete own rooms_unit entities of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any location content'.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own location content'.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag favorite'.
  $permissions['flag favorite'] = array(
    'name' => 'flag favorite',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag featured'.
  $permissions['flag featured'] = array(
    'name' => 'flag featured',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'unflag favorite'.
  $permissions['unflag favorite'] = array(
    'name' => 'unflag favorite',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag featured'.
  $permissions['unflag featured'] = array(
    'name' => 'unflag featured',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'update any rooms_booking entity'.
  $permissions['update any rooms_booking entity'] = array(
    'name' => 'update any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update any rooms_booking entity of bundle standard_booking'.
  $permissions['update any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'update any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update any rooms_unit entity'.
  $permissions['update any rooms_unit entity'] = array(
    'name' => 'update any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update any rooms_unit entity of bundle bnb'.
  $permissions['update any rooms_unit entity of bundle bnb'] = array(
    'name' => 'update any rooms_unit entity of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update availability any rooms_unit entity'.
  $permissions['update availability any rooms_unit entity'] = array(
    'name' => 'update availability any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability any rooms_unit entity of bundle bnb'.
  $permissions['update availability any rooms_unit entity of bundle bnb'] = array(
    'name' => 'update availability any rooms_unit entity of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability own rooms_unit entities'.
  $permissions['update availability own rooms_unit entities'] = array(
    'name' => 'update availability own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability own rooms_unit entities of bundle bnb'.
  $permissions['update availability own rooms_unit entities of bundle bnb'] = array(
    'name' => 'update availability own rooms_unit entities of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update own rooms_booking entities'.
  $permissions['update own rooms_booking entities'] = array(
    'name' => 'update own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update own rooms_booking entities of bundle standard_booking'.
  $permissions['update own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'update own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update own rooms_unit entities'.
  $permissions['update own rooms_unit entities'] = array(
    'name' => 'update own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update own rooms_unit entities of bundle bnb'.
  $permissions['update own rooms_unit entities of bundle bnb'] = array(
    'name' => 'update own rooms_unit entities of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update pricing any rooms_unit entity'.
  $permissions['update pricing any rooms_unit entity'] = array(
    'name' => 'update pricing any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing any rooms_unit entity of bundle bnb'.
  $permissions['update pricing any rooms_unit entity of bundle bnb'] = array(
    'name' => 'update pricing any rooms_unit entity of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing own rooms_unit entities'.
  $permissions['update pricing own rooms_unit entities'] = array(
    'name' => 'update pricing own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing own rooms_unit entities of bundle bnb'.
  $permissions['update pricing own rooms_unit entities of bundle bnb'] = array(
    'name' => 'update pricing own rooms_unit entities of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'view anonymous availability information'.
  $permissions['view anonymous availability information'] = array(
    'name' => 'view anonymous availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view any rooms_booking entity'.
  $permissions['view any rooms_booking entity'] = array(
    'name' => 'view any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view any rooms_booking entity of bundle standard_booking'.
  $permissions['view any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'view any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view any rooms_unit entity'.
  $permissions['view any rooms_unit entity'] = array(
    'name' => 'view any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view any rooms_unit entity of bundle bnb'.
  $permissions['view any rooms_unit entity of bundle bnb'] = array(
    'name' => 'view any rooms_unit entity of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view any rooms_unit unpublished entity'.
  $permissions['view any rooms_unit unpublished entity'] = array(
    'name' => 'view any rooms_unit unpublished entity',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view named availability information'.
  $permissions['view named availability information'] = array(
    'name' => 'view named availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view own rooms_booking entities'.
  $permissions['view own rooms_booking entities'] = array(
    'name' => 'view own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view own rooms_booking entities of bundle standard_booking'.
  $permissions['view own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'view own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view own rooms_unit entities'.
  $permissions['view own rooms_unit entities'] = array(
    'name' => 'view own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own rooms_unit entities of bundle bnb'.
  $permissions['view own rooms_unit entities of bundle bnb'] = array(
    'name' => 'view own rooms_unit entities of bundle bnb',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own rooms_unit unpublished entities'.
  $permissions['view own rooms_unit unpublished entities'] = array(
    'name' => 'view own rooms_unit unpublished entities',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view past availability information'.
  $permissions['view past availability information'] = array(
    'name' => 'view past availability information',
    'roles' => array(),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'agency_owner' => 'agency_owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'agency_owner' => 'agency_owner',
      'property_owner' => 'property_owner',
    ),
    'module' => 'system',
  );

  return $permissions;
}
