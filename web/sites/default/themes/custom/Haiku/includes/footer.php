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
      
      <div class="eleven columns">
        <div id="footer_tweet" class='foot_tweet query'></div>
				<script type="text/javascript">
				                        
				    jQuery(document).ready(function ($) {
				      
				      $(".foot_tweet").tweet({
				        modpath: '<?php echo $root;?>/includes/twitter/',
				        username: "<?php echo theme_get_setting('footer_twitter_handle'); ?>",
				        avatar_size: 0,
				        count: 1,
				        loading_text: "loading tweets..."
				      });
				    
				    });
				    
				  </script>
      </div>
      
    </div>  
  </div>  
  <?php endif; ?>
    
  <?php if( (render($page['footer_1'])) OR (render($page['footer_2'])) OR (render($page['footer_3'])) ) { ?>
  <div class="row">
  
    <div class="four columns">
      <?php print render($page['footer_1']); ?>
    </div> 

    <div class="four columns">
      <?php print render($page['footer_2']); ?>
    </div>
    
    <div class="four columns">
      <?php print render($page['footer_3']); ?>
    </div>
    
  </div> 
  <?php } ?> 
  
 <?php if ( (render($page['footer_full'])) ) { ?>		
 <div class="row">
   <div class="twelve columns"> 
     <?php print render($page['footer_full']); ?>  
   </div> 	
 </div>
 <?php } ?> 

</div>
<!-- end footer --> 
<?php }
?>