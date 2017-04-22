<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<div>
  <?php print (render($content)); ?>
</div>
<?php if($teaser): ?>
  <?php print render($title_prefix); ?>
    <h4 <?php print $title_attributes; ?>><a href="/testimonials"><?php print $title; ?></a></h4>
  <?php print render($title_suffix); ?>
<?php endif;?>

<?php if($teaser): ?>
  <div class="read_more">
	<a class="small button" href="/testimonials">read more</a>
  </div>
<?php endif;?>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';