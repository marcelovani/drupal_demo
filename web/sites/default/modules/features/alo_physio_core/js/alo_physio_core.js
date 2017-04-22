(function ($) {

Drupal.behaviors.core = {
  attach : function(context) {

      $(".view-id-recent_content.view-display-id-block .view-content").carouFredSel({
          width: '100%',
          responsive: false,
          circular : true,
          infinite : false,
          auto: false,
          next : {
              button : ".view-id-recent_content .next",
              key	: "right"
          },
          prev : {
              button : ".view-id-recent_content .prev",
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
