#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cek(ll x) {
    if (x < 2) return false;
    if (x == 2) return true; 
    if (x % 2 == 0) return false;
    
    for (ll i = 3; i*i <= x; i+=2) {
        if (x % i == 0) return false;
    }

    return true;
}

int main () {

    ll x;cin>>x;

    cout << (cek(x) ? "Ya" : "Tidak");

}