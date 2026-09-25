#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int t; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<pair<char, int>> v;

        char start = 97;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == 0){
                cout << (char)start;
                v.push_back({start, 0});
                start++;
            }else if (x > 0) {
                for (auto &z : v) {
                    if(z.second == x-1) {
                        cout << z.first;
                        z.second = x;
                        // cout << z.second;
                        break; 
                    }
                }
            }
        } 

        cout << endl;
    }
    
}