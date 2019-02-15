#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n,temp;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> temp;
        v[i] = temp;
    }
    for(int i = 0; i < n; i++){
        cout << v[v[i] - 1] <<"\n";
    }
    return 0;
}