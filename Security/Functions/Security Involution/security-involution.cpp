#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, temp;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> temp;
        v[i] = temp;
    }

    for(int i = 1; i <= n; i++){
        if(v[v[i]] != i){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}