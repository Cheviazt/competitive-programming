#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t;
    while (t--) {
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        cout << n + m << endl;
    }

}