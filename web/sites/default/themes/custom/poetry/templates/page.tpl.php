<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<?php haiku_header($page);?>

<div id="heading_wrapper">
  <div id="heading_wrapper_after">
 	  <div class="row">
      <div class="six columns">
        <div class="page-title">
          <?php if ($title_prefix) { ?>
            <h2> <?php print render($title_prefix); ?> &nbsp;</h2>
          <?php } ?>

          <h2><?php print $title; ?></h2>

          <?php if ($title_suffix) { ?>
            <h2> <?php print render($title_suffix); ?> </h2>
          <?php } ?>
        </div>

      </div>
      <div class="six columns">
        <div id="breadcrumbs">
          <h3><?php if (theme_get_setting('breadcrumbs') == '1') {print $breadcrumb . $title; } ?></h3>
        </div>
      </div>  
    </div>
  </div>
</div>

<?php print $messages; ?>

<div class="row">
  <div id="main_content_wrap" class="<?php if (($page['sidebar_first']) || ($page['sidebar_second'])) { echo "eight columns";} else { echo "twelve columns"; } ?>">
    <div id="main_content">
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php if ($tabs = render($tabs)): ?>
			  <div id="drupal_tabs" class="tabs ">
			    <?php print render($tabs); ?>
			  </div>
		  <?php endif; ?>
      <?php print render($page['content']); ?>
    </div>
  </div>

  <?php if (($page['sidebar_first']) || ($page['sidebar_second'])): ?>
  

    <div id="sidebar_wrap" class="four columns">
      <?php if ($page['sidebar_first']): ?>
      <aside id="sidebar-first" role="complementary" class="sidebar clearfix">
      <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>
      <?php if ($page['sidebar_second']): ?>
      <aside id="sidebar-second" role="complementary" class="sidebar clearfix">
      <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>
    </div>

  <?php endif; ?>
  
</div>

<?php haiku_footer($page);?>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';