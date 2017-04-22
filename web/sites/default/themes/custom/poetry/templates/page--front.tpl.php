<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<?php haiku_header($page); ?>

<?php if (render($page['banner'])) : ?>
  <div class="slider_wrap">
    <div class="row">
      <div class="twelve columns">
        <div id="front_slide">
          <?php print render($page['banner']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php print $messages; ?>

<?php if (theme_get_setting('enable_highlight') == '1') : ?>
  <div id="highlight">
    <div class="row">
      <div class="twelve columns">
        <h2 class="highlight_text"><?php echo theme_get_setting('highlight_text'); ?></h2>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if (theme_get_setting('enable_call_to_action') == '1') : ?>
  <div id="information" class="row">
    <?php print render($page['call_to_action']); ?>
  </div>
  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>
<?php endif; ?>

<?php if (theme_get_setting('enable_facts') == '1') : ?>
  <div id="services" class="row">
    <div class="twelve columns">
      <div class="region region-services">
        <div id="facts" class="block block-block">


          <div class="content">
            <div class="row">
              <div class="three columns services_wrap">
                <i class="icon-user-md"></i><br><h3>“HARLEY STREET PHYSIOTHERAPY”</h3>
                <p></p>
                <div class="services_text"></div>
              </div>
              <div class="three columns services_wrap">
                <i class="icon-thumbs-up"></i><br><h3>“FIRST TECAR CENTRE IN THE UK”</h3>
                <p></p>
                <div class="services_text"></div>
              </div>
              <div class="three columns services_wrap">
                <i class="icon-trophy"></i><br><h3>“REHAB CENTRE FOR OLYMPIC ATHLETES”</h3>
                <p></p>
                <div class="services_text"></div>
              </div>
              <div class="three columns services_wrap">
                <a href="http://littlenudge.co.uk/"><i class="icon-comments"></i><br><h3>“INNOVATION CENTRE: CREATOR OF LITTLE NUDGE”</h3>
                  <p></p></a>
                <div class="services_text"></div>
              </div>
            </div>
          </div>
        </div>
      </div>

    </div>
  </div>
  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>
<?php endif; ?>

<?php if (theme_get_setting('enable_information') == '1') : ?>
  <div id="information" class="row">

    <?php print render($page['information']); ?>

    <div class="twelve columns">

      <div class="row">
        <div id="info" class="eight columns">
          <?php if ($page['info_left']) { ?>
            <?php print render($page['info_left']); ?>
          <?php } ?>
        </div>

        <div class="four columns">
          <?php if ($page['info_right']) { ?>
            <?php print render($page['info_right']); ?>
          <?php } ?>
        </div>
      </div>

    </div>
  </div>

  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>
<?php endif; ?>

<?php if (theme_get_setting('enable_services') == '1') : ?>
  <!-- Our team -->
  <div id="services" class="row">
    <div class="twelve columns">
      <?php if (!$page['services']) { ?>
        <h2>Add a block to the "Front Page Services" block or edit the page--front.tpl template to remove this
          placeholder content.</h2>
      <?php }
      else {
        print render($page['services']);
      } ?>
    </div>
  </div>

  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>
<?php endif; ?>

<?php if (theme_get_setting('enable_recent_posts') == '1') : ?>
  <div class="row">
    <div class="twelve columns">
      <div class="heading_title"><?php echo theme_get_setting('recent_posts_title'); ?></div>
    </div>
  </div>

  <div class="row">
    <?php print render($page['front_blog']); ?>
  </div>

  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>
<?php endif; ?>

  <!-- Recent content -->
<?php if ($page['recent_content']) { ?>
  <div id="recent-content" class="row">
    <div class="twelve columns">
      <?php print render($page['recent_content']); ?>
    </div>
  </div>

  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>
<?php } ?>

<?php if (theme_get_setting('enable_recent_projects') == '1') : ?>
  <div class="row">
    <div class="twelve columns">

      <div class="heading_title"><?php echo theme_get_setting('recent_projects_title'); ?></div>
      <div class="carousel_navigation">
        <a id="prev" class="prev" href="#"><i class="icon-chevron-left"></i></a>
        <a id="next" class="next" href="#"><i class="icon-chevron-right"></i></a>
      </div>

    </div>
  </div>

  <div class="row">
    <div class="twelve columns">
      <div class="projects_carousel">
        <ul id="recent_projects">
          <?php print render($page['recent_projects']); ?>
        </ul>
      </div>
    </div>
  </div>
<?php endif ?>

<?php if (theme_get_setting('enable_clients') == '1') : ?>
  <div class="row seperator">
    <div class="twelve columns">
      <hr>
    </div>
  </div>

  <div class="row">
    <div class="twelve columns">
      <?php if (!$page['clients']) { ?>
        <h2>Add a block to the "Front Page Clients" block or edit the page--front.tpl template to remove this
          placeholder content.</h2>
      <?php }
      else {
        print render($page['clients']);
      } ?>
    </div>
  </div>
  <div class="bottom_spacer"></div>
<?php endif ?>

<!-- Insurance companies -->
<?php if ($page['logos']) { ?>
  <div class="row">
    <div class="twelve columns">
      <?php print render($page['logos']); ?>
    </div>
  </div>
<?php } ?>

<?php haiku_footer($page); ?>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';