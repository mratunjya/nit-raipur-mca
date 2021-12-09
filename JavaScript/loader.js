$(window).on("load", function() {
    $(".loader").fadeOut("slow");
    setTimeout(function() {
        //If classList of body contains overflow then only toggle overflow class
        if (!document.body.classList.contains("overflow")) {
            document.body.classList.toggle("overflow");
        }
    }, 250)
});