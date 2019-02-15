#include <bits/stdc++.h>

using namespace std;

// Complete the calculate function below.
int calculate(int x) {
    return x % 11;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int x;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = calculate(x);

    fout << result << "\n";

    fout.close();

    return 0;
}