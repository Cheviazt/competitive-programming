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
    
    ll n;cin>>n;
    string s;cin>>s; s='0'+s;
    bool f = 1;

    for(int i=n, j=i-1; i>1; i-=2, j-=2){
        if(s[i]==s[j] && s[i]!='?'){
            f=0;
            break;
        }
    }
    if(n&1 && s[1]=='b') f=0;
    cout<<(f? "YES\n":"NO\n");
    
    // if (n%2==1 && s[0]!='a'){
    //     cout << "no" << endl;
    //     return;
    // }
    // if (n%2==1){
    //     for (ll i = 1; i*2+1<=n;i++) {
    //         if (s[i*2-1] != s[i*2]){
    //             cout << "yes" << endl;
    //             return;
    //         }
    //     }
    // }else{
    //     for (int i = 1; 2*i-1 <= n; i++) {
    //         if (s[2*i-1] != s[2*i-2]) {
    //             debug(s[2*i-1]);
    //             debug(s[2*i-2]);
    //             cout << "yes" << endl;
    //             return;
    //         }
    //     }
    // }

    // cout << "no" << endl;


}

int main(){
    bismillah;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}