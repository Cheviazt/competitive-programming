#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ll n,k;cin>>n>>k;
    ll a[n],b[k];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];

    ll pref[n];
    pref[0] = a[0];
    for (int i = 1; i < n; i++) pref[i] = a[i] + pref[i-1];

    int ans;
    for (int i = 0; i < k; i++) {
        int l=0,r=n-1, ans=-1;
        if (b[i] > pref[n-1]){
            cout << n << "\n";
            continue; 
        }
        while (l <= r) {
            int tengah = (l+r)/2;
            if (b[i] >= pref[tengah]) {
                ans = tengah;
                l = tengah+1;
            }else{
                r = tengah-1;
            }
        }

        cout << ans+1 << "\n";
    }

}