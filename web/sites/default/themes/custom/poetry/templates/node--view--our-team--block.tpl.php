
<div class="node practitioner card-container manual-flip">
  <div class="card">
    <div class="front">
      <div class="cover">
        <img alt="card" src="<?php echo drupal_get_path('theme', variable_get('theme_default')); ?>/images/rotating_card_thumb.png">
      </div>
      <div class="user">
        <?php
          $img = render($content['field_image']);
          print str_replace('<img', '<img class="img-circle" ', $img);
        ?>
      </div>
      <div class="content">
        <div class="main">
            <h3><?php print $title; ?></h3>
            <?php hide($content['links']); ?>
            <?php print render($content); ?>
            <h4 class="icon-user">&nbsp;<a href="<?php print $node_url;?>"><?php print t('See Profile'); ?></a></h4>
        </div>
      </div>
    </div>
  </div>
</div>
