
<div class="node recent-content">
  <div class="image">
    <?php if (isset($content['field_image'])): ?>
      <?php print render($content['field_image']); ?>
    <?php endif; ?>
  </div>
  <div class="content">
    <div class="main">
      <h3><?php print $title; ?></h3>
      <?php hide($content['links']); ?>
      <?php hide($content['field_category']); ?>

      <?php print render($content); ?>
      <?php if ($read_more): ?>
        <h4><a href="<?php print $node_url;?>"><?php print t('Read more'); ?></a></h4>
      <?php endif; ?>

      <ul class="meta">
        <li><i class="icon-calendar"></i> <?php print format_date($node->created, 'custom', 'M d, Y'); ?></li>

        <?php if (isset($content['field_category'])): ?>
          <li><?php print render($content['field_category']); ?></li>
        <?php endif; ?>
      </ul>
    </div>
  </div>
  <a class="full-link" href="<?php print $node_url; ?>">&nbsp;</a>
</div>


