#include<iostream>
using namespace std;

// void Find_natural_numbers(int number);

void Find_natural_numbers(int number) {
    int sum = 0;
    for(int i=1; i<=number; i+=1) {
        sum = sum + i;
        // cout << sum << " ";
    }
    cout << "Sum: " << sum << endl;
}

void Find_fibonacci(int number) {

    int a = 0, b = 1;
    cout << a << " " << b << " ";

    for(int i=1; i<=number; i+=1) {

        int next_number = a + b;
        cout << next_number << " ";
        
        a = b;
        b = next_number;
    }
    cout << endl;
}

void Prime_number(int number) {
    
    bool is_prime=1;

    for(int i=2; i<number; i+=1) {
        if(number % 2 == 0) {
            is_prime = 0;
            break;
        }
    }

    if(is_prime == 0) {
        cout << "Not a prime number" << endl;
    }
    else {
        cout << "is a prime number" << endl;
    }
}

void prime_for_n_numbers(int number) {
    
    for(int n=2; n<=number; n++) {
    
    bool is_prime=1;

    for(int i=2; i<n; i+=1) {
        if(n % 2 == 0) {
            is_prime = 0;
            break;
        }
    }
        if(is_prime == 0) {
            cout << n << " Not a prime number" << endl;
        }
        else {
            cout << n << " is a prime number" << endl;
        }   
    }
}


int main() {
    int number;
    cout << "Enter Number: ";
    cin >> number;

    Find_natural_numbers(number);
    Find_fibonacci(number);
    Prime_number(number);
    cout << endl;
    prime_for_n_numbers(number);

    return 0;
}

// void Find_natural_numbers(int number) {
//     for(int i=1; i<=number; i++) {
//         cout << i << " ";
//     }
// }