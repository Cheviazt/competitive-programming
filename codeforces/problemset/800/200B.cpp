#include <bits/stdc++.h>

using namespace std;

int main () {
    // 200B - Drinks
    int n; cin >> n;
    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        double x; cin >> x;
        ans += x;
    }
    ans /= n;
    cout << fixed << setprecision(12) << ans << endl;
}
