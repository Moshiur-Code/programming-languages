//Find out the second largest element

let numbers = [2, 3, 4, 7, 1];
let maximum = numbers[0];

for(let i =0; i<numbers.length; i++) {
    if(maximum < numbers[i]) {
        maximum = numbers[i];
    }
}

console.log(maximum);

