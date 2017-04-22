(function ($) {

Drupal.behaviors.practicioners = {
  attach : function(context) {
    var megamenu = false;

      if (megamenu) {
        // Remove links.
        jQuery("#block-views-our-team-block .links").remove();
        jQuery("#block-views-our-team-block .contextual-links-wrapper").remove();

        // Move team block into megamenu.
        var count = jQuery("#block-views-our-team-block .view-content .views-row").length;
        var width = jQuery("#block-views-our-team-block .view-content .views-row-first").css('width');
        width = parseFloat(width) * count;

        //jQuery("#block-views-our-team-block .view-content").css('width', width + 'px');
        jQuery("#menu-1856-1 ul.sf-megamenu")
            .css('width', width + 'px')
            .html('<div class="view-id-our_team">' +
                jQuery("#block-views-our-team-block .view-content").html() +
            '</div>');

        //jQuery("#block-views-our-team-block").remove();
      }

      // Carousel.
      /*
      $("#menu-1856-1 .view-id-our_team, .view-id-our_team .view-content").flexslider({
          animation: "slide"
      });
      */
      $("#menu-1856-1 .view-id-our_team.view-display-id-block, .view-id-our_team.view-display-id-block .view-content").carouFredSel({
          width: '100%',
          responsive: false,
          circular : true,
          infinite : false,
          auto: false,
          next : {
              button : ".view-id-our_team .next",
              key	: "right"
          },
          prev : {
              button : ".view-id-our_team .prev",
              key	: "left"
          },
          swipe: {
              onMouse: false,
              onTouch: true
          },
          items: {
              visible: {
                  min: 1,
                  max: 4
              }
          }
      });
  }
}

})(jQuery);
