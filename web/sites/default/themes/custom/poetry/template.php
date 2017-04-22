<?php

/**
 * Implements hook_preprocess_node;
 *
 * @param $variables
 */
function poetry_preprocess_node(&$variables) {
  $variables['comment_count'] = 0;
}

/**
 * Implements hook_preprocess_field;
 */
function poetry_preprocess_field(&$variables) {
  if($variables['element']['#field_name'] == 'field_image') {
    $variables['image_limit'] = variable_get('limit_field_image', 1);
  }
}

/**
 * Implements hook_preprocess_block;
 *
 * @param $variables
 */
function poetry_preprocess_block(&$variables) {
  if (isset($variables['elements']['#block'])) {
    switch ($variables['elements']['#block']->bid) {
      // Hide the block title.
      case 'system-main-menu' :
      case 'menu-menu-secondary-menu' :
      case 'superfish-1' :
      case 'menu_block-21' :
        $variables['elements']['#block']->subject = '';
        break;
      case 'menu-menu-call-to-action' :
        $variables['elements']['#block']->subject = '';
        // Hack to add class to menu list.
        $content = &$variables['content'];
        $content = str_replace('<li>', '<li class="three columns"><span class="inner">', $content);
        $content = str_replace('</li>', '</span></li>', $content);
        break;
      case 'views-our_team-block':
        $options = array('attributes' => array('title' => 'Team page'));
        $variables['elements']['#block']->subject = l(
          $variables['elements']['#block']->subject, 'our-team', $options
        );
        break;
      default:
        //krumo($variables['elements']['#block']->bid);
    }
  }
}

/**
 * Returns HTML for a breadcrumb trail.
 *
 * @param $variables
 *   An associative array containing:
 *   - breadcrumb: An array containing the breadcrumb links.
 */
function poetry_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    //$output .= '<h3><div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div></h3>';
    $output =  implode(' » ', $breadcrumb) . ' » ';
    return $output;
  }
}