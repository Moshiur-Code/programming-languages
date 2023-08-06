#include<bits/stdc++.h>
using namespace std; 

int main() {

    cout << "Enter number: ";
    int number, result = 0;
    cin >> number;

    if(number >= 100) {

        result = number / 100;
        number = number % 100;
        cout << result << endl;
    }
    else if(number >= 50 && number < 100) {
        result = number / 50;
        number = number % 50;
        cout << result << endl;   
    }
    else if(number >= 20 && number < 50) {
        result = number / 20;
        number = number % 20;
        cout << result << endl;   
    }    
    else if(number >= 10 && number < 20) {
        result = number / 10;
        number = number % 10;
        cout << result << endl;   
    }    
    else if(number >= 1 && number < 10) {
        result = number / 1;
        number = number % 1;
        cout << result << endl;   
    }

    return 0;
}