const syllabus = document.querySelector("#syllabus");
const syllabusBtn = document.querySelector(".syllabus-btn");
const body = document.body;

function syllabus_show() {
  syllabus.classList.toggle("show");
  noScroll();
  syllabusBtn.classList.toggle("show");
}

function syllabus_hide() {
  syllabus.classList.toggle("show");
  scroll();
  syllabusBtn.classList.toggle("show");
}
