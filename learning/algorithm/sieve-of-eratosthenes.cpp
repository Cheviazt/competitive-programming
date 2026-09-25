#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll maks = 1e7;
vector<ll> sip(maks+1, true);

void sieve() {
    sip[0] = sip[1] = false;

    for (ll i = 2; i * i <= maks; i++) {
        if(sip[i]){
            for (ll j = i * i; j <= maks; j+=i){
                sip[j] = false;
            }
        }
    }
}

int main () {

    sieve();
    int x;cin>>x;
    cout<<(sip[x] ? "Ya" : "Tidak");
    
}