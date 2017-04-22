<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<?php if (!$page): ?>
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php endif; ?>

  <?php print render($title_prefix); ?>
    <?php if ($page): ?>
      <h2 class="post_title" <?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php if (!$page): ?>
      <h3 class="post_title" <?php print $title_attributes; ?>><?php print $title; ?></h3>
    <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <ul class="meta">

      <li><i class="icon-user"></i> by <?php print $name; ?></li>

      <li><i class="icon-calendar"></i> <?php print format_date($node->created, 'custom', 'M d, Y'); ?></li>

      <?php if (isset($content['field_category'])): ?>
        <li><?php print render($content['field_category']); ?></li>
      <?php endif; ?>

      <?php if (isset($show_comments)): ?>
        <li><i class="icon-comment"></i> <a href="<?php print $node_url;?>/#comments"><?php print $comment_count; ?> comments</a></li>
      <?php endif; ?>

    </ul>
    <?php if (isset($content['field_tags'])): ?>
      <div class="tags"><i class="icon-tags"></i><?php print render($content['field_tags']); ?></div>
    <?php endif; ?>
  <?php endif; ?>

  <?php if (isset($content['field_image'])) : ?>
    <div class="featured">
      <?php print render($content['field_image']); ?>
    </div>
  <?php endif; ?>

  <div class="article_content"<?php print $content_attributes; ?>>
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['taxonomy_forums']);
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['field_image']);
      print render($content);
    ?>
  </div>

  <?php if (!$page): ?>
  <div class="read_more"> 
  	<?php if ($teaser): ?>
  	<a class="small button" href="<?php print $node_url;?>"><?php echo t('read more'); ?></a>
    <?php endif;?>
  </div>
  <hr>
  <?php endif; ?>
  
  <?php print render($content['comments']); ?>

<?php if (!$page): ?>
  </article> <!-- /.node -->
<?php endif; ?>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';