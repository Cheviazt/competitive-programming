#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll bilPangkat(ll n) {
    ll ans = 1;

    for (ll i = 1; i <= n; i++) {
        ll pangkat = 1;
        for (ll j = 1; j <= i; j++) {
            pangkat *= 2;
        }
        if (pangkat <= n) {
            ans = pangkat;
        } else {
            break;
        }
    }

    return ans;
}

int main () {
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;

        cout << 2 * (n - bilPangkat(n)) + 1 << endl;
    }

}