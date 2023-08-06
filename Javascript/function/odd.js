// The Program can calculate the number is odd or even

function odd(age){
    if(age % 2 != 0) {
        return console.log('Your age is', age, 'odd');
    }
    else{
        return console.log('Your age is', age, 'even');
    }
}

odd(26);
odd(25);
odd(24);
