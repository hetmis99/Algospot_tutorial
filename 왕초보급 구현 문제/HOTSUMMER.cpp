#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int tests;
	cin >> tests;
	for (int i = 1; i <= tests; i++) {
		int goal, sum = 0;
		cin >> goal;
		for (int j = 0; j < 9; j++) {
			int tmp;
			cin >> tmp; 
			sum += tmp;
		}
		if (sum <= goal)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}