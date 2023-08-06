#include<iostream>
using namespace std;

int main()
{
    int i = 2, num;
    cout << "Enter number: ";
    cin >> num;

    for(i; i <= num; i= i + 2) {
        cout << "Even number is = " << i << endl;
    }
    return 0;
}