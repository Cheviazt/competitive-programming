#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    ll n,x; cin >> n >> x;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    map<ll,ll> mp;
    for (int i = 0; i < n; i++) {
        ll need = x - v[i];

        if (mp.find(need) != mp.end()){
            cout << mp[need] << " " << i+1 << endl;
            return 0;
        }

        mp[v[i]] = i+1;
    }

    cout << "IMPOSSIBLE" <<endl;
}