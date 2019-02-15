#include <string>
#include <iostream>

using namespace std;


int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if( s[i] != '9')
            s[i] = char(int(s[i] + 1));
        else
            s[i] = '0';
    }
    cout << s;
    return 0;
}
