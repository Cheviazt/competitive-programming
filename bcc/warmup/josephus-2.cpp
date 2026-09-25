#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ll n; cin >> n;

    ll p = 1;
    while (p * 2 <= n) {
        p *= 2;
    }

    cout << 2 * (n-p) + 1 << "\n";

}