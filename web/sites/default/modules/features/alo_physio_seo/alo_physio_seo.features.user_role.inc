<?php
/**
 * @file
 * alo_physio_seo.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function alo_physio_seo_user_default_roles() {
  $roles = array();

  // Exported role: seo admin.
  $roles['seo admin'] = array(
    'name' => 'seo admin',
    'weight' => 6,
  );

  return $roles;
}
