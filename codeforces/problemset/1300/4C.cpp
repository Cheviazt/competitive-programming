#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int t; cin >> t;
    map<string, int> name;
    for (int i = 0; i < t; i++) {
        string x; cin >> x;
        name[x]++;
        if (name[x] > 1) {
            cout << x << name[x]-1 << endl;
        }else{
            cout << "OK" << endl;
        }
    }
}