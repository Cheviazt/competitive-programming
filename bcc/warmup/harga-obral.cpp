#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    int t;cin>>t;
    while(t--) {
        ll n;cin>>n;
        ll arr[n];
        vector<ll> hantu;
        for (ll i = 0; i < n; i++) cin>>arr[i];

        ll min = arr[0];
        for (ll i = 1; i < n; i++) {
            if (arr[i] >= min) {
                hantu.push_back(arr[i]);
            }else{
                min = arr[i];
            }
        }

        if(hantu.empty()){
            cout << 0 << "\n";
            continue;
        }

        sort(hantu.begin(), hantu.end());
        ll p = hantu[hantu.size()/2];

        ll total = 0;
        for (ll x : hantu) {
            total += llabs(x - p);
        }

        cout << total << "\n";
    }

}