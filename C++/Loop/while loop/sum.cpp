// program: This program can calculate sum of your input.

#include<iostream>
using namespace std;

void while_loop() {

    int i, sum = 0, n;
    cout << "Input your number range (1 to 40): ";
    cin >> i >> n;
    
    while (i <= n)
    {
        sum += i;
        i++;
    }

    cout << "Sum is " << i << " form " << n << " = " << sum << endl;
    
}

int main()
{
    while_loop();
    return 0;
}