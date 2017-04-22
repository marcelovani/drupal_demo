<?php

/**
 * Implements hook_js_alter().
 */
function alo_physio_js_alter(&$js) {
  // Remove unwanted js.
  $remove = array(
    drupal_get_path('theme', 'kanji') . '/main.js' => FALSE,
  );
  $js = array_diff_key($js, $remove);
}
