<?php
/**
 * @file
 * alo_physio_testimonials.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alo_physio_testimonials_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_testimonial:node/add/testimonial
  $menu_links['navigation_testimonial:node/add/testimonial'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/testimonial',
    'router_path' => 'node/add/testimonial',
    'link_title' => 'testimonial',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Testimonials that will be shown in the page',
      ),
      'identifier' => 'navigation_testimonial:node/add/testimonial',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('testimonial');


  return $menu_links;
}
