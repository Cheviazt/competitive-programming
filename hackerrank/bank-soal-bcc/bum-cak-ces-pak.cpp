#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        string s = "";
        if (i%2==0) s += "Bum";
        if (i%3==0) s += "Cak";
        if (i%5==0) s += "Ces";
        if (i%7==0) s += "Pak";
        if (i%11==0) s += "Dum";
        if (s.empty()) {
            cout<<i<<endl;
        }else {
            cout<<s<<endl;
        }

    }

}