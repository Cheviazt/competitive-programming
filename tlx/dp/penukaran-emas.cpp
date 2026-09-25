#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int n; cin >> n;
    int dp[n+1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = max(i, dp[i/2] + dp[i/3] + dp[i/4]);
    }

    cout << dp[n] << endl;
    
}
