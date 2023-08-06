// Power(a, b) 

#include<bits/stdc++.h>
using namespace std; 

void power_function() {
    int a, b; 
    cin >> a >> b;
    int ans = 1; 

    for(int i = 1; i<= b; i++) {
        ans = ans * a; 
    }

    cout << ans << endl;
}

int main() {

    power_function();
    
    return 0;
}