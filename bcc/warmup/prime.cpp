#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll maks = 1e7+1;
vector<bool> prime(maks, true);

void sieve () {
    prime[0] = prime[1] = false;
    
    for (int i = 2; i*i <= maks; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= maks; j+=i) {
                prime[j] = false;
            }
        }
    }
}

int main () {

    sieve();
    int n;cin>>n;
    cout << (prime[n] ? "YES" : "NO") << "\n";

}