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
    bool arr[n][n];
    fr(i,n){
        string s; cin >> s;
        fr(j,n){
            if (s[j] == '#') arr[i][j] = false;
            else arr[i][j] = true;
        }
    }

    // fr(i,n){
    //     fr(j,n){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    bool flag = true;
    for (ll i = 1; i < n-1; i++) {
        for (ll j = 1; j < n-1; j++) {    
            if (arr[i][j] && arr[i+1][j] && arr[i-1][j] && arr[i][j-1] && arr[i][j+1]) {
                arr[i][j] = arr[i+1][j] = arr[i-1][j] = arr[i][j+1] = arr[i][j-1] = false;
            }
        }
    }

    // fr(i,n){
    //     fr(j,n){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    fr (i,n){
        fr(j,n){
            if (arr[i][j]) {
                flag = false;
                break;
            }
        }
    } 

    cout << (flag ? "YES" : "NO") << endl;

}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}