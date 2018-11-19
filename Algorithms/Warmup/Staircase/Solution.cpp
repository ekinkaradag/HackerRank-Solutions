#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    
    for(int i = 1; i <= n; i++){ //to create a line

        for (int j = n-1; j >=i; j--)
            cout << " ";

        for (int k = 1; k <= i; k++)
            cout << "#";

        cout << "\n";
    }
    
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
