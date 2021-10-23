let syllabus = document.getElementById("syllabus");
let body = document.getElementsByTagName("body")[0];

function syllabus_show () {
    syllabus.classList.toggle("show");
    body.classList.toggle("no-overflow");
}

function syllabus_hide () {
    syllabus.classList.toggle("show");
    body.classList.toggle("no-overflow");
}