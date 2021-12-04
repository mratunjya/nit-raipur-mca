$(window).on("load",function(){
    $(".loader").fadeOut("slow");
    setTimeout(function(){
        document.querySelector("body").classList.toggle("overflow");
    }, 250)
});