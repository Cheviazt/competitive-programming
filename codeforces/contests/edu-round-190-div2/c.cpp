#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t;
    cin >> t;

    while (t--) {

        int n;cin>>n;
        ll ged=0;
        ll atu=0;

        for (int i = 0; i < n; i++) {
            ll x;cin>>x;

            if (x == 1) atu++;
            else ged += x;
        }

        ll ans=ged+min(atu, ged/2);

        if (ans < 3) ans = 0;

        cout<<ans<<endl;
    }
    
}