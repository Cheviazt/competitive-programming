#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
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
    
    int n;cin >> n;
    char arr[n][n];

    int x,y,xtemp,ytemp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];

            if (arr[i][j] == 'A'){
                y = i;
                x = j;
                xtemp = j;
                ytemp = i;
            }
        }
    }

    int zz; cin >> zz;

    fr(i,zz){
        string cmd; cin >> cmd;
        if (cmd == "ATAS") {
            if (y == 0) {
                y = n-1;
            }else{
                y--;
            }
        }else if (cmd == "BAWAH") {
            if (y == n-1) {
                y = 0;
            }else{
                y++;
            }
        }else if (cmd == "KIRI") {
            if (x == 0) {
                x = n-1;
            }else{
                x--;
            }
        } else if (cmd == "KANAN") {
            if (x == n-1) {
                x = 0;
            }else{
                x++;
            }
        }
    }

    arr[y][x] = 'A';
    arr[ytemp][xtemp] = '_';

    for (int i = 0; i < n; i++) {
        for (int j=0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}