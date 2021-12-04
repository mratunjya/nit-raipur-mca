let time_table = document.getElementById("time-table");
body = document.getElementsByTagName("body")[0];

function time_table_show() {
    time_table.classList.toggle("show");
    body.classList.toggle("no-overflow");
}

function time_table_hide() {
    time_table.classList.toggle("show");
    body.classList.toggle("no-overflow");
}

function time_table_btn() {
    document.querySelector(".time-table-btn").style.display = "none";
    setTimeout(function() {
        document.querySelector(".time-table-btn").style.display = "block";
    }, 250);
}

window.addEventListener("scroll", time_table_btn);
document.querySelector(".class-links").addEventListener("scroll", time_table_btn);
document.querySelector(".attendance-links").addEventListener("scroll", time_table_btn);
document.querySelector(".books").addEventListener("scroll", time_table_btn);
document.querySelector(".Important-msg").addEventListener("scroll", time_table_btn);
