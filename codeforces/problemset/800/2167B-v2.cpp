#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s,t; cin >> s >> t;
        bool flag = true;
        char sc[52], tc[52];
        memset(sc, 0 , sizeof(sc));
        memset(tc, 0, sizeof(tc));
        for(auto c : s){
            (isupper(c)) ? sc[c - 'A']++ : sc[26 + (c - 'a')]++;
        }
        for(auto c : t){
            (isupper(c)) ? tc[c - 'A']++ : tc[26 + (c - 'a')]++;
        }

        for (int i = 0; i < 52; i++) {
            if (sc[i] != tc[i]) flag = false;
        }

        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}