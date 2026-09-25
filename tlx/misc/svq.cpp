#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD = 1e6;
bool gede = false;

ll pangkat(ll a, ll  b) {
    if (b == 1) return a % MOD;

    ll half = pangkat(a,b/2);
    
    if(half >= MOD) gede = true;
    half %= MOD;
    
    half *= half;
    if(half >= MOD) gede = true;
    half %= MOD;

    if(b & 1) {
        half *= a;
        if(half >= MOD) gede = true;
        half %= MOD;
    }

    return half;
}

int main () {

    ll a,b;
    cin >> a >> b;
    ll ans = pangkat(a,b); 
    
    if(ans < 1e5 && gede) {
        if(ans > 1e4) {
            cout << "0" << ans;
        } else if(ans > 1e3) {
            cout << "00" << ans;
        } else if(ans > 1e2) {
            cout << "000" << ans;
        } else if(ans > 10) {
            cout << "0000" << ans;
        } else {
            cout << "00000" << ans;
        }
    } else {
        cout << ans;
    }

}