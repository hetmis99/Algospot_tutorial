#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		string original;
		cin >> original;
		vector<string> arr;
		for (int i = 0; i < original.length() / 2; i++) {
			string tmp;
			tmp = original.substr(i * 2, 2);
			arr.push_back(tmp);
		}
		sort(arr.begin(), arr.end());

		string concatenated;
		vector<string>::iterator iter = arr.begin();
		for (; iter != arr.end(); iter++) {
			concatenated = concatenated + *iter;
		}
		cout << concatenated << endl;
		
	}
}