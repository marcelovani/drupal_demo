(function ($) {
  Drupal.behaviors.alo_physio_homepage = {

    attach: function (data, settings) {
      // Re-arrange logos.
      jQuery(".view-id-logos .view-content").masonry({
        itemSelector: ".views-row",
        columnWidth: 10
        //gutterWidth: 5,
        //isFitWidth: TRUE
      });
    }

  };
})(jQuery);
