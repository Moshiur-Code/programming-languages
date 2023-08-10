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


function matchFinder(string1, string2) {
    
    if(typeof(string1) === 'string' && typeof(string2) === 'string') {
      
        if(string1.includes(string2)) {
            return true;
        }
        else{
            return false;
        }
    }
    else {
        return 'Invalid Input';
    }
}

function sortMaker(arr) {
    if(arr[0] >= 0 && arr[1] >= 0) {
        
        if(arr[0] > arr[1]) {
            return arr;
        }
        else if(arr[0] < arr[1]) {
            const temp = [];
            temp[0] = arr[0];
            arr[0] = arr[1];
            arr[1] = temp[0];
            return arr;
        }
        else {
            return 'equal';
        }
    }
    else {
        return 'Invalid Input';
    }
}


function findAddress(obj) {
    for(const key in obj) {
        if(obj[key] === undefined || obj[key] === "") {
            obj[key] = "__";
        }
    }

    const objectValues = Object.values(obj);
    const convertedValues = objectValues.join(",");

    return convertedValues;
}


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
