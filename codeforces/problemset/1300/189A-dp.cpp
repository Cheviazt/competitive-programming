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
    
    int n,a,b,c;cin>>n;
    vi dp(n+1, -1e9), rib(3);
    fr(i,3) cin>>rib[i];

    dp[0] = 0;
    fr(i,n+1){
        if(i==0) continue;
        fr(j,3){
            if(rib[j] <= i){
                if(dp[i-rib[j]] != -1e9){
                    dp[i] = max(dp[i], dp[i-rib[j]]+1);
                }
            }
        }
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