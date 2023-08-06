// find out miles to km

function milesToKm(miles) {
    let km = miles * 1.60934;
    return km;
}

let input = 2;
let result = milesToKm(input);
console.log(result, 'Kilometer');