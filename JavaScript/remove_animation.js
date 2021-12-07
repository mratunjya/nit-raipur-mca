//Remove animate__animated class from all elements when window is loaded.
window.onload = function() {
    setTimeout(function() {
        var elements = document.getElementsByClassName('animate__animated');
        while (elements.length > 0) {
            elements[0].classList.remove('animate__animated');
        }
    }, 1000);
}