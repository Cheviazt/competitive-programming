#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    ll n; cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;
    
}
