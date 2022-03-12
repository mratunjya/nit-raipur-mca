let time_table = document.getElementById("time-table");
body = document.getElementsByTagName("body")[0];

function time_table_show() {
    if (!time_table.classList.contains("show")) {
        time_table.classList.toggle("show");
    }
    if (!body.classList.contains("no-overflow")) {
        body.classList.toggle("no-overflow");
    }
    document.querySelector(".time-table-btn").style.display = "none";
    document.querySelector(".syllabus-btn").style.display = "block";
    if (syllabus.classList.contains("show")) {
        syllabus.classList.toggle("show");
    }
}

function time_table_hide() {
    time_table.classList.toggle("show");
    body.classList.toggle("no-overflow");
    document.querySelector(".time-table-btn").style.display = "block";
}

function time_table_btn() {
    document.querySelector(".time-table-btn").style.display = "none";
    setTimeout(function() {
        document.querySelector(".time-table-btn").style.display = "block";
    }, 500);
}

window.addEventListener("scroll", time_table_btn);
document.querySelector(".class-links").addEventListener("scroll", time_table_btn);
document.querySelector(".attendance-links").addEventListener("scroll", time_table_btn);
document.querySelector(".books").addEventListener("scroll", time_table_btn);
document.querySelector(".Important-msg").addEventListener("scroll", time_table_btn);
document.querySelector(".books").addEventListener("scroll", time_table_btn);
document.querySelector(".Important-msg").addEventListener("scroll", time_table_btn);