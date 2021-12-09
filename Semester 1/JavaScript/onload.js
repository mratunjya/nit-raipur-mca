window.addEventListener("load", function() {
    if (window.location.href.includes("#time-table-btn")) {
        console.log("all done");
        document.getElementById("time-table-btn").click();
    }

    if (window.location.href.includes("#syllabus-btn")) {
        console.log("all done");
        document.getElementById("syllabus-btn").click();
    }
});