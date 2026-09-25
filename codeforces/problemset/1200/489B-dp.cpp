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
    int n,m; cin >> n;
    vi b(n+1);
    frr(i,n) cin>>b[i];
    
    cin>>m;
    vi g(m+1);
    frr(i,m) cin>>g[i];

    sort(b.begin()+1, b.end());
    sort(g.begin()+1, g.end());

    int dp[105][105]={0};
    frr(i,n){
        frr(j,m){
            dp[i][j]=max(dp[i-1][j], dp[i][j-1]);

            if(abs(b[i]-g[j]) <= 1){
                dp[i][j]=max(dp[i][j], dp[i-1][j-1]+1);
            }
            // debug(dp[i][j]);

        }
    }
    cout << dp[n][m]<<endl;
}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}