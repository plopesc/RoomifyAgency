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
    'name' => 'homepage_features',
    'label' => 'Homepage features',
    'effects' => array(
      2 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
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
    'name' => 'property_slider',
    'label' => 'Property slider',
    'effects' => array(
      4 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
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
    'name' => 'thumb_unit_search',
    'label' => 'thumb unit search',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
