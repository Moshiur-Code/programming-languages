function canPay(changeArray, totalDue) {

    if(changeArray.length != 0) {
        let sum = 0;
        for(let i=0; i<changeArray.length; i++) {
            sum += changeArray[i];
        }
        if(sum > totalDue) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return 'It is empty array';
    }
}

let array = [35, 36, 66];
let number = 10;

console.log(canPay(array, number));