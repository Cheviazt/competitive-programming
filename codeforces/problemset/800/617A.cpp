#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,cnt=0;
    cin >> n;

    while (n != 0) {
        if (n >= 5) {
            n -= 5;
            cnt++;
        }else if (n >= 4) {
            n -= 4;
            cnt++;
        }else if (n >= 3) {
            n -= 3;
            cnt++;
        }else if (n >= 2) {
            n -= 2;
            cnt++;
        }else {
            n -= 1;
            cnt++;
        }

    }

    cout << cnt << endl;

}