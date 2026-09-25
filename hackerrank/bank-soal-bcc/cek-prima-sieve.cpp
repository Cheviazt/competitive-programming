#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll n) {
    if (n < 2) return false;

    bool prima[n+1];
    for (ll i = 0; i <= n; i++) prima[i] = true;

    prima[0] = prima[1] = false;

    for (ll i = 2; i <= sqrt(n); i++) {
        if (prima[i]) {
            for (ll j = i*i; j <= n; j += i) {
                prima[j] = false;
            }
        }
    }

    return prima[n];
}

int main () {

    ll n;
    cin >> n;

    isPrime(n) ? cout << "Ya" : cout << "Tidak" << endl;
}