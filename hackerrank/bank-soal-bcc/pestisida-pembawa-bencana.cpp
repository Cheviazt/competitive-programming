#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a; cin >> v[i];
    }

    int ans = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = v.size()-1; i > 0; i--) {
            if (v[i] > v[i - 1]) {
                v.erase(v.begin() + i);
                flag = true;
            }
        }
        if (flag) ans++;
    }

    cout<<ans<<endl;

}