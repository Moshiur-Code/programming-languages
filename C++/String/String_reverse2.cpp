// String: How to Reverse a string

#include<iostream>
using namespace std;


int reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s<e) {

        swap(name[s++], name[e--]);
    }
    
}

int Length(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != 0; i++) {
        count++;
    }

    return count;
}

int main() {
    char name[10];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name: " << name << endl;

    int size = Length(name);
    cout << "Length of your name: " << size << endl;
    
    reverse(name, size);
    cout << "Reverse String: " << name << endl;


}