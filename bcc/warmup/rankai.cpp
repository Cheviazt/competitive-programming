#include <bits/stdc++.h>

using namespace std;

int main () {

    int k,l, cntk, cntl, i;
    cin >> k >> l;

    cntk = cntl = i = 0;
    while (cntk < k || cntl < l) {
        
        if (i % 2 == 0) {
            if (cntk < k) {
                cout << i << " ";
                cntk++;
            }
        }else{
            if (cntl < l) {
                cout << i << " ";
                cntl++;
            }
        }
        i++;
    }


}