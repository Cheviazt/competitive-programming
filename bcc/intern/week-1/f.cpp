#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int n; cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        mp[s]++;
        if(mp[s] > s.length()+1) {
            cout << "ERROR" << endl;
            continue;
        }
        if (mp[s] == 1){
            cout << s << endl;
        }else{
            s[mp[s]-2] = toupper(s[mp[s]-2]);
            cout << s << endl;
        }
    }
    
}