#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int sum=0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % 2) {
            cout << "NO" << endl;
            continue;
        }

        int target = sum/2;
        vector<bool> dp(target+1, false);
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            for (int j = target; j >= v[i]; j--) {
                dp[j] = dp[j] || dp[j-v[i]];
            }
        }
        cout << (dp[target] ? "YES" : "NO") << endl;

    }
    
}
