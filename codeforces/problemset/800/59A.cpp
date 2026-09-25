#include <bits/stdc++.h>

using namespace std;

int main () {

    string s; cin >> s;
    int low=0,up=0;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            low++;
        }else{
            up++;
        }
    }

    if (low >= up) {
        for (char &c : s) {
            c = tolower(c);
        }
        cout << s << endl;
    }else{
        for (char &c : s) {
            c = toupper(c);
        }
        cout << s << endl;
    }
}