#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main () {
    int t; cin >> t;

    while(t--){
        ll a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;

        ll a1 = min(a-x, n);
        ll man1 = a - a1;
        ll mbn1 = max(y, b-(n-a1));

        ll b1 = min(b-y,n);
        ll man2 = b - b1;
        ll mbn2 = max(x, a-(n-b1));

        cout << min(man2*mbn2, man1*mbn1) << endl;
    }
}