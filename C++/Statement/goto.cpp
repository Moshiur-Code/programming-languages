// goto statements

#include<iostream>
using namespace std;

void goto_statements() {
    int n = 1; 
    cout << "first 5 odd numbers are: ";
    jump: {
        if (n < 10) {
            cout << n << " ";
            n += 2;
            goto jump;
        }
    }
}


int main()
{
    goto_statements();
    
    return 0;
}