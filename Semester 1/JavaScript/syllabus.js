let syllabus = document.getElementById("syllabus");
let body = document.getElementsByTagName("body")[0];

function syllabus_show () {
    if (!syllabus.classList.contains("show")) {
        syllabus.classList.toggle("show");
    }
    body.classList.toggle("no-overflow");
    document.querySelector(".syllabus-btn").style.display = "none";
    document.querySelector(".time-table-btn").style.display = "block";
    if (time_table.classList.contains("show")) {
        time_table.classList.toggle("show");
    }
}

function syllabus_hide () {
    syllabus.classList.toggle("show");
    body.classList.toggle("no-overflow");
    document.querySelector(".syllabus-btn").style.display = "block";
}

function syllabus_btn() {
    document.querySelector(".syllabus-btn").style.display = "none";
    setTimeout(function() {
        document.querySelector(".syllabus-btn").style.display = "block";
    }, 250);
}

window.addEventListener("scroll", syllabus_btn);
document.querySelector(".class-links").addEventListener("scroll", syllabus_btn);
document.querySelector(".attendance-links").addEventListener("scroll", syllabus_btn);
document.querySelector(".books").addEventListener("scroll", syllabus_btn);
document.querySelector(".Important-msg").addEventListener("scroll", syllabus_btn);