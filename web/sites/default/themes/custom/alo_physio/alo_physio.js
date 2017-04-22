(function (jQuery) {
    Drupal.behaviors.alo_physio = {
        attach: function (context, settings) {

            jQuery("#views_slideshow_controls_text_previous_banner-large_banner, #views_slideshow_controls_text_next_banner-large_banner").html('<a href="#"></a>').css('font-size', '30px');

            if (jQuery(window).width() <= 600) {
                var font_size = 14;

                jQuery('#headerWrapper').prepend("<div id=\"menu-icon\">☰</div>");
                jQuery("#siteName").append("<div class=\"font-sizes\">" +
                    "<span class=\"font-size-small\">A</span>" +
                    "<span class=\"font-size-medium\">A</span>" +
                    "<span class=\"font-size-large\">A</span>" +
                    "</div>");

                jQuery("#primaryMenu").toggleClass("active");


                jQuery("#primaryMenu li.expanded ul").slideToggle("fast");

                jQuery("#primaryMenu").toggleClass("active");

                jQuery("#primaryMenu ul.menu li.expanded>a").click(function() {
                    jQuery(this).parent().find("ul").slideToggle("fast");
                    event.preventDefault();
                });

                jQuery(".font-sizes").click(function() {
                    if (font_size == 14) {
                        font_size = 17;
                    } else if (font_size == 17) {
                        font_size = 20;
                    } else if (font_size == 20) {
                        font_size = 14;
                    }
                    jQuery("body").css("font-size", font_size);
                });

                jQuery("#menu-icon").click(function() {
                    window.scrollTo(-1, 0);
                    var position = jQuery('#headerWrapper').position();
                    jQuery("#primaryMenu").css("top", position.top + jQuery('#headerWrapper').height() - 10);
                    jQuery("#primaryMenu").toggleClass("active");
                });
            }
        }
    };
}(jQuery));
