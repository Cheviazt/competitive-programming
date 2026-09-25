#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <numeric>
// みなとあくあ
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int factmod(int n, int p) {
    vector<int> f(p);
    f[0] = 1;
    for (int i = 1; i < p; i++)
        f[i] = f[i-1] * i % p;

    int res = 1;
    while (n > 1) {
        if ((n/p) % 2)
            res = p - res;
        res = res * f[n%p] % p;
        n /= p;
    }
    return res;
}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  
ll const MOD = 1e9 + 7;
const ll MAXN = 2e6 + 5;
ll fact[MAXN], inv_fact[MAXN];
void precompute() {
    fact[0] = 1;
    for (ll i = 1; i < MAXN; i++)
        fact[i] = fact[i-1] * i % MOD;
    inv_fact[MAXN-1] = expo(fact[MAXN-1], MOD-2, MOD);
    for (ll i = MAXN-2; i >= 0; i--)
        inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
}
ll C(ll n, ll m) {
    if (m < 0 || m > n) return 0;
    return fact[n] % MOD * inv_fact[m] % MOD * inv_fact[n-m] % MOD;
}
#define nn ll n; cin >> n;
#define nm ll n, m; cin >> n >> m;
#define onet ll t = 1;
#define mult ll t; cin >> t;
#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for (ll i=1;i<n;i++)
#define frc(i, n, m) for(ll i = m; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define e << '\n'
#define sp << " " <<
#define all(v) v.begin(), v.end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define ve(name, n) vector<ll> name(n)
#define vec(name) vector<ll> name;
typedef tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif  


void non(ll s, ll ee, vector<ll>& count1, vector<vector<ll>>& adj)
{
    vector<ll>::iterator u;
    count1[s] = 1;
    for (u = adj[s].begin(); u != adj[s].end(); u++) {
        if (*u == ee)
            continue;
        non(*u, s, count1, adj);
        
        count1[s] += count1[*u];
    }
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> count1(n+1);
    vector<ll> cek(n+1);
    cek[0] = 1;
    vector<vector<ll>> adj(n+1);
    fr(i, m){
        ll x, y; cin >> x >> y;
        cek[x] = 1;
        adj[y].pb(x);
    }
    vector<ll> root;
    fr1(i, n+1){
        if(!cek[i]){
            root.pb(i);
        }
    }
    fr(i, sz(root)){
        non(root[i], 0, count1, adj);
    }
    ll temp = 1;
    fr1(i, n+1){
        temp = (temp * count1[i]) % MOD;
    }
    cout << mod_div(fact[n], temp, MOD);
}

int main(){
    //freopen("input.txt", "r", stdin);
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    fastio();
    onet;
    precompute();
    //mult;

    while (t--) {
        solve();
    }
    return 0;
} 