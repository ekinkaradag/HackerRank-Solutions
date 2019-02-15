#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> m;

        if (find(v.begin(), v.end(), m) != v.end()) {
            cout << "NO";
            return 0;
        }
        v.push_back(m);
    }
    cout << "YES";
    return 0;
}
