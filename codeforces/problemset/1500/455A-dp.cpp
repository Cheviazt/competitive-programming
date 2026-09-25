#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (int i = 0; i < (n); i++)
#define pb push_back
#define fi first
#define se second

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;

const ll INF = 1e18;
const int MOD = 1e9+7;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

//fpb
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

//kpk
ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

void solve(){
    
    ll n; cin >> n;
    const int MAX = 100005;
    vector<ll> arr(n+1, 0), dp(n+1, 0);

    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        arr[x]++;
    }

    dp[0] = 0;
    dp[1] = arr[1];

    for (ll i = 2; i <= n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + arr[i] * i);
    }

    cout << dp[n] << endl;

}

int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}