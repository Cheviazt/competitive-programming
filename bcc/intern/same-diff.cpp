#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t; cin >> t;
    while (t--) {

        int n;cin >> n;

        vector<pair<int,char>> v(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cin >> v[i].first;
                v[i].second = 'r';
            }else{
                cin >> v[i].first;
                v[i].second = 'b';
            }
        }

        sort (v.begin(), v.end());
        
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (v[i].second == v[i-1].second) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
     
}
