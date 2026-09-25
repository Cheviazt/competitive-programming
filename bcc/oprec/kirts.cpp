#include <bits/stdc++.h>

using namespace std;

int main () {

    // 1 1 1 1 1 2 2 2 3 3 4 4 4 5 5 5 = 3
    // 12
    // 1 1 1 1 1 1 1 1 1 1 2

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        if (n==0) {
            cout << 0 << "\n";
            continue;
        }
        
        map<int, int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v[x]++;
        }

        int sizemaks = 0;
        for (auto x : v) {
            sizemaks = max(x.second, sizemaks);
        }

        int ans=0;
        for (int i = 1; i <= sizemaks; i++) {
            int maks = 0;
            for (auto x : v) {
                if (x.second >= i) {
                    maks += i;
                }
            }
            ans = max(maks, ans);
        }

        cout << ans << "\n";
    }

}