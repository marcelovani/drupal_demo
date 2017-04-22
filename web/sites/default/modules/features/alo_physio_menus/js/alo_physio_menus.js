(function ($) {

    Drupal.behaviors.menus = {
        attach : function(context) {

            // Add expand icon to mobile menus.
            jQuery("#mobile_wrapper li.has-dropdown>a").addClass("expand-closed");

            // Detect click on expandable menus.
            jQuery("#mobile_wrapper ul.menu li.has-dropdown>a").click(function() {
                jQuery(this).toggleClass("expand-open").toggleClass("expand-closed");
                jQuery(this).parent().find("ul:first").slideToggle("fast");
                event.preventDefault();
            });

            // Detect click on sandwich menu.
            jQuery(".mobile-menu a").click(function() {

                if (!jQuery("#mobile_wrapper").hasClass("expanded")) {
                    // Show menu;
                    jQuery("#mobile_wrapper").addClass("expanded").slideToggle("fast", function() {
                        jQuery("#main_wrapper").css("position", "absolute");
                        jQuery("#main_wrapper").css("left", "260px");
                    });
                }
                else {
                    // Hide menu;
                    jQuery("#mobile_wrapper").removeClass("expanded").hide();
                    jQuery("#main_wrapper").css("position", "relative");
                    jQuery("#main_wrapper").css("left", "0");
                }

            });
        }
    }

})(jQuery);
