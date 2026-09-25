#include <bits/stdc++.h>

using namespace std;

int main () {

    int k,n,w, ans=0;
    cin >> k >> n >> w;
    
    for (int i = 1; i <= w; i++) {
        ans += k*i;
    }

    if (ans > n) {
        cout << ans-n << endl;
    } else {
        cout << "0" << endl;
    }

}