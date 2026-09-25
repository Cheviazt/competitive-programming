#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int n,m; cin >> n >> m;
    queue<pair<int,int>> q;
    for (int i=0 ; i < n; i++) {
        int x;cin >> x;
        q.push({x, i+1});
    }

    int num,pos;
    while(!q.empty() && q.front().first > 0) {
        num = q.front().first;
        pos = q.front().second;

        q.pop();
        if (num-m > 0) q.push({num-m, pos});
    }

    cout << pos << endl;
    
}

