#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ll n,q;
    cin >> n >> q;
    // vector<int> arr(n);

    // for(auto &a : arr) a = 0;

    ll left = 0, right = 0;
    for (ll i = 0; i < q; i++) {
        ll t,x,y; cin >> t >> x >> y;
        if(t == 1) {
            left += y;
            if (x == n) right += y; 
        }else{
            right -= y;
            if (x == n) left -= y; 
        }
    }

    ll maks = max(abs(right), abs(left));
    cout << maks << endl;

}