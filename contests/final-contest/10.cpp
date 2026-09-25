#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    ll mina = 0, minb = 0;
    for(int i = 0; i < n; i++){
        ll maxx = max(a[i], b[i]);
        if(maxx == 0) continue;
        else if(maxx == 1){
            if(mina == minb) mina++;
            else if(mina > minb) minb++;
            else mina++;
        }
        else{
            if(mina == minb) mina--;
            else if(mina > minb) mina--;
            else minb--;
        }
    }
    cout << min(mina,minb) << "\n";
} 
 
int main(){
    int t; cin >> t;

    while (t--) {
        solve();
    }
    return 0;
} 