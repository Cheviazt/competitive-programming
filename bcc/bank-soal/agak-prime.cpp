#include <bits/stdc++.h>
#define ll long long

using namespace std;

int prime(ll n) {

    int cnt=0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
        if (cnt > 4) break;
    }

    return cnt;
}

void solve(){

    int n;cin >> n;
    int ans = prime(n);

    // cout << v[n] << endl;
    cout << ((ans <= 4) ? "YA" : "BUKAN") << "\n";
    
}

int main () {

    int t;cin>>t;
    while(t--){
        solve();
    }

}