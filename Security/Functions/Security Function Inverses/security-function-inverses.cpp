#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n,temp;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> temp;
        v[temp - 1] = i + 1;
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }
    return 0;
}
