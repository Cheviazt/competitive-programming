#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int fak (ll a) {
    int sum = 1;
    for (int i = 1; i <= a; i++) {
        sum *= 4;
    }
    return sum;
}

int main () {
    bismillah

    int n; cin >> n;
    ll sum = 0;
    
    ll slot = (2*n-2)-n+1;
    for (int i = 0; i < 4; i++) {
        sum += fak(slot);
    }
    
    cout << sum;
}
