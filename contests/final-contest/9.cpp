#include <bits/stdc++.h>
using namespace std;

// ██████╗░██╗░██████╗███╗░░░███╗██╗██╗░░░░░██╗░░░░░░█████╗░██╗░░██╗
// ██╔══██╗██║██╔════╝████╗░████║██║██║░░░░░██║░░░░░██╔══██╗██║░░██║
// ██████╦╝██║╚█████╗░██╔████╔██║██║██║░░░░░██║░░░░░███████║███████║
// ██╔══██╗██║░╚═══██╗██║╚██╔╝██║██║██║░░░░░██║░░░░░██╔══██║██╔══██║
// ██████╦╝██║██████╔╝██║░╚═╝░██║██║███████╗███████╗██║░░██║██║░░██║
// ╚═════╝░╚═╝╚═════╝░╚═╝░░░░░╚═╝╚═╝╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝

#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (ll i = 0; i < (n); i++)
#define frr(i,n) for (ll i = 1; i <= (n); i++)
#define pb push_back
#define fi first
#define se second
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define maxx(a,b,c) max((a), max((b),(c))
#define minn(a,b,c) min((a), min((b),(c))

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

ll fpb(ll a, ll b){
    if(b == 0) return a;
    return fpb(b, a % b);
}

ll kpk(ll a, ll b){
    return a / fpb(a,b) * b;
}

void solve(){
    
    ll n,m; cin >> n >> m;
    vector<ll> arr(n);
    fr(i,n){
        cin >> arr[i];
    }

    vector<ll> pref(n+1);
    pref[0] = 0;
    
    for(ll i = 1; i <= n; i++){
        pref[i] = pref[i-1]+arr[i-1];
    }

    // sort(all(pref));

    ll ansr=1, ansl=1, temp=LLONG_MAX;
    ll l = 0, sum = 0;
    
    for (ll i = 0; i < n; i++) {
        
        while (l <= i) {
            ll sum = pref[i+1]-pref[l];
            ll diff = abs(sum-m);

            if (diff < temp) {
                temp = diff;
                ansr=i+1;
                ansl=l+1;
            }

            if (sum > m) {
                l++;
            }else break;
        }
    }

    cout << ansl << " " << ansr << endl;

}

int main(){
    bismillah;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}