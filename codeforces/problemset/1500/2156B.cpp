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
 
void solve(){
    ll n, m; cin >> n >> m;
    string s; cin >> s;
    ll a = 0, b = 0;
    for (auto sss : s) {
        if(sss == 'A') a++;
        else b++;
    }
    fr(i, m){
        ll idx = 0;
        ll x; cin >> x;
        ll ans = 0;
        if(b == 0){
            cout << x e;
            continue;
        }
        while(x > 0){
            // if(s[idx] == 'A'){
            //     x--;
            // }
            // else x/=2;
            // idx = (idx + 1)%n;
            // ans++;
            for(auto a : s){
                if(x == 0) break;
                if(a == 'A'){
                    x--;
                }
                else x/=2;
                ans++;
            }
        }
        cout << ans e;
    }
} 
 
int main(){
    //freopen("input.txt", "r", stdin);
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
} 