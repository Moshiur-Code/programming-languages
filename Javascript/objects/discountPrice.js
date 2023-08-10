// find the discount price 

function discount(ticketsQuentity) {
        const first100 = 100;
        const second100 = 90;
  
        if(ticketsQuentity <= 100) {
            const price1 = ticketsQuentity * first100;
            return price1;
        }
        else if(ticketsQuentity > 100 && ticketsQuentity <= 200) {
            const price2 = ticketsQuentity * second100;
            return price2;
        }

        return price1 + price2;

}

let totalPrice = discount(100);
console.log(totalPrice);  