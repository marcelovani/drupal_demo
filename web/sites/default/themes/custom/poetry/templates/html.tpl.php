<!DOCTYPE html>
<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<!--[if lt IE 7]> <html class="ie6 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 7]>    <html class="ie7 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 8]>    <html class="ie8 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if gt IE 8]> <!--> <html class="" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <!--<![endif]-->
<head>
<?php print $head; ?>
<title><?php print $head_title; ?></title>
<?php print $styles; ?>
<?php print $scripts; ?>
  <!-- IE Fix for HTML5 Tags -->
  <!--[if lt IE 9]>
    <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
<?php haiku_user_css(); ?>

<!--<link rel="stylesheet" type="text/css" href="<?php global $root; echo $root;?>/css/switch.css">
<link rel="stylesheet" class="switch" type="text/css" href="<?php global $root; echo $root;?>/css/colors/default.css"> -->

</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<?php print $page_top; ?>
<?php print $page; ?>
<?php print $page_bottom; ?>

</div>

<!-- Mobile menu -->
<div id="mobile_wrapper">
  <?php
    $main_menu = menu_tree('main-menu');
    $secondary_menu = menu_tree('menu-secondary-menu');
    $menu = array_merge($main_menu, $secondary_menu);
    print render($menu);
  ?>
</div>
<!-- / Mobile menu -->

</body>
</html>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';