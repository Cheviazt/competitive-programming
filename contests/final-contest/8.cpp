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
/*
50
25
12

*/
void solve(){
    ll n,d; cin >> n >> d;
    vector<ll> v(n);
    for(ll &i : v) cin >> i;
    sort(v.begin(), v.end());
    ll l=0,r=v[n-1],ss=0;

    // if (d < n) {
    //     cout << v[d+1] << endl;
    //     return;
    // }

    while (l <= r) {
        ll mid = (l+r)/2,total=0;
        for (ll i = 0; i < n; i++) {
            if(v[i] >= mid && mid != 0){
                total += (v[i]/mid); 
                // v[i]-=d;
            }
        }
        // debug(mid);
        // debug(total);

        // if (total == d) {
        //     ss = mid;
        //     break;
        // }
        if (total >= d){
            l = mid+1;
            ss = mid;
        }else{
            r = mid-1;
        }
    }
    cout << ss << endl;
}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}