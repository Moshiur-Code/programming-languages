#include<iostream>
using namespace std;

int main()
{
    double base, height, area;

    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Height: ";
    cin >> height;

    area = 0.5 * base * height;
    cout << "Area of triangle = " << area;
    
    return 0;
}