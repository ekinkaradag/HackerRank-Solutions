#include <vector>
#include <iostream>

using namespace std;


int main() {
    int n, q;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> q;
        v.push_back(q);
    }
    int x, a, b;
    cin >> x;
    cin >> a >> b;
    v.erase(v.begin()+ x-1);
    v.erase(v.begin()+ a - 1, v.begin() + b - 1 );

    cout << v.size() <<"\n";

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    return 0;
}