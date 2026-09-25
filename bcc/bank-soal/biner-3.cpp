#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    int arr[n];
    int pref[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    pref[0] = arr[0];
    for(int i=1;i<n;i++) pref[i] = arr[i]+pref[i-1];

    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        int l=0,r=n-1;
        int ans;
        while(l <= r){
            int tengah = (l+r)/2;
            if (x <= pref[tengah]) {
                ans = tengah;
                r = tengah-1;
            }else{
                l = tengah+1;
            }
        }
        cout << ans+1 << "\n";
    }
}