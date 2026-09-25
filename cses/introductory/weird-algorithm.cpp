#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    ll n; cin >> n;

    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 1) n = n*3ll+1ll;
        else n /= 2ll;

        cout << n << " ";
    }
    
}