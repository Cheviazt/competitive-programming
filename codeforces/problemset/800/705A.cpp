#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;cin>>n;
    string ans="";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            ans += "I love ";
        }else {
            ans += "I hate ";
        }

        if (i < n) {
            ans += "that ";
        }else{
            ans += "it";
        }
    }

    cout <<  ans <<  endl;
}