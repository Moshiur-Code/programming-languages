// Find Factorial with while loop

function findFactorial(number) {
    let fact = 1;
    let i = number; 
    while(i >= 1) {
        fact *= i;
        i--;
    }
    return fact;
}

console.log(findFactorial(5));