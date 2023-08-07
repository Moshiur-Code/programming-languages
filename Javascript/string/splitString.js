// use of some prototypes

let myString = 'Hey Allah! gives us the street path';

// use of split
    
    // this method gives you different word.
console.log(myString.split(' '));

    // this method gives single letter.
console.log(myString.split(''));

    // this method gives sentence
console.log(myString.split('.'));

// ---------------------------------------

// use of slice
console.log(myString.slice(4, 9));

// ----------------------------------------

// use of substring
console.log('sub strings: ', myString.substring(4, 10));

// use of concat()
let firstName = 'Moshiur', lastName = 'Rahman';
console.log('String concat: ', firstName + lastName);


// use of join()
const brokenLines = [
    'My name is',
    'Muhammad',
    'Moshiur',
    'Rahman'
]

const fullName = brokenLines.join('-');
console.log('use of join:', fullName);