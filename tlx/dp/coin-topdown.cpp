#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

using namespace std;

const int maks = 5000001;
int dp[maks], a[501], n;
bool cek[maks];

int solve(int k) {

    if (k == 0) return 0;
    if (cek[k]) return dp[k];

    int best = 1e9;
    for (int i = 0; i < n; i++) {
        if (a[i] <= k){
            int sub = solve(k-a[i]);
            if (sub != 1e9){
                best = min(best, sub+1);
            }
        }
    }

    cek[k] = true;
    dp[k] = best;
    return best;
}

int main () {

    bismillah;

    int k; cin >> n;
    for (int i = 0; i < n; i++) cin>>a[i];
    cin>>k;
    int ans = solve(k);
    if (ans == 1e9) {
        cout << "-1" << endl;
    }else{
        cout << ans << endl;
    }

}