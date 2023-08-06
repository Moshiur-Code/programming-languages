#include<iostream>
using namespace std;

int main()
{
    int row, col, array1[3][4];

    cout << "Enter the elements for the matrix" << endl;

    // int array1[3][4] = {{1,2,3,4}, 
    //                     {11, 12, 13, 14}, 
    //                     {21, 22, 23, 24} };

    for(row = 0; row < 3; row++) {
        
        for(col = 0; col < 4; col++) {
            cout << "Array [" << row << "] [" << col << "] = ";
            cin >> array1[row][col];
        }
    }


    for(row = 0; row < 3; row++) {
        cout << "Row " << row+1 << " = ";
        for(col = 0; col < 4; col++) {

            cout << array1[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}