// use of Break keyword

var numbers  = [11, 12, 13, 14, 15, 16, 17, 18, 19, 20];

for(var i=0; i<=numbers.length; i++) {
    if(numbers[i] <= 15)
    {
        continue;
    }
    console.log(numbers[i]);
}