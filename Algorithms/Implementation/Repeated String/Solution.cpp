#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0, total = 0;
    for(int i = 0; i < s.length() ; i++){
        if (s[i] == 97){ //97 represents 'a' in decimal from the ASCII table
            count++;
        }
    }
    total = (n / s.length()) * count + total;

    for(int i = 0; i < n % s.length(); i++){
        if (s[i] == 97){
            total++;    
        }
    }
    return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
