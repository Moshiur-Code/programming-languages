// The program can find avarage...

function findAverage(numbers) {
    let sum = 0;
    for(let i=0; i<numbers.length; i++) {
      sum +=numbers[i];
    }
   let average = sum/numbers.length;
   return average;
}

let myNumbers = [3, 7, 5];
let result = findAverage(myNumbers);

console.log(result);