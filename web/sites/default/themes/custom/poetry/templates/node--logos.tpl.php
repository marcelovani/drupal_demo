
<?php if (!$page): ?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <?php if (isset($content['field_image'])) : ?>
      <div>
        <?php print render($content['field_image']); ?>
      </div>
    <?php endif; ?>
  </div>
<?php endif; ?>
