<?php function haiku_header($page) { ?>
  <div id="main_wrapper">
    <header>
    <div class="container">

      <div class="row wide">
        <div class="three columns branding" <?php if (variable_get('site_slogan')) : ?>style="padding-top: 10px" <?php endif; ?> >
          <?php if (theme_get_setting('branding_type') == 'logo'): ?>
            <?php $path = drupal_get_path('theme', 'poetry'); ?>
            <a href="<?php print url('<front>');?>"><img alt="logo" src="/<?php echo $path; ?>/images/logo.png" /></a>
          <?php endif; ?>
          <?php if (theme_get_setting('branding_type') == 'text'): ?>
            <a href="<?php print url('<front>');?>">
              <h1 id="main_title_text"><?php print variable_get('site_name'); ?></h1>
              <h2 id="main_title_slogan"><?php print variable_get('site_slogan'); ?></h2>
            </a>
          <?php endif; ?>
        </div>
      	<div class="nine columns menu">
          <div id="nav">
            <!-- begin menu -->
             <nav class="top-bar">
              <div class="menu_wrap">
                <?php print render($page['main_menu']); ?>
                <?php //require_once('temp.php'); ?>
              </div>
             </nav>
				      </div> 
				        
				    </div> 
				 
            <!-- end menu -->   
          </div>

      <div class="row mobile">
        <span class="mobile-menu"><a href="#">&#9776;</a></span>
        <?php if (theme_get_setting('branding_type') == 'logo'): ?>
          <?php $path = drupal_get_path('theme', 'poetry'); ?>
          <span class="logo">
            <a href="<?php print url('<front>');?>"><img  alt="logo" src="/<?php echo $path; ?>/images/logo.png" /></a>
          </span>
        <?php endif; ?>
      </div>

    </div>
    <!-- end main span2 -->

   <?php  // haiku_style_switch(); ?>
          
  </header>

<?php } ?>