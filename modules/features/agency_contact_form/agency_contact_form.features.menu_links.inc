<?php
/**
 * @file
 * agency_contact_form.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function agency_contact_form_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_add-your-property:eform/submit/contact
  $menu_links['user-menu_add-your-property:eform/submit/contact'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'eform/submit/contact',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Add your Property',
    'options' => array(
      'identifier' => 'user-menu_add-your-property:eform/submit/contact',
    ),
    'module' => 'entityform',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add your Property');

  return $menu_links;
}
