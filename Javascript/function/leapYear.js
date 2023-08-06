// The program can find out leap year

function leapYear(year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else{
        return false;
    }
}

console.log(leapYear(2000));
console.log(leapYear(2004));
console.log(leapYear(1900));
console.log(leapYear(2022));

