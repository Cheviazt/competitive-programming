#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;

    cin >> n;

    vector <int> a(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector <int> b = a;
    sort(b.begin(), b.end());

    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i] + a[i-1];
    }


     for (int i = 2; i <= n; i++)
    {
        b[i] = b[i] + b[i-1];
    }


    int m;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int t, l, r;

        cin >> t >> l >> r;

        if(t == 1){
            cout << a[r] - a[l-1] << "\n";
        } else {
             cout << b[r] - b[l-1] << "\n";
        }
    }
    
}