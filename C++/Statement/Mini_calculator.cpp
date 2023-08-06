// Mini Calculator 

#include<iostream>
using namespace std;

int main() {

  int a, b;
  char sign;
  cout << "Enter statement (10 sign 20):  ";
  cin >> a >> sign >> b;

  switch (sign)
  {
  case '+':
    cout << a + b << endl;
    break;
  case '-':
    cout << a - b << endl;
    break;
  case '*':
    cout << a * b << endl;
    break;
  case '/':
    cout << a / b << endl;
    break;
  case '%':
    cout << a % b << endl;
    break;

  default:
    cout << "Invalid input" << endl;
    break;
  }

  return 0;
}