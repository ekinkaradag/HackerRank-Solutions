#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int sum = INT_MIN;
    for (int i = 0; i < 4; i++) {
        for (int x = 0; x < 4; x++) {

            int top = arr[i][x] + arr[i][x + 1] + arr[i][x + 2];
            int middle = arr[i + 1][x + 1];
            int bot = arr[i + 2][x] + arr[i + 2][x + 1] + arr[i + 2][x + 2];
            
            if (sum < top + middle + bot)
                sum = top + middle + bot;
        }
    }
  return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
