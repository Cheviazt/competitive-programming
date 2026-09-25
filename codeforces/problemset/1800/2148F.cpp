#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<vector<int>> v(n);
        for (int i = 0; i<n; i++) {
            int k; cin >> k;
            vector<int> temp;
            for (int j = 0; j < k; j++) {
                int a; cin >> a;
                temp.push_back(a);
            }
            v[i] = temp;
        }

        
        sort(v.begin(), v.end());

        v[0].resize(v[n-1].size());

        for (int i = v[0].) {

        }

        // PUSING


    }

}