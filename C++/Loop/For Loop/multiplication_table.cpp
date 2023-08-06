// Program: multiplication table

#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    for(i = 1; i<= 10; i++) {
        cout << setw(20) << num << " X " << i << "=" << (num*i) << endl;
    }
}