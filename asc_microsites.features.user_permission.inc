<?php
/**
 * @file
 * asc_microsites.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_microsites_user_default_permissions() {
  $permissions = array();

  // Exported permission: create landing_page_alpha content.
  $permissions['create landing_page_alpha content'] = array(
    'name' => 'create landing_page_alpha content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any landing_page_alpha content.
  $permissions['delete any landing_page_alpha content'] = array(
    'name' => 'delete any landing_page_alpha content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own landing_page_alpha content.
  $permissions['delete own landing_page_alpha content'] = array(
    'name' => 'delete own landing_page_alpha content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any landing_page_alpha content.
  $permissions['edit any landing_page_alpha content'] = array(
    'name' => 'edit any landing_page_alpha content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own landing_page_alpha content.
  $permissions['edit own landing_page_alpha content'] = array(
    'name' => 'edit own landing_page_alpha content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
