window.onkeydown = (e) => {
  if (e.ctrlKey && e.altKey && e.shiftKey && (e.key == "p" || e.key == "P")) {
    sessionStorage.setItem("pythonNotes", true);
    window.location.href = "/Python-Notes";
  }
};
