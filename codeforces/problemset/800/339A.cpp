#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;
    vector<int> data;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            data.push_back(s[i] - '0');
        }
    }

    sort(data.begin(), data.end());

    for (int i = 0; i < data.size(); i++) {
        cout << data[i];
        if (i != data.size()-1) {
            cout << "+";
        }
    }

}