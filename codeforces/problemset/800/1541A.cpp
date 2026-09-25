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

// 1 2 3 4 
// 1 1 1 3 = 6
// 1 1 1 1 = 4
// 1 2 3 4 5
// 5 1 2 3 4
// 2 1 4 3 5


// 5 1 2 3 4 
// 4 1 1 1 1 = 8


//ans
// 3 1 2 5 4 
// 2 1 1 1 1 

//ans
// 3 1 2 5 4 7 6

// 7 1 2 3 4 5 6 

void solve(){
    int n; cin >> n;

    if (n%2==1){
        cout << 3 << " " << 1 << " " << 2 <<  " ";
        for (int i = 4; i <= n; i++) {
            if (i%2==0)cout << i+1 << " ";
            else cout << i-1 << " ";
        }
        cout << endl;
    }else{
        for (int i = 1; i <= n; i++) {
            if (i%2==0)cout << i-1 << " ";
            else cout << i+1 << " ";
        }
        cout << endl;
    }
}

int main(){
    bismillah;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}