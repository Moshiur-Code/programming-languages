#include<iostream>
using namespace std;

int main() 
{
    int num1, num2;
    num1 = 10;
    num2 = 3;

    int sum = num1 + num2;
    cout << "sum is = " << sum << endl;

    int sub = num1 - num2;
    cout << "subtraction is = " << sub << endl;

    int mul = num1 * num2;
    cout << "Multiplication is = " << mul << endl;

    double div = (float) num1 / num2;
    cout << "Division is = " << div << endl;

    int rem = num1 % num2;
    cout << "Remainder is = " << rem << endl;

    return 0;
    
}