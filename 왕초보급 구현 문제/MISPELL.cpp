#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int tests;
	cin >> tests;
	for (int i = 1; i <= tests; i++) {
		int index;
		string str;
		cin >> index >> str;
		string result;
		result = str.substr(0, index - 1) + str.substr(index);

		cout << i << " " << result << endl;
	}
}