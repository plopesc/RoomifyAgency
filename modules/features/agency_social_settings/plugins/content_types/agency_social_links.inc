<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Agency'),
  'title' => t('Agency Social links'),
  'description' => t('Add defined social links.'),
  'render callback' => 'agency_social_links_render',
);

/**
 * Render callback.
 */
 function agency_social_links_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $content = '<ul class="agency-social-buttons  clearfix">';
  if (variable_get('agency_social_facebook', '') != '') {
    $content .= '<li class="agency-social-facebook ">
              <a href="' . variable_get('agency_social_facebook', '') . '" class="popup">
            </a></li>';
  }
  if (variable_get('agency_social_twitter', '') != '') {
    $content .= '<li class="agency-social-twitter">
              <a href="' . variable_get('agency_social_twitter', '') . '" class="popup">
            </a></li>';
  }
  if (variable_get('agency_social_linkedin', '') != '') {
    $content .= '<li class="agency-social-linkedin">
            <a href="' . variable_get('agency_social_linkedin', '') . '" class="popup">
            </a></li>';
  }
  if (variable_get('agency_social_tumblr', '') != '') {
    $content .= '<li class="agency-social-tumblr">
            <a href="' . variable_get('agency_social_tumblr', '') . '" class="popup">
            </a></li>';
  }

  if (variable_get('agency_social_googleplus', '') != '') {
    $content .= '<li class="agency-social-googleplus">
            <a href="' . variable_get('agency_social_googleplus', '') . '" class="popup">
            </a></li>';
  }

  if (variable_get('agency_social_pinterest', '') != '') {
    $content .= '<li class="agency-social-pinterest">
            <a href="' . variable_get('agency_social_pinterest', '') . '" class="popup">
            </a></li>';
  }
  if (variable_get('agency_social_instagram', '') != '') {
    $content .= '<li class="agency-social-instagram">
            <a href="' . variable_get('agency_social_instagram', '') . '" class="popup">
            </a></li>';
  }
 
  $content .= '</ul>';
  $block = new stdClass();
  $block->module = 'agency_social_links';
  $block->delta = $subtype;
  $block->title = 'Agency Social links';
  $block->content = $content;
  
  return $block;
  }
