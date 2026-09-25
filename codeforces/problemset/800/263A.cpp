#include <bits/stdc++.h>

using namespace std;

int main () {

    int arr[5][5];
    int rows,cols,ans=0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                rows = i;
                cols = j;
            }
        }
    }

    ans = abs(2-rows)+abs(2-cols);
    cout << ans << endl;

}