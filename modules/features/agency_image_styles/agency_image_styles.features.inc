<?php
/**
 * @file
 * agency_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function agency_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_features.
  $styles['homepage_features'] = array(
    'label' => 'Homepage features',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 325,
          'height' => 250,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'homepage_features',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: property_slider.
  $styles['property_slider'] = array(
    'label' => 'Property slider',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 960,
          'height' => 450,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'property_slider',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumb_unit_search.
  $styles['thumb_unit_search'] = array(
    'label' => 'thumb unit search',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
