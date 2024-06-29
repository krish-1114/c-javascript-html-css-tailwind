// let marks = [97,53,32,12,14];
// console.log(marks);
// console.log(marks.length);

// let name = ["abc","efg","krish"];
// console.log(name);
// console.log(name.length);

// console.log(marks[0]);
// console.log(marks[1]);
// console.log(marks[2]);
// console.log(marks[3]);
// console.log(marks[100]);

// marks[0] = 79;
// console.log(marks[0]);
// console.log(marks);

// loops in Array
// let marks = [97,53,32,12,14];
// for (let i = 0; i < marks.length; i++) {
//     console.log(marks[i]);
// }

// for of
// let marks = [97,53,32,12,14];
// for (let i of marks) {
//     console.log(i);
// }

// let city = ["abc","efg","hij","KLM"];
// for (let i of city) {
//     console.log(i.toUpperCase());
// }

// QUE 1 
// find avg of [85 97 44 37 76 60]
// let marks = [85,97,44,37,76,60];
// let sum = 0;
// for (let val of marks) {
//     sum += val;
// }
// console.log("sum is ",sum);
// console.log("array lenth is ",marks.length);
// console.log("Avarage of student is ",sum/marks.length);

// QUE 2
// 10 % of [250 645 300 900 50]
// let price = [250,645,300,900,50];
// let i = 0;
// for (let val of price) {
//     let offer = val/10;
//     price[i] = price[i] - offer;
//     console.log(`value after offer = ${price[i]}`);
//     i++;
// }

// ----->  METHOD
// let price = [250,645,300,900,500];
// let price2 = [25,64,30,90,50];
// let concat1 = price.concat(price2);
// console.log(concat1);

// price.splice(2,1,23)
// console.log(price); // add remove replace

// console.log(price.slice(1,3));
// console.log(price.slice(1));

// price.unshift(123);
// console.log(price);

// price.push(30,34,23,234);
// price.pop(234,23);

// QUE 3
let compalny = ["boom","Micro","Uber","Google","IBM","Netflix"]
compalny.pop("boom");
console.log(compalny);
compalny.splice(2,1,"Ola");
console.log(compalny);
compalny.push("Amezon");
console.log(compalny);