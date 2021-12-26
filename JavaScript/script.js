function scroll_minus70() {
    setTimeout(function() {
        if (window.innerWidth > 768) {
            scroll = -70;
        }
        else {
            scroll = -120;
        }
        window.scrollBy(0, scroll);
    }, 500);
}