// swap program 
let first = 5, second = 7;
console.log(first, second);

// Method 1 - swaping
// const temp = first;
// first = second;
// second = temp;
// console.log(first, second);


// Method 2 - swaping by Destructuring
[first, second] = [second, first];
console.log(first, second);
  