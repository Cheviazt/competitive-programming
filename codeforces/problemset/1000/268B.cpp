#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int n; cin >> n;

    int sum=n;
    for (int i = 1; i < n; i++) {
        sum += i*(n-i);
    }

    cout << sum << endl;
    
}