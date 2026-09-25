#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int dp[50001], arr[501];

int main () {
    bismillah
    
    int n,k;
    cin >> n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    cin>>k;

    dp[0] = 0;
    for (int i = 1; i <= k; i++) {
        int best = 1e9;
        for (int j = 0; j < n; j++) {
            if (arr[j] <= i) {
                if (dp[i-arr[j]] != 1e9) best = min(best, dp[i-arr[j]]+1);
            }
        }
        dp[i] = best;
    }

    if (dp[k] != 1e9) cout << dp[k] << endl;
    else cout << "-1" << endl;
    
}