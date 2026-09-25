#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (ll i = 0; i < (n); i++)
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

const int MAX = 1000001;
bool is_prime[MAX];
set<ll> tprimes;

void precompute() {
    fill(is_prime, is_prime + MAX, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAX; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p < MAX; p++) {
        if (is_prime[p]) {
            tprimes.insert((ll)p * p);
        }
    }
}

void solve(){

    ll n; cin >> n;

    if (tprimes.find(n) != tprimes.end()){
        cout << "YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
    
}

int main(){
    fastio;
    precompute();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}