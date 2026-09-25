#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;

    vector<pair<pair<int,int>, string>> v;
    for (int i = 0 ; i < n; i++) {
        string nama; cin >> nama;
        int a,b,c,d; cin >> a >> b >> c >> d;
        v.push_back({{-a-c, b+d}, nama});
    }

    sort(v.begin(), v.end());

    for (auto x : v) {
        cout << x.second << endl;
    }
}