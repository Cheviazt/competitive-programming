#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int s, n; cin >> s >> n;
    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++) {
        int x,y; cin >> x >> y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end());

    bool flag = true;
    for (auto x : v) {
        if (s > x.first){
            s += x.second;
        }else{
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    
}