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

ll n, k;
vl a, p;

bool check(ll x){
    // b[i] = +1 jika a[i] >= x, else -1 ; p = prefix sum
    p[0] = 0;
    frr(i, n) p[i] = p[i-1] + (a[i] >= x ? 1 : -1);

    ll cnt = 0;
    ll L = 1;          
    ll mn = INF;        

    frr(e, n){
        if(e >= L + 2){            
            mn = min(mn, p[e-3]);
            if(p[e] > mn){          
                cnt++;
                if(cnt >= k) return true;
                L = e + 1;
                mn = INF;
            }
        }
    }
    return cnt >= k;
}

void solve(){

    cin >> n >> k;
    a.assign(n+1, 0);
    p.assign(n+1, 0);
    frr(i, n) cin >> a[i];

    vl vals(a.begin()+1, a.end());
    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());

    ll lo = 0, hi = (ll)vals.size() - 1, ans = vals[0];
    while(lo <= hi){
        ll mid = (lo + hi) / 2;
        if(check(vals[mid])){
            ans = vals[mid];
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}