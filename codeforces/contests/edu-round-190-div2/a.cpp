#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'
 
using namespace std;
 
int main() {
    bismillah
 
    int t;
    cin >> t;
 
    while (t--) {
 
        ll n, a, b;
        cin >> n >> a >> b;
 
        ll best3 = min(3 * a, b);
 
        ll ans1 = (n / 3) * best3 + (n % 3) * a;
        ll ans2 = (n / 3) * best3 + b;
 
        cout << min(ans1, ans2) << endl;
    }
}