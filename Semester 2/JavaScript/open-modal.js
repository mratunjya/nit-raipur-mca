allClicks = document.querySelectorAll('.open-modal');

allClicks.forEach(function (item) {
    item.addEventListener('click', function () {
        var modal = document.querySelector('.modal-container');
        modal.classList.toggle('is-flex');
        var modalImag = document.querySelector('.modal-body img');
        modalImag.src = this.dataset.src;
        noScroll();
    });
});

modalContainer = document.querySelector('.modal-container');

modalContainer.addEventListener('click', function () {
    this.classList.toggle('is-flex');
    scroll();
})

const noScroll = () => {
    document.body.style.overflow = 'hidden';
}

const scroll = () => {
    document.body.style.overflow = 'auto';
}