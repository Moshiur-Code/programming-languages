// Switch statement: To check user input is vowel or not.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Input: ";
    cin >> ch;

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << ch << " = Is vowel" << endl;
        break;

    default:
        cout << ch << " = It's not Vowel" << endl;
    }
}