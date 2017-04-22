<?php
/**
 * @file
 * alo_physio_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function alo_physio_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_agree_button_message' => 'OK, I agree',
    'popup_disagree_button_message' => 'No, give me more info',
    'popup_info' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2>
<p>By clicking any link on this page you are giving your consent for us to set cookies.</p>
',
      'format' => 'filtered_html',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Hide',
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2>
<p>You can now hide this message or find out more about cookies.</p>
',
      'format' => 'filtered_html',
    ),
    'popup_link' => 'privacy-policy',
    'popup_link_new_window' => 1,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
  );
  $export['eu_cookie_compliance_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'poetry';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_poetry_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/images/general/logo.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/images/general/favicon.ico',
    'favicon_upload' => '',
    'breadcrumbs' => 1,
    'branding_type' => 'logo',
    'bg_path' => 'public://logo.png',
    'bg_upload' => '',
    'enable_slider' => 0,
    'slides_number' => '3',
    'slide_path_1' => 'public://',
    'slide_upload_1' => '',
    'slide_caption_1' => 'This is slide caption 1',
    'slide_path_2' => 'public://',
    'slide_upload_2' => '',
    'slide_caption_2' => 'This is slide caption 2',
    'slide_path_3' => 'public://',
    'slide_upload_3' => '',
    'slide_caption_3' => 'This is slide caption 3',
    'enable_highlight' => 0,
    'highlight_text' => 'Where evidence based physiotherapy becomes an art',
    'enable_services' => 1,
    'enable_information' => 1,
    'enable_recent_posts' => 0,
    'recent_posts_title' => 'Recent Posts',
    'enable_recent_projects' => 0,
    'recent_projects_title' => 'Recent Projects',
    'enable_clients' => 0,
    'clients_title' => 'Our Clients',
    'enable_boxed_layout' => 0,
    'color_scheme' => 'purple',
    'body_background' => '#ECECEC',
    'enable_background_pattern' => 0,
    'background_select' => 'retina_wood',
    'main_wrapper_background' => '#FFF',
    'enable_main_wrapper_pattern' => 0,
    'main_wrapper_pattern_select' => 'subtle_dots',
    'user_css' => '',
    'font_family' => 'proxima-nova, "Helvetica Neue", Helvetica, Arial, sans-serif',
    'h1' => '36px',
    'h2' => '30px',
    'h3' => '24px',
    'h4' => '18px',
    'h5' => '14px',
    'h6' => '12px',
    'enable_footer_twitter' => 1,
    'twitter_app_consumer_key' => '',
    'twitter_app_consumer_secret' => '',
    'twitter_app_access_token' => '',
    'twitter_app_access_secret' => '',
    'footer_twitter_handle' => 'marcelovani',
    'options__active_tab' => 'edit-footer',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_poetry_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/images/general/logo.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/images/general/favicon.ico',
    'favicon_upload' => '',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
