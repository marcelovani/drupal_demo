<?php
// $Id$

/**
 * Implements hook_form_alter().
 */
function drupal_demo_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure_form') {
    $form['site_information']['site_name']['#default_value'] = 'Drupal demo';
  }
}
