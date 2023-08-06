// Array: Declaration and initialization of an array 

#include<iostream>
using namespace std; 

int main()
{
    int marks[] = {11, 12, 13, 14, 15};

    int size = sizeof(marks) / sizeof(marks[0]);

    // cout << size << endl;
    // cout << sizeof(marks) << endl;

    for(int i = 0; i<size; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}