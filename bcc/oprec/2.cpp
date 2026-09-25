#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (int i = 0; i < (n); i++)
#define pb push_back
#define fi first
#define se second

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

//fpb
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

//kpk
ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

void solve(){
    
    int n,m; cin >> n >> m;
    int arr[n+1][m+1];

    vector<pair<int,int>> maks;

    bool flag = true;

    int nummaks=0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] > nummaks) {
                nummaks = arr[i][j];
            }
        }
    }

    int numi=0, numj=0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++){
            if (arr[i][j] == nummaks){
                if (i != j) {
                    numi = i;
                    numj = j;
                }else{
                    if (numi == 0) {
                        numi = i;
                    }else if (numj == 0) {
                        numj = j;
                    }
                }
                break;
            }
        }
    }

    // cout << numi << numj;

    //


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] == nummaks) {
                if (!(i == numi || j == numj)) {
                    flag = false;
                }
            }
        }
    }



    if (flag) {
        cout << "YES" << "\n"; 
    }else{
        cout << "NO" << "\n";
    }



}

int main(){
    fastio;
    // int t;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}