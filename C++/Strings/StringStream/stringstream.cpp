#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> result(0);
	stringstream ss(str);
	char ch;
	int a;
	while(ss >> a){
		result.push_back(a);
		ss >> ch;
	}
	return result;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}
    
	return 0;
}