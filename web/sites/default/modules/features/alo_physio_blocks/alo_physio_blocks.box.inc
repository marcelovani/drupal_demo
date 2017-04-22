<?php
/**
 * @file
 * alo_physio_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function alo_physio_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'welcome';
  $box->plugin_key = 'simple';
  $box->title = 'What we believe';
  $box->description = 'Display a welcome message on front page';
  $box->options = array(
    'body' => array(
      'value' => '<div class="heading_title">We are driven by the professional desire to produce quantifiable results with our clients facilitating                 their recovery from injuries.</div>
<p>Our philosophy is to place you at the centre of our care and combine the medical with the holistic                 approach to treatment. We have a 4-step approach when working with our clients: <strong><a href="/about-us/our-philosophy">We Assess, Treat, Rehabilitate &amp; Deliver!</a></strong></p>
<ul>
    <li><a href="/about-us/our-philosophy">Find out more about our philosophy</a></li>
</ul>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['welcome'] = $box;

  return $export;
}
