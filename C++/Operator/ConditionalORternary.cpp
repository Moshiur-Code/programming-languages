// Program: This program can find out "Large number"


#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout <<"Enter 2 number: ";
    cin >> num1 >> num2;

    int max = (num1 > num2) ? num1 : num2;
    cout << "\nLarge number is: " << max << endl;

                cout << "\nAnother Program\n";
    // This program can find out "Even OR Odd"

    (num1 % 2 == 0) ? cout<<num1<<" is Even" : cout<<num1 <<" is Odd";

    return 0;
}