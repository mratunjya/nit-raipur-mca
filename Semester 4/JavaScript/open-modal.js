"use strict";

// Select all the elements we will use
const allClicks = document.querySelectorAll(".open-modal");
const modalContainer = document.querySelector(".modal-container");
const pdfViewer = document.querySelector("#pdf-viewer");
const closeBtn = document.querySelector(".cross-icon");
const modalBody = document.querySelector(".modal-body");

// Disable scrolling on the page
const noScroll = () => {
  document.body.style.overflow = "hidden";
};

// Enable scrolling on the page
const scroll = () => {
  document.body.style.overflow = "auto";
};

// Scroll to the top of the modal body
const scrollModalTop = () => {
  document.querySelector(".modal-body").scrollTo(0, 0);
};

// Scroll to the top of the page
const windowScrollTop = () => {
  window.scrollTo(0, 0);
};

// Show the modal
const showModal = () => {
  modalContainer.classList.add("is-flex");
  noScroll();
};

// Hide all elements that match the given selector
const hideAllElements = (selector) => {
  const allElements = document.querySelectorAll(selector);
  allElements.forEach((item) => {
    item.style.display = "none";
  });
};

// Close the modal
const closeModal = () => {
  modalContainer.classList.remove("is-flex");
  scroll();
};

// Add event listeners to the close button, modal body, and modal container
closeBtn.addEventListener("click", closeModal);
modalBody.addEventListener("click", (e) => {
  e.stopPropagation();
});
modalContainer.addEventListener("click", closeModal);

// Add event listeners to all elements that trigger the modal
allClicks.forEach((item) => {
  // Prevent the default context menu from appearing on right-click
  item.addEventListener("contextmenu", (e) => {
    e.preventDefault();
    const extension = item.dataset.ext;
    if (extension === "pdf") {
      window.open(item.dataset.src, "_blank");
    } else if (extension === "jpg" || extension === "png") {
      window.open(`${extension}/${item.dataset.src}.${extension}`, "_blank");
    }
  });

  // Show the modal and hide all other elements when the item is clicked
  item.addEventListener("click", () => {
    const extension = item.dataset.ext;
    const id = item.dataset.id + extension;
    showModal();
    hideAllElements("#pdf-viewer iframe, .modal-body img");
    if (extension === "pdf") {
      pdfViewer.style.display = "block";
      const getIframeById = document.getElementById(id);
      if (getIframeById) {
        getIframeById.style.display = "block";
      } else {
        const iframe = document.createElement("iframe");
        iframe.setAttribute("id", id);
        iframe.src = item.dataset.src;
        iframe.style.width = "100%";
        iframe.style.height = "100%";
        iframe.style.border = "none";
        pdfViewer.appendChild(iframe);
      }
    } else if (extension === "jpg" || extension === "png") {
      pdfViewer.style.display = "none";
      showModal();
      hideAllElements("#pdf-viewer iframe, .modal-body img");

      const getImageById = document.getElementById(id);
      if (getImageById) {
        getImageById.style.display = "block";
      } else {
        const image = document.createElement("img");
        image.setAttribute("id", id);
        image.src = `${extension}/${item.dataset.src}.${extension}`;
        modalBody.appendChild(image);
      }
      scrollModalTop();
      windowScrollTop();
    }
  });
});

// When the page is loaded, simulate clicks on all elements that trigger the modal and close the modal
window.addEventListener("load", () => {
  allClicks.forEach((item) => {
    item.click();
  });
  closeModal();
});
