#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
 
    ll n; cin >> n;

    ll maks=0, temp, ans=LLONG_MIN;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        
        if (i==0){
            temp = x;
            maks=1;
            ans = max(ans, maks);
            continue;
        }

        if (x > temp){
            maks++;
            temp = x;
        }else{
            temp = x;
            ans = max(ans, maks);
            maks=1;
        }
        ans = max(ans, maks);
    }

    cout << ans << endl;
    
}