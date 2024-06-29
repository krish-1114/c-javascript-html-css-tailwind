let marks = prompt("Enter marks");

if (marks > 90 && marks < 100) {
    console.log(marks, "A grade");
} else if (marks > 70 && marks < 89) {
    console.log(marks, "B grade");
} else if (marks > 60 && marks < 69) {
    console.log(marks, "C grade");
} else if (marks > 50 && marks < 59) {
    console.log(marks, "D grade");
} else if (marks < 49) {
    console.log(marks, "F grade");
} else {
    console.log("Invalid");
}

// 2:30:30