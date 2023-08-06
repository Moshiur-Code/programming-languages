// write a function to find out factorial 


// find factorial 
function findFactorial(number) {
    let fact = 1; 
    for(let i=number; i >= 1; i--) {
        // console.log(i);
        fact *= i;
    }
    return fact;
}

console.log(findFactorial(5))