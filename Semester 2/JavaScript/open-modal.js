const noScroll = () => {
    document.body.style.overflow = 'hidden';
}

const scroll = () => {
    document.body.style.overflow = 'auto';
}

const scrollModalTop = () => {
    document.querySelector('.modal-body').scrollTo(0, 0);
}

const windowScrollTop = () => {
    window.scrollTo(0, 0);
}

allClicks = document.querySelectorAll('.open-modal');

allClicks.forEach(function (item) {
    item.addEventListener('click', function () {
        windowScrollTop();
        noScroll();
        var modal = document.querySelector('.modal-container');
        modal.classList.toggle('is-flex');
        var modalImag = document.querySelector('.modal-body img');
        modalImag.src = this.dataset.src;
        scrollModalTop();
    });
});

modalContainer = document.querySelector('.modal-container');
modalContainerImg = document.querySelector('.modal-body img');

modalContainer.addEventListener('click', function () {
    this.classList.toggle('is-flex');
    scroll();
});

modalContainerImg.addEventListener('click', function (e) {
    e.stopPropagation();
});