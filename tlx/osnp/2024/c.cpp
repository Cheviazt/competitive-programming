#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main () {

    ll n,d; cin >> n >> d;
    vector<ll> v(n);
    for(ll &i : v) cin >> i;
    sort(v.begin(), v.end());
    ll l=0,r=v[n-1],ans=-1;
    while (l <= r) {
        ll mid = (l+r)/2,total=0;
        for (ll i = 0; i < n; i++) {
            if(v[i] > mid){
                total += v[i]-mid; 
                // v[i]-=d;
            }
        }
        if (total >= d){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    cout << ans << endl;

}