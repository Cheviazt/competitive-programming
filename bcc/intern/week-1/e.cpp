#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        a[n-1] = max(a[n-1], b[n-1]);

        for (int i = n-2; i >= 0; i--) {
            a[i] = max(a[i+1], max(a[i], b[i]));
        }

// 1 2 3 4 5
// 1 3 6 10 15

// 4 8 4 7 1
// 

        int pref[n];
        pref[0] = a[0];
        for (int i = 1; i < n; i++){
            pref[i] = pref[i-1]+a[i];
        }

        // for (int i = 0; i < n; i++) {
        //     cout << pref[i] << " ";
        // }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            if (l == 0)
                cout << pref[r] << " ";
            else
                cout << pref[r] - pref[l-1] << " ";
        }  
        cout << endl;
    } 
    
}