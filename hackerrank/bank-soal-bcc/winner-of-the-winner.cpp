#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    map<string, int> mp;
    string nama;

    for (int i = 0; i < n; i++) {
        cin>>nama;
        mp[nama]++;
    }

    int max = 0;
    string ans;
    for (auto data : mp) {
        if (data.second > max) {
            max = data.second;
            ans = data.first;
        }
    }

    cout << ans << endl;

}