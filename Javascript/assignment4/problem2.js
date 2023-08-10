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

let string1 = "alhgalgjalojag";
let string2 = 'lojag';

console.log(matchFinder(string1, string2));