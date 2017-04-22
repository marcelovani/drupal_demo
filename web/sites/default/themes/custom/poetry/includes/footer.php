<?php 
function haiku_footer($page){
  global $root; 
?>
<?php if ( (theme_get_setting('enable_footer_twitter') == '1') AND ( !drupal_is_front_page() )  ) : ?>
<div style="margin-top: 50px;"></div>
<?php endif; ?>
<!-- begin footer -->   
<div id="footer"> 
  
  <?php if (theme_get_setting('enable_footer_twitter') == '1') : ?>
  <div id="footer_twitter">
    <div class="row">
    
      <div class="one columns bird">
        <i class="social foundicon-twitter"></i> 
      </div>
      
      <div class="twelve">
        <div id="footer_tweet" class='foot_tweet query'></div>
        <!-- Twitter -->

        <a class="twitter-timeline"
           href="https://twitter.com/alophysio"
           data-chrome="noheader nofooter noborders noscrollbar"
           data-tweet-limit="1"
           data-widget-id="604377509845712896">Tweets by @alophysio</a>
        <script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>

        <!--
				<script type="text/javascript">
				    jQuery(document).ready(function ($) {
				      jQuery(".Xfoot_tweet").tweet({
				        modpath: '<?php //echo $root;?>/includes/twitter/',
				        username: "<?php //echo theme_get_setting('footer_twitter_handle'); ?>",
				        avatar_size: 0,
				        count: 1,
				        loading_text: "loading tweets..."
				      });
				    });
				  </script>
				  -->
        <!-- /Twitter -->
      </div>
      
    </div>  
  </div>  
  <?php endif; ?>

  <?php if ( (render($page['footer_wide_top'])) ) { ?>
    <div class="row">
      <div class="twelve">
        <?php print render($page['footer_wide_top']); ?>
      </div>
    </div>
  <?php } ?>

  <?php if( (render($page['footer_1'])) ||
    (render($page['footer_2'])) ||
    (render($page['footer_3'])) ||
    (render($page['footer_4']))
  ) { ?>
  <div class="row">
  
    <div class="three columns">
      <?php print render($page['footer_1']); ?>
    </div> 

    <div class="three columns">
      <?php print render($page['footer_2']); ?>
    </div>
    
    <div class="three columns">
      <?php print render($page['footer_3']); ?>
    </div>

    <div class="three columns">
      <?php print render($page['footer_4']); ?>
    </div>
    
  </div> 
  <?php } ?> 
  
 <?php if ( (render($page['footer_wide_bottom'])) ) { ?>
 <div class="row">
   <div class="twelve columns"> 
     <?php print render($page['footer_wide_bottom']); ?>
   </div> 	
 </div>
 <?php } ?> 

</div>
<!-- end footer -->
<?php }
?>
