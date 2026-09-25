#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cek[1500001];
vector<ll> primes;

void load() {

    for (int i = 0; i < 1500001; i++) {
        cek[i] = true;
    }

    cek[0] = cek[1] = false;
    for (int i = 2; i < 1500001; i++) {
        if (cek[i]) {
            primes.push_back(i);
            for (int j = i*i; j <= 1500001 && (ll)i*i<=1500001; j+=i) {
                cek[j] = false;
            }
        }
    }

}


//2
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    load();
    int t; cin >> t;
    while (t--) {
        int n;cin >> n;
        cout << primes[n-1] << "\n";
    }

}