#include<iostream>
#include<conio.h>
using namespace std; 

int main()
{
    int a = 32;
    int b = 12; 
    int c;

    c = a & b; 
    cout << c << endl; 

    c = a | b; 
    cout << c << endl;

    c = a ^ b; 
    cout << c << endl;

    int r_shift = a >> 3; 
    cout << r_shift << endl;

    int l_shift = b << 2;
    cout << l_shift << endl;

    getch();
}