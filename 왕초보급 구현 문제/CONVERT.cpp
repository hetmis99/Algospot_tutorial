#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	map<string, pair<double, string>> conversion_table;
	conversion_table["kg"] = make_pair(2.2046, "lb");
	conversion_table["lb"] = make_pair(0.4536, "kg");
	conversion_table["l"] = make_pair(0.2642, "g");
	conversion_table["g"] = make_pair(3.7854, "l");

	int tests;
	cin >> tests;
	for (int i = 1; i <= tests; i++) {
		double target;
		string unit;
		cin >> target >> unit;

		cout << fixed;
		cout.precision(4);
		cout << i << " " << target * conversion_table[unit].first << " " << conversion_table[unit].second << endl;
	}
}