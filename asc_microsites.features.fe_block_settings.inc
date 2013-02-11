<?php
/**
 * @file
 * asc_microsites.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_microsites_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu_block-1' => array(
      'delta' => '1',
      'module' => 'menu_block',
      'node_type' => array(
        'landing_page_alpha' => TRUE,
      ),
    ),
  );

  // q7
  $theme = array();

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-30',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
