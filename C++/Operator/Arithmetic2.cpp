#include<iostream>
#include<conio.h>

using namespace std; 
int main()
{
    int num1, num2, calculation;
    char sign;
    cout << "Enter 2 Number And Sign like as (number1 sign number2): ";
    cin >> num1 >> sign >> num2;
    // cout << "Enter sign = ";
    // cin >> sign;
    switch (sign)
    {
    case '+':
        cout << "Sum = " << num1 + num2;
        break;
    case '-':
        cout << "Subtraction = " << num1 - num2; 
        break;
    case '*':
        cout << "Multiplication = " << num1 * num2;
        break;
    case '/': 
        cout << "Division = " << num1 / num2;
        break;

    default:
        cout << "Enter wrong input";
        break;
    }
    // calculation = num1  num2;
    // cout << "Result is = " << calculation << endl;

    return 0;
}