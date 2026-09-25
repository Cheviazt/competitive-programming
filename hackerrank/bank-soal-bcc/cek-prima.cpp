#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    ll batas = sqrt(n);
    for (ll i = 3; i <= batas; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    ll n;
    cin >> n;
    cout << (isPrime(n) ? "Ya" : "Tidak") << endl;
}