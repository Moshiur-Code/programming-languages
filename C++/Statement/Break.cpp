// Program: This is a break statement program.

#include<bits/stdc++.h>
using namespace std;

// Check if an array contains any negative value
void check_negative_value() {
    
    int array[6] = {1, 2, 3, 0, -1, 2};

    for (int i = 1; i < 6;  i++) {

        if(array[i] < 0) {
            cout << "Array contains negative value" << endl;
            break;
        }
    }
}


//  break with for loop
void for_loop() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i=1; i<10; i++) {

        cout << i << " ";
        
        if(array[i] == 5) { // The program will be stop when value is 5.
            break;
        }
    }
}



int main()
{
    cout << endl;
    check_negative_value();
    cout << endl;

    for_loop();
    cout << endl;


    return 0;
}
