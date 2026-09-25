#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        unordered_set<int> s;
        // map<int,int> mp;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (s.count(x)){
                flag = true;
                continue;
            }
            s.insert(x);
        }

        // for (auto x : mp) {
        //     cout << x.second << " ";
        // }
        // cout << endl;

        cout << (flag ? "true" : "false") << endl;
    }
    
}
