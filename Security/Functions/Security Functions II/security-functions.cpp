#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the function below.
 */
int function(int x) {
    return x*x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int x;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = function(x);

    fout << result << "\n";

    fout.close();

    return 0;
}