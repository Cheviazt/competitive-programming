#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main () {

    int t;cin>>t;

    while (t--) {
        ll n;cin >> n;
        ll ans = n*(n+1)/2;

        for(ll i = 2; i <= n; i*=2){
            ans-=i*2;
        }

        cout << ans-2 << endl;
    }

}