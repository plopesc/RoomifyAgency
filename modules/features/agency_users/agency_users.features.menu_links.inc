<?php
/**
 * @file
 * agency_users.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function agency_users_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_sign-up:user/register
  $menu_links['user-menu_sign-up:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Sign up',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_sign-up:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sign up');


  return $menu_links;
}
