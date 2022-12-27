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

allClicks.forEach(function (item) {
  item.addEventListener("click", function () {
    const extension = this.dataset.ext;
    console.log(extension);
    if (extension === "pdf") {
      modalContainerImg.style.display = "none";
      modalContainerPdf.style.display = "block";
      PDFObject.embed(
        `${extension}/${this.dataset.src}.${this.dataset.ext}#scrollbar=0&toolbar=1`,
        "#pdf-viewer"
      );
    } else if (extension === "jpg" || extension === "png") {
      modalContainerImg.style.display = "block";
      modalContainerPdf.style.display = "none";
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
