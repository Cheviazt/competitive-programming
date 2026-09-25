#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s,t; cin >> s >> t;
        bool flag = true;
        char sc[26], tc[26];
        for (int i = 0; i < 26; i++) sc[i] = tc[i] = 0;
        for (int i = 0; i < s.length(); i++) sc[s[i] - 'a']++;
        for (int i = 0; i < t.length(); i++) tc[t[i] - 'a']++;
        for (int i = 0; i < 26; i++) if (sc[i] != tc[i]) flag = false;
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}