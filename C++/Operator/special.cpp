#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
    int a; 
    float f; 
    double d; 
    char ch; 
    char name[20];

    cout << setw(20) <<"Integer size = " << sizeof(a) << endl;
    cout << setw(20) <<"float size = "  << sizeof(f) << endl;
    cout << setw(20) <<"double size = " << sizeof(d) << endl;
    cout << setw(20) <<"character size = " << sizeof(ch) << endl;
    cout << setw(20) <<"string size = " << sizeof(name) << endl;

    cout << endl;

    cout << "Now i will use \"Comma\" operator" << endl;

    int x, y, sum;
    sum = (x = 20, y = 30, sum = x + y);
    cout << "sum is = " << sum << endl;

    return 0;

}