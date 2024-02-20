#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string toBinary(unsigned int n)
{
    string r;
    while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
    while (r.length()<32) { r = "0" + r; }
    return r;
}

int main() {
    int cases;
    cin >> cases;
    for (int j = 0; j < cases; j++) {

        unsigned int n;
        cin >> n;
        string str = toBinary(n);

        string converted = "";
        for (int i = 0; i < 4; i++) {
            converted = str.substr(i * 8, 8) + converted;
        }

        unsigned long decimal = std::bitset<32>(converted).to_ulong();
        std::cout << decimal << "\n";
    }
    return 0;
}
