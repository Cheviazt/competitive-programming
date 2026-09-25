#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int n,m,q; cin >> n >> m >> q;
    bool row[n+1], col[m+1];
    int aktifrow=0, aktifcol=0;
    memset(row, false, sizeof(row));
    memset(col, false, sizeof(col));


    while (q--){
        int x,y; cin >> x >> y;

        int total=0;
        if (!row[x]){
            row[x] = true;
            total += m - aktifcol;
            aktifrow++;
        }

        if (!col[y]){
            col[y] = true;
            total += n - aktifrow;
            aktifcol++;
        }

        cout << total << endl;
    }
    
}