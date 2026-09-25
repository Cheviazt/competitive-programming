#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main () {
    int t; cin >> t;
    while (t--){
        ll n,k;
        cin >> n >> k;

        if (n == 1){
            cout << (k == 1 ? "Ya" : "Tidak") << endl; 
            continue;
        }

        ll dive = 0;
        ll m = n;
        for (ll i = 2; i*i <= n; i++) {
            while(m % i == 0){
                dive++;
                m /= i;
            }
        }
        if(m > 1) dive++;

        if(k <= dive+1){
            cout << "Ya" <<endl;
        }else{
            cout << "Tidak" <<endl;
        }
    }
}