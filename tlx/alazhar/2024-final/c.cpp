#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
 
    int n,k,d; cin >> n >> k >> d;
    ll arr[n], dp[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);

    for (int i = 0; i < n; i++) {
        if (i < k) {
            dp[i] = arr[i]+d;
            continue;
        }
        ll start = max(dp[i-k], arr[i]);
        dp[i] = start + d;
    }

    cout << dp[n-1] << endl;
    
}