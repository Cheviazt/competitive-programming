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

int josephus(int n, int k) {
    int res = 0; // J(1, k) = 0
    for(int i = 2; i <= n; i++) {
        res = (res + k) % i;
    }
    return res;
}

//kpk
ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

void solve(){
    int n,q; cin >> n >> q;
    vi v(n), pref(n+1);

    fr(i,n) cin>>v[i];

    pref[0] = (v[0] % 2 == 0);
    // cout << pref[0] << " ";

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + (v[i]%2==0);
        // cout << pref[i] << " ";
    }
    // cout << endl;

    fr(i,q) {
        int l,r; cin>>l>>r;
        cout <<pref[r]-pref[l == 0 ? 0 : l-1] << endl;
    }
}

int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}