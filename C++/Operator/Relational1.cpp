/*Program : This program can calculate 
    "Even or Odd" Numbers
*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 != 0) // (OR  num % 2 == 0)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }

    return 0;
}