#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll josephus(ll n, ll k) {
    ll res = 0;
    for (ll i = 2; i <= n; i++) {
        res = (res + k) % i;
    }
    return res;
}

int main () {

    ll n;cin >> n;

    cout << josephus(n,2)+1 << "\n";
}