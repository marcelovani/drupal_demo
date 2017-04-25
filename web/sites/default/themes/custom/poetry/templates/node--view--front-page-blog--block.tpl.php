
<div class="six columns">
	  <div class="recent_posts_wrap">
	    <div class="recent_post_photo">
        <a href="<?php print $node_url;?>">
        <?php if (isset($content['field_image'])): ?>
           <?php print render($content['field_image']); ?>
        <?php endif; ?>
        </a>
	    </div>
	    <div class="recent_post_info">  
	      <div class="recent_post_info_text">
	          <h4><?php print $title; ?></h4>
	          <i class="general foundicon-calendar"></i><?php print format_date($node->created, 'custom', 'M d, Y'); ?>
	          <h4><a href="<?php print $node_url;?>">read more</a></h4>
	      </div>
	     
	      <div class="clearfix"></div>
	    </div>
	  </div>  
	</div>
