#include <bits/stdc++.h>

using namespace std;

int main () {

    string s,a; cin >> s >> a;
    bool flag = true;

    if (s.length() != a.length()) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != a[a.length()-i-1]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    }else{
        cout <<  "NO" << endl;
    }

}