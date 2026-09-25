#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,k; cin >> n >> k;

    int x,y; cin >> x >> y;

    vector<pair<int,int>> ans;
    // vector<pair>> pos
    int ps = 1;

    while (n--) {
        int q,w; cin >> q >> w;
        int man = abs(q-x) + abs(w-y);
        ans.push_back({man, ps});
        ps++;
    }

    sort(ans.begin(), ans.end());

    cout << ans[k-1].second << endl;

}