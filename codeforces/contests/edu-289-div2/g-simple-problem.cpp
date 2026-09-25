#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> k(m);
        for (int i = 0; i < m; i++) cin >> k[i];

        int g = k[0];
        for (int i = 1; i < m; i++) {
            g = gcd(g, k[i]);
        }

        if (g > 1) {
            cout << -1 << "\n";
            continue;
        }

        // konstruksi sederhana: 0 1 2 ... n-1
        for (int i = 0; i < n; i++) {
            cout << i << " ";
        }
        cout << "\n";
    }
}