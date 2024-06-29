// for (let i = 1; i <= 5; i++) {
//     console.log("krish");
// }

// // 1+2+3+4+5+...+15;
// let num = prompt("enter number");
// let sum = 0;
// for(let i=1;i<=num;i++){
// sum = sum + i;
// }
// console.log(sum);

//  1 to 10
// for(let i=1;i<=10;i++){
//     console.log("I is = ",i);
// }

// infinite loop
// for(let i=1;i>=0;i++){
//     console.log("I is = ",i);
// }

// let i=1;
// while (i<=10) {
//     console.log("i is ",i);
//     i++;
// }

// let i=1;
// do {
//     console.log("i is ",i);
//     i++;
// } while (i<=10);

// for-of loop
// for (let i of "krish") {
//     console.log(i);
// // }
// let size = 0;

// for (let i of "krish") {
//         console.log(i);
//         size++;
//     }

// console.log("String size is : ",size);

// for-in loop

// let student = {
//     name : "Krish",
//     age : 20,
//     cgpa: 8
// };

// for(let i in student ){
//     console.log("key is :",i);
// }

// for(let key in student){
//     console.log("key=",key,"value=",student[i]);
// }

// 1 to 100 even

// for (let i = 0; i<=100 ; i++) {
//     if(i%2 == 0){
//         console.log(i);
//     }
// }

let gameNum = 25;

let guss = prompt("Enter the no");
while(guss != gameNum){
    guss=prompt("Wrong guess again");
}
console.log("Win");
 




