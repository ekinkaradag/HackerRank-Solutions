#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
	string result = "";
	string ampm = s.substr(8, 2);
	string hh = s.substr(0, 2);
	string mm = s.substr(3, 2);
	string ss = s.substr(6, 2);

	if (hh == "12" && ampm == "AM")
		result = "00:" + mm + ":" + ss;

	else if (hh == "12" && ampm == "PM")
		result = "12:" + mm + ":" + ss;

	else if (ampm == "AM")
		result = hh + ":" + mm + ":" + ss;

	else if (ampm == "PM")
		result = to_string(stoi(hh) + 12) + ":" + mm + ":" + ss;

	else
		return "Invalid Input!";

	return result;

}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
