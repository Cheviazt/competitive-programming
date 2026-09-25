#include <bits/stdc++.h>

using namespace std;

int main () {

    string a; cin >> a;
    int o,s,n,ans;
    o = s = n = ans = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'O') o++;
        if (a[i] == 'S') s++;
        if (a[i] == 'N') n++;
        if (a[i] == 'P' && o && s && n){
            ans = max(o+s+n, ans);
            ans++;
        }
    }
    cout << (!ans ? -1 : ans) << endl;

}