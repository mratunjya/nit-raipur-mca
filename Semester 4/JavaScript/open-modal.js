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
const modalContainerPdf = document.querySelector("#pdf-viewer");
const modalContainerPdfIframe = document.querySelector("#pdf-viewer iframe");

allClicks.forEach(function (item) {
  item.addEventListener("contextmenu", function (e) {
    e.preventDefault();
    const extension = this.dataset.ext;
    if (extension === "pdf") {
      window.open(this.dataset.src, "_blank");
    }
  });

  item.addEventListener("click", function () {
    const extension = this.dataset.ext;
    if (extension === "pdf") {
      modalContainerImg.style.display = "none";
      modalContainerPdf.style.display = "block";
      if (modalContainerPdfIframe.src !== this.dataset.src)
        modalContainerPdfIframe.src = this.dataset.src;
    } else if (extension === "jpg" || extension === "png") {
      modalContainerImg.style.display = "block";
      modalContainerPdf.style.display = "none";
      if (
        modalContainerImg.src !==
        `${extension}/${this.dataset.src}.${this.dataset.ext}`
      )
        modalContainerImg.src = `${extension}/${this.dataset.src}.${this.dataset.ext}`;
    }
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
