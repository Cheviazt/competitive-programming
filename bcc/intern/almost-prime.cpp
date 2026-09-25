#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int prime(ll n) {

    int cnt=0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) cnt++;
        if (cnt > 2) break;
    }

    return cnt;
}

int main () {
    bismillah
 
    ll n; cin >> n;

    int ans = 0;
    for (int i = 6; i <= n; i++) {
        int x = prime(i);
        if (x == 2) ans++;
    }
    
    cout << ans << endl;
    
}