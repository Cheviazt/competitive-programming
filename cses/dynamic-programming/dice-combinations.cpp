#include <bits/stdc++.h>
#define ll long long

ll const MOD=1000000007;

using namespace std;

int main () {

    ll n; cin >> n;

    vector<ll> dp(n+5,0);
    dp[0]=1;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= 6; j++) {
            if (j <= i) {
                dp[i] = (dp[i]+dp[i-j]) % MOD;
            }else{
                continue;
            }
        }
    }

    cout << dp[n] << endl;

}