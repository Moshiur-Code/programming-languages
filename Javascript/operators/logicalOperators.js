/**
 *Use of logical operators
 *such as - &&, ||, ! 
 */

//  Behaviour of and operators
// true && true = true
// true && false = false
// false && true = false
// false && false = false
// Note: when Both element will be true then it will be true.

/**
* "||" Operators

 * true || true = true
 * ture || false = true
 * false || true = true
 * false || false = false
 * Note: when only one element will be true then it will be true.
 */


console.log("Use of '&&' operators")
var math = 98
var science = 30

if(math >= 33 && science >= 33) {
    console.log("Pass")
} else {
    console.log("Fail")
}


console.log("\nUse of '||' operators")
var math = 98
var science = 30

if(math >= 33 || science >= 33) {
    console.log("Pass")
} else {
    console.log("Fail")
}

// use of " ! " Operators
console.log("\nUse of '!' operators")

var productQuantity = 4;

if(productQuantity != 0 && productQuantity > 0) {
    console.log("in stock")
} else {
    console.log("stock out")
}