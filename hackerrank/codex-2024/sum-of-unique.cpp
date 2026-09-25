#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include <numeric>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll const MOD = 1e9+7;
#define nn ll n; cin >> n;
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
typedef tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

ll maxx = -1e9;

ll ans(vector<vector<ll>> v, ll n, ll m, ll tm){
    if(n > 0) return ans(v, n-1, m, tm);
    if(m < tm) return ans(v, n, m+1, tm);
}
 
void solve(){
    vector<bool> isPrime(20000000, true);
    vector<int> primes;
    vector<ll> pref;
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i*i <= 20000000; i++) {
        if(isPrime[i]){
            for(ll j = i*i; j <= 20000000; j+=i){
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= 20000000; i++){
        if(isPrime[i]) primes.pb(i);
    }

    pref.resize(primes.size(), 0);
    for (int i = 1; i < primes.size(); i++) {
        pref[i] = pref[i-1] + primes[i-1];
    }


    nn; // ll n ; cin >> n;
    fr(i, n){
        ll a, b; cin >> a >> b;
        cout << pref[b] - pref[a-1] e;
    }
} 
 
int main(){
    //freopen("input.txt", "r", stdin);
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    fastio();
    onet;
    //mult;

    while (t--) {
        solve();
    }
    return 0;
} 