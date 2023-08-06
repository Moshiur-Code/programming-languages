// Statement with anisul islam C++ Tutorial - video no - 21

#include<iostream>
using namespace std; 

int main() 
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num > 0) {
        cout << "positive" << endl;
    } 
    else if (num < 0) {
        cout << "Negative" << endl;
    } 
    else {
        cout << "Zero" << endl;
    }
    return 0;
}