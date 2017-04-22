<?php

if (!empty($block->subject)) {
  $block_id = $block->module . '-' . preg_replace('@[^a-z0-9-]+@','-', strtolower($block->subject));
}
elseif (isset($block->bid)) {
  $block_id = $block->bid;
}
else {
  $block_id = $block->module . '-' . $block->delta;
}

?>

<div id="block-<?php print $block_id; ?>" class="clear-block block block-<?php print $block->module . '-' . $block->delta . ' ' . $zebra . ' ' . $classes . ' ' . $attributes; ?>">
  <?php print render($title_prefix); ?>
  <div class="block-icon"></div>
	<?php if (!empty($block->subject)): ?>
    <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
  <?php endif;?>
	<?php print render($title_suffix); ?>
  <div class="content<?php if($block->subject): print ' with-subject'; endif; ?><?php print $content_attributes; ?>">
    <?php print $content; ?>
  </div>
</div>
