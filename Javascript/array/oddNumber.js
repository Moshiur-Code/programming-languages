let oddNumbers = [ 4, 5, 6, 7, 8, 9];
let sum = 0;

for(let i=0; i<oddNumbers.length; i++) {
    let element = oddNumbers[i];
    if(element % 2 != 0) {
        // print odd number
        console.log(element);
        // sum of odd number
        sum += element;
    }
}
// print sum
console.log(sum);
