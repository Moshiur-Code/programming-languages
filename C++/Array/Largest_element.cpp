// 1. Write a C++ program to find the largest element of a given array of integers.

#include<iostream>
using namespace std;

int main()
{
    int n, max, min;
    cout << "How many numbers do you want give in this program: ";
    cin >> n;

    int array1[n];

    for(int i = 0; i<n; i++) {
        cout << "Input Array Element " << i+1 << " = ";
        cin >> array1[i];
    }

    cout << endl;

    for(int i = 0; i<n; i++) {
        cout << "Output Array Element " << i+1 << " = " << array1[i] << " " << endl;
    }

    max = array1[0];
    min = array1[0];

    for(int i = 0; i<n; i++) {
        if(max < array1[i]) {
            max = array1[i];
        }
        if (min > array1[i]) {
            min = array1[i];
        }
    }
    cout << endl;

    cout << "Largest number: "  << max << endl;
    cout << "Minimum number: "  << min << endl;


    return 0;
}