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

bool prime[10000000] = {true};

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }   
    return true;
}
 
void solve(){
    nn;
    vector<ll> a(n);
    vector<ll> b(n);
    fr(i, n) cin >> a[i];
    fr(i, n) cin >> b[i];
    ll mina = 0, minb = 0;
    fr(i, n){
        ll maxx = max(a[i], b[i]);
        if(maxx == 0) continue;
        else if(maxx == 1){
            if(mina == minb) mina++;
            else if(mina > minb) minb++;
            else mina++;
        }
        else{
            if(mina == minb) mina--;
            else if(mina > minb) mina--;
            else minb--;
        }
    }
    cout << min(mina,minb) e;
} 
 
int main(){
    //freopen("input.txt", "r", stdin);
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    fastio();
    //onet;
    mult;

    while (t--) {
        solve();
    }
    return 0;
} 