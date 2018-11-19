#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int altitude=0,answer=0;
    bool belowSea= false; //In the beginning, he is at sea level

    for (int i = 0; i < n; i++) {
      if (s[i] == 'U') 
        ++altitude;
      else 
        --altitude;

      //Count valleys
      if (!belowSea && altitude < 0) {
        ++answer;
        belowSea = true;
      }

      if (altitude >= 0) // Return to above sea level
        belowSea = false;
    }
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
