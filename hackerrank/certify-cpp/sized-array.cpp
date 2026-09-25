#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,q; cin >> n >> q;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        int p; cin >> p;

        arr[i].resize(p);
        for (int j = 0; j < p; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int a,b; cin >> a >> b;
        cout << arr[a][b] << endl;
    }

}