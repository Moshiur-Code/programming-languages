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

let arr = [6, 6];
console.log(sortMaker(arr));