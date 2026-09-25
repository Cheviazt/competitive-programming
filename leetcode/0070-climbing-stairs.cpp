#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    if (n <= 3) return n;

    int prev1 = 3;
    int prev2 = 2;
    int cur = 0;

    for (int i = 3; i < n; i++) {
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }

    /**
     *  n = 1; 1 (1step)
     *  n = 2; 2 (1+1, 2)
     *  n = 3; 3 (1+1, 2, 2+1)
     *  n = 4; 5 ()
     */

    return cur;

}