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
    ll n;
    cin >> n;
    vl a(n);
    vector<pll> zz;
    
    fr(i, n){
        cin >> a[i];
        ll curr = a[i];
        ll dist = 0;
        
        if(curr == 1){
            zz.pb({1, 0});
            zz.pb({2, 1});
            continue;
        }
        if(curr == 2){
            zz.pb({2, 0});
            zz.pb({1, 1});
            continue;
        }
        
        while(curr > 2){
            zz.pb({curr, dist});
            if(curr % 2 == 0) curr /= 2;
            else curr++;
            dist++;
        }
        
        zz.pb({2, dist});
        zz.pb({1, dist + 1});
    }
    
    sort(all(zz));
    
    ll total = INF;
    ll m = zz.size();
    ll i = 0;
    
    while(i < m){
        ll target = zz[i].fi;
        ll cnt = 0;
        ll sum = 0;
        
        while(i < m && zz[i].fi == target){
            cnt++;
            sum += zz[i].se;
            i++;
        }

        if(cnt == n){
            total = min(total, sum);
        }
    }
    
    cout << total << endl;
}

int main(){
    bismillah;

    int t = 1;
    cin >> t; 
    while(t--){
        solve();
    }
    
    return 0;
}