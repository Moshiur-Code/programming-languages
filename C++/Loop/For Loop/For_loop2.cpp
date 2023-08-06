/*(Example 2: 
Run a for loop in c++ to print all the even numbers between the given range (Left and Right). Given that both L and R even numbers. 
*/

#include<iostream>
using namespace std; 

int main()
{
    int L = 2, R = 20;

    for(int i = L; i <= R; i += 2) {
        cout << i << " ";
    }

    return 0;
}