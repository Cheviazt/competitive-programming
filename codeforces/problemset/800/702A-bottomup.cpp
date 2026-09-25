#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

// 1 2 3 4 5 4 1 2
// 1 2 3 4 5 1 1 1
// 5

int main () {
    bismillah
    
    int n; cin >> n;
    vector<int> v(n), dp(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (v[i-1] < v[i]){
            dp[i] = dp[i-1]+1;
        }

        ans = max(ans, dp[i]);
    }

    cout << ans << endl;

}