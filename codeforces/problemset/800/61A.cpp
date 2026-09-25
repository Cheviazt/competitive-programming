#include <bits/stdc++.h>

using namespace std;

int main () {

    string a,b,ans=""; cin >> a >> b;


    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            ans += "1";
        }else{
            ans += "0";
        }
    }

    cout << ans << endl;
}