// String: How to calculate string length?

#include<iostream>
using namespace std;

int String_Length(char name[]) {
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    
    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name: " << name << endl;
    cout << "Length of name: " << String_Length(name) << endl;

    return 0;
}