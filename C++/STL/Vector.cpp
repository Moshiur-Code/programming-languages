// STL -- Vector

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    cout << v[0] << " " << v[1] << " " << v[2] << " " << endl;
    
    v.pop_back();
    v.push_back(11);

    cout << v[0] << " " << v[1] << " " << v[2] << " " << endl;

    return 0;
}