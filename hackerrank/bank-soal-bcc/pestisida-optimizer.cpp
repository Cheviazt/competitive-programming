#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    bool changed = true;

    while (changed) {
        changed = false;
        vector<int> temp;
        temp.push_back(v[0]);

        for (int i = 1; i < (int)v.size(); i++) {
            if (v[i] <= v[i - 1]) {
                temp.push_back(v[i]);
            } else {
                changed = true;
            }
        }

        if (changed) ans++;
        v.swap(temp);
    }

    cout << ans << endl;
}
