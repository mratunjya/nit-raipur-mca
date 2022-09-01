window.onload = function () {
  if (!sessionStorage.getItem("pythonNotes")) {
    window.location.href = "/";
  } else {
    document.write(
      `<iframe src="https://python-notes.netlify.app/" frameborder="0" width="100%" height="100vh"></iframe>`
    );

    document.querySelector("iframe").style.height = "100vh";

    window.onkeydown = (e) => {
      if (e.keyCode == 123) {
        return false;
      } else if (e.ctrlKey && e.shiftKey && e.keyCode == 73) {
        return false;
      } else if (e.ctrlKey && e.keyCode == 85) {
        return false;
      }
    };

    window.oncontextmenu = (e) => {
      e.preventDefault();
    };
  }

  document.title = "Python Notes";
  document.body.style.overflow = "hidden";

  document.querySelectorAll("*").forEach((element) => {
    element.style.padding = "0";
    element.style.margin = "0";
  });
};
