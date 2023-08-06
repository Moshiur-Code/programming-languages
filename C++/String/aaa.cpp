#include <iostream>
using namespace std;

char no_case(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool check_palindrome(char a[], int n) {
    int s = 0; 
    int e = n - 1; 
    
    while(s < e) {

        if(a[s] != a[e]) {
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
    cin >> name; 
    
    int size = get_length(name);
    cout << "Length: " << size << endl;

    reverse(name, size);
    cout << "Reverse of your name: " << name << endl;
    
    cout << "Palindrome: " << check_palindrome(name, size) << endl;
    
    cout << "Character: " << no_case('M') << endl;

    return 0;
}