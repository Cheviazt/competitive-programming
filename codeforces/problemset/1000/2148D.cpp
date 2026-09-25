#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    int n; cin >> n;

    while (n--) {
        ll a,ans=0; cin >> a;
        vector<ll> genap, ganjil;
        for (ll i = 0; i < a; i++) {
            ll x; cin >> x;
            if (x % 2 == 0) {
                genap.push_back(x);
            } else {
                ganjil.push_back(x);
            }
        }

        if (ganjil.size() == 0) {
            cout << ans << endl;
            continue;
        }

        sort(ganjil.begin(), ganjil.end(), greater<ll>());

        int cnt = 0;
        for (ll i = 0; i < ganjil.size(); i++) {
            if (i % 2 == 0) {
                ans += ganjil[cnt];
                cnt++;
            }
        }
        for (ll b : genap) {
            ans += b;
        }

        cout << ans << endl;

    }

}