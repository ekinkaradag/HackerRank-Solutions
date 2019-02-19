#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, temp;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> temp;
        v[i] = temp;
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        vector <int>::iterator low = lower_bound(v.begin(), v.end(), temp);
        if (v[low - v.begin()] == temp)
            cout << "Yes " << (low - v.begin() + 1) << endl;
        else
            cout << "No " << (low - v.begin() + 1) << endl;
    }
    return 0;
}