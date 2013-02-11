<?php
/**
 * @file
 * asc_microsites.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function asc_microsites_block_class_features_default_class() {
  return array(
    0 => array(
      'module' => 'menu_block',
      'delta' => '2',
      'css_classes' => 'landing-page-head-menu',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_microsites_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function asc_microsites_image_default_styles() {
  $styles = array();

  // Exported image style: grid-12-slider.
  $styles['grid-12-slider'] = array(
    'name' => 'grid-12-slider',
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
          'width' => '940',
          'height' => '320',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function asc_microsites_node_info() {
  $items = array(
    'landing_page_alpha' => array(
      'name' => t('Landing Page Alpha'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
