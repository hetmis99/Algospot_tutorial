#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int tests;
	cin >> tests;
	while (tests--) {
		string str;
		cin >> str;
		for (int i = 0; i <= str.length() - 1; i+=2) {
			cout << str[i];
		}
		for (int i = 1; i <= str.length() - 1; i+=2) {
			if (str.length() == 1)continue;
			cout << str[i];
		}
		cout << endl;
	}
}