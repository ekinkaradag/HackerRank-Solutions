#include <vector>
#include <iostream>
using namespace std;


int main() {
    unsigned long long result = 1;
    unsigned long long n;
    cin >> n;
    for(unsigned long long i = 1; i <= n; i++){
        result *=i;
    } 
    cout << result;
    return 0;
}