"use strict";

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

const allClicks = document.querySelectorAll(".open-modal");
const modalContainer = document.querySelector(".modal-container");
const pdfViewer = document.querySelector("#pdf-viewer");

const showModal = () => {
  modalContainer.classList.add("is-flex");
  noScroll();
};

const hideAllIframeAndImages = () => {
  const allIframe = document.querySelectorAll("#pdf-viewer iframe");
  allIframe.forEach(function (item) {
    item.style.display = "none";
  });

  const allImages = document.querySelectorAll(".modal-body img");
  allImages.forEach(function (item) {
    item.style.display = "none";
  });
};

const closeModal = () => {
  modalContainer.classList.remove("is-flex");
  scroll();
};

const closeBtn = document.querySelector(".cross-icon");
closeBtn.addEventListener("click", closeModal);

const modalBody = document.querySelector(".modal-body");
modalBody.addEventListener("click", function (e) {
  e.stopPropagation();
});

modalContainer.addEventListener("click", closeModal);

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
    const id = this.dataset.id + extension;

    showModal();
    hideAllIframeAndImages();

    if (extension === "pdf") {
      pdfViewer.style.display = "block";
      const getIframeById = document.getElementById(id);
      if (getIframeById) {
        getIframeById.style.display = "block";
      } else {
        const iframe = document.createElement("iframe");
        iframe.setAttribute("id", id);
        iframe.src = this.dataset.src;
        iframe.style.width = "100%";
        iframe.style.height = "100%";
        iframe.style.border = "none";
        pdfViewer.appendChild(iframe);
      }
    } else if (extension === "jpg" || extension === "png") {
      pdfViewer.style.display = "none";
      showModal();
      hideAllIframeAndImages();

      const getImageById = document.getElementById(id);
      if (getImageById) {
        getImageById.style.display = "block";
      } else {
        const image = document.createElement("img");
        image.setAttribute("id", id);
        image.src = `${extension}/${this.dataset.src}.${extension}`;
        modalBody.appendChild(image);
      }
      scrollModalTop();
      windowScrollTop();
    }
  });

  item.click();
  closeBtn.click();
});
