#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> arr(n);
        ll mak = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            mak = max(mak, arr[i]); 
        }

        sort(arr.begin(), arr.end());

        ll l = arr[0], r = arr[n-1] + k, res = l;

        while (l <= r) {
            ll mid = (l+r)/2, req = 0;

            for(ll d : arr){
                if(d < mid){
                    req += (mid - d);
                }
            }

            if(req <= k){
                res=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }

        cout << res << endl;
    }
}