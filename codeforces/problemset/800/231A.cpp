#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,ans=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x,cnt=0;
        for (int j = 0; j < 3; j++) {
            cin >> x;
            cnt += x;
        }
        if (cnt >= 2) {
            ans++;
        }

    }

    cout << ans;

}