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