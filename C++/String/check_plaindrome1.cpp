//  Check palindrome?

#include<iostream>
using namespace std;


bool check_palindrome(char m[], int n) {
    int s = 0; 
    int e = n - 1; 

    while (s < e) {
        if(m[s] != m[e]) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

int reverse(char name[], int n) {
    int s = 0; 
    int e = n - 1;

    while (s < e) {       
        swap(name[s++], name[e--]);
    }
}


int get_length(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != 0; i++) {
        count++;
    }
    return count;
}


int main() {

    char name[20];
    cout << "Enter your name: ";
    cin  >> name;

    int len = get_length(name);
    cout << "Length of your name: " << len << endl;

    reverse(name, len);
    cout << "Reverse of your name: " << name << endl;

    cout << "Palindrome or Not: " << check_palindrome(name, len) << endl;

    return 0;
}