#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >>  n;
    bool flag = true;

    for (int i = 0; i < n; i++ ) {
        int x; cin >> x;
        if (x == 1) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout <<  "EASY" <<  endl;
    }else{
        cout << "HARD" <<  endl;
    }

}