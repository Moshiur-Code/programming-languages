// Object Declaration
var shoppingCart = {
    books: 3, 
    mouse: 2, 
    keyboard: 1, 
    pen: 15
}

console.log(shoppingCart);

// 1
console.log(shoppingCart.pen);

// 2
 console.log(shoppingCart['pen']);

 var propertyName = 'books';
 var propertValue = shoppingCart[propertyName];
console.log(propertyName, propertValue);

// 3
console.log(Object.keys(shoppingCart));

// 4
console.log(Object.values(shoppingCart))