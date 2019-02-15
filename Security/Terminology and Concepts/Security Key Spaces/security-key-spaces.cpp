#include <vector>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n[s.length()];
    int m;
    cin >> m;
    for(int i = 0; i < s.length(); i++){
        n[i] = int(s[i]);
        n[i] = (n[i] - '0' + m) % 10;
        cout << n[i];
    }
    
    return 0;
}
