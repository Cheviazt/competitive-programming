#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> g;

    if (s.empty()) {
        cout << "Tidak seimbang" << endl;
        return 0;
    }

    bool flag = true;

    for (auto c : s) {
        if (c == '(' || c == '{' || c == '[') {
            g.push(c);
        } 
        else if (c == ')' || c == '}' || c == ']') {
            if (g.empty()) {
                flag = false;
                break;
            }

            char top = g.top();
            g.pop();

            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                flag = false;
                break;
            }
        }
    }

    if (!g.empty()) flag = false;

    if (flag)
        cout << "Seimbang" << endl;
    else
        cout << "Tidak seimbang" << endl;

    return 0;
}
