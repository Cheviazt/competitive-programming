#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t;
    while (t--) {

        int n,cnt=0; cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            bool flag = false;
            for (auto b : v) {
                if (a == b) {
                    flag = true;
                    // cout << a << " " << b << endl;
                    break;
                }
            }
            if (!flag){ 
                v.push_back(a);
                cnt++;
            }
        }

        cout << (cnt*2)-1 << endl;

        

    } 


}