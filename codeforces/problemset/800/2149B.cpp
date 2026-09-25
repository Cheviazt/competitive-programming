#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++ ) {
            int a; cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        int maks = 0;
        for (int i = 0; i < n; i+=2) {
            maks = max(abs(v[i] - v[i+1]), maks);
        }

        cout << maks << endl;
    }

}