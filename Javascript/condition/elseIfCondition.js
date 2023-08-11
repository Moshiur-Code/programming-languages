var a = 10; 
var b = 10;

// find out - greater than, less than, equal
if(a > b) {
    console.log(a, 'is greater than', b)
} 
else if(a < b) {
    console.log(a, 'is less than', b)
} 
else {
    console.log(a, 'is equal', b)
}

// find out -- positive, negetive, zero
var n1 = 0;

if (n1 > 0) {
    console.log(n1, 'is positive')
}
else if(n1 < 0) {
    console.log(n1, 'is negetive')
}
else{
    console.log(n1, 'is', n1)
}


// find out today's day

var date = new Date()

var today = date.getDay()

if(today == 0) {
    console.log("sunday")
}
else if(today == 1) {
    console.log("Monday")
}
else if(today == 2) {
    console.log('Tuesday')
}
else if(today == 3) {
    console.log('Wednesday')
}
else if(today == 4) {
    console.log('Thursday')
}
else if(today == 5) {
    console.log('Friday')
}
else if(today == 6) {
    console.log('Saturday')
}
