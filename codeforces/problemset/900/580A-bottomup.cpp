#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int n; cin >> n;
    int arr[n+1], dp[n+1];

    for (int i = 0; i < n; i++) cin >> arr[i];
    
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i-1]) dp[i] = dp[i-1]+1;
        else dp[i] = 1;
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        // cout << dp[i] << endl;
        ans = max(dp[i], ans);
    }

    cout << ans << endl;
    
}