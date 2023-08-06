#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() 
{
    string str;
    cout << "Enter Name: ";
    cin >> str;

    reverse(str.begin(), str.end());
    
    cout << "Reverse String: " << str;
}