function cubeNumber(number) {
    if(typeof(number) === 'number') {
        const cube = Math.pow(number, 3);
        return cube; 
    }
    else{
        const message = 'Invalid Input';
        return message;
    }
}

console.log(cubeNumber(2));
console.log(cubeNumber(4));
console.log(cubeNumber(6));
console.log(cubeNumber());
console.log(cubeNumber('moshiur'));
console.log(cubeNumber('true'));

