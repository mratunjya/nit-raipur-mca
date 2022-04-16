const noScroll = () => {
  document.body.style.overflow = "hidden";
};

const scroll = () => {
  document.body.style.overflow = "auto";
};

const scrollModalTop = () => {
  document.querySelector(".modal-body").scrollTo(0, 0);
};

const windowScrollTop = () => {
  window.scrollTo(0, 0);
};

allClicks = document.querySelectorAll(".open-modal");
const modalContainer = document.querySelector(".modal-container");
const modalContainerImg = document.querySelector(".modal-body img");

allClicks.forEach(function (item) {
  item.addEventListener("click", function () {
    modalContainerImg.src = `jpg/${this.dataset.src}`;
    scrollModalTop();
    windowScrollTop();
    noScroll();
    modalContainer.classList.toggle("is-flex");
  });
});

modalContainer.addEventListener("click", function () {
  this.classList.toggle("is-flex");
  scroll();
});

modalContainerImg.addEventListener("click", function (e) {
  e.stopPropagation();
});
