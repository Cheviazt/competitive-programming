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
    ll n; cin >> n;
    vector<pll> arr(n);
    fr(i,n){
        ll x; cin >> x;
        arr[i].first = x;
        arr[i].second = i+1;    
    }

    
    sort(all(arr));
    //cek
    ll cek = 0,tot=0;
    for (auto x : arr) {
        if (cek == x.first) continue;
        cek = x.first;
        tot++;
    }

    if (tot < 3){
        cout << -1 << " " << -1 << " " << -1 << endl;
        return;
    }

    ll temp = arr[0].first;
    cout << arr[0].second << " ";
    ll cnt = 1, i = 1;
    while(cnt < 3 && i < n){
        if (temp == arr[i].first) {
            i++;
            continue;
        }
        cout << arr[i].second << " ";
        temp = arr[i].first;
        i++;
        cnt++;
    }



    cout << endl;
}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}