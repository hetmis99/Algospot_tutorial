#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void define_coordinate(set<int>& s, int key) {
	if (s.find(key) != s.end()) {
		s.erase(key);
	}
	else {
		s.insert(key);
	}
}

int main() {
	int tests;
	cin >> tests;
	while (tests--) {
		set<int> set_x, set_y;
		for (int i = 0; i < 3; i++) {
			int tmp1, tmp2;
			cin >> tmp1 >> tmp2;

			define_coordinate(set_x, tmp1);
			define_coordinate(set_y, tmp2);
		}
		cout << *set_x.begin() << ' ' << *set_y.begin() << '\n';
	}
}