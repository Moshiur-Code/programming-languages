// Find small numbers of an array
let Numbers = [6, 8, 3, 10, 25];
let minimum = Numbers[0];

for(let i =0; i<Numbers.length; i++) {
    if( Numbers[i] < minimum) {
        minimum = Numbers[i];
    }
}

console.log(minimum);