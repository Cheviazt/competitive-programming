#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    bool flag = true;

    while (flag) {
        n++;
        string s = to_string(n);
        set<int> st;
        for (int i = 0; i < s.length(); i++) {
            st.insert(s[i]);
        }

        if (st.size() == s.length()) {
            flag = false;
            break;
        }
    }

    cout << n <<  endl;

}