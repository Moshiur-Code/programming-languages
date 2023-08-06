#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter Number of Student: ";
    cin >> n;

    int students[n];

    for(int i = 0; i<n; i++) {
        cout << "Marks for student " << i+1 <<" = " ; 
        cin >> students[i];
        sum = sum + students[i];
    }

    cout << "\nTotal marks: " << sum << endl;

    float avg = (float) sum / n;
    cout << "Average : " << avg << endl;

    int max = students[0];
    int min = students[0];

    for (int i = 0; i<n; i++) {
        if(max < students[i]) {
            max = students[i];
        }
        if(min > students[i]) {
            min = students[i];
        }
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;

}