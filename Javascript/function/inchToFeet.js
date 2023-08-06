// This program can find out inch to feet

function inchToFeet(inch) {
    let feet = inch / 12;
    return feet.toFixed(2);
}

let moshiur = 68;

let result = inchToFeet(moshiur);

console.log(result, 'inch');