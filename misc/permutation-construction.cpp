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

    int n; cin>>n;

    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<1<< " " << 2 << endl;
        return;
    }

    vl arr(n,0);
    arr[0]=2;
    arr[n-1]=3;
    arr[(n-1)/2]=1;

    int cnt = 4;
    for (int i = 0; i < n; i++)
        if (arr[i] == 0) arr[i] = cnt++;

    for (int i = 0; i < n; i++)
        cout << arr[i] << (i == n-1 ?'\n' : ' ');



    // ll n;cin >> n;
    // vl arr(n),gp;
    // for(auto &x:arr){
    //     cin>>x;
    //     if(x%2==0)gp.pb(x);
    // }

    // // gnap
    // if (gp.size()>=2){
    //     cout<<gp[0]<<" "<<gp[1]<<endl;
    //     return;
    // }

    // for (int i = 0; i < n; i++)
    //     for (int j = i + 1; j < n; j++)
    //         if (arr[j] % arr[i] % 2 == 0) {
    //             cout << arr[i] << " " << arr[j] << endl;
    //             return;
    //         }

    // cout << -1 << endl;

    /*
    4
5
1 3 4 5 6
6
2 3 5 7 11 13
4
2 3 13 37
3
17 117 1117


    */

}

int main(){
    bismillah;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}