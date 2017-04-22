<?php
/**
 * @file
 * alo_physio_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alo_physio_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  return $permissions;
}
