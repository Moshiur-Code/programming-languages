#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter Number: ";
  int number, result;
  cin >> number;

  switch (number >= 100)
  {
  case 1:
    result = number / 100;
    number = number % 100;
    cout << result << endl;
    break;
  }

switch (number >= 50)
  {
  case 1:
    result = number / 50;
    number = number % 50;
    cout << result << endl;
    break;
}

switch (number >= 20)
  {
  case 1:
    result = number / 20;
    number = number % 20;
    cout << result << endl;
  break;
}

switch (number >= 10)
  {
  case 1:
    result = number / 10;
    number = number % 10;
    cout << result << endl;
    break;
}

switch (number >= 1)
  {
  case 1:
    result = number / 1;
    number = number % 1;
    cout << result << endl;
    break;
}

  return 0;
}
