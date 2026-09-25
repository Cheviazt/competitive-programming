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

    string s;
    cin >> s;

    int ganjil = 0, genap = 0;

    for (int i = 0; i < 6; i++) {
        int digit = s[i] - '0';
        if ((i+1) % 2 == 1)
            ganjil += digit;
        else
            genap += digit;
    }

    int selisih = abs(ganjil - genap);

    int x; cin >> x;
    vector<int> v(x);
    fr (i,x) cin >> v[i];

    int maxWindow, currentWindow = 0;

    fr (i,selisih*2+1) currentWindow += v[i];

    int window = selisih*2+1;
    int ans = selisih+1;

    maxWindow = currentWindow;

    // 1 2 3 4 5 6 7

    for (int i = 1; i <= x-window; i++) {
        currentWindow -= v[i-1];
        currentWindow += v[i+window-1];

        if (currentWindow > maxWindow) {
            maxWindow = currentWindow;
            ans = i+selisih+1;
        } 
    }

    cout << ans << endl;

}

int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}