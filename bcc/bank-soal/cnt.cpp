#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;cin >> n;
    char arr[n+1][n+1];

    int x,y,xtemp,ytemp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];

            if (arr[i][j] == 'A'){
                y = i;
                x = j;
                xtemp = j;
                ytemp = i;
            }
        }
    }

    int zz; cin >> zz;

    for(int i=0; i < zz; i++){
        string cmd; cin >> cmd;
        if (cmd == "ATAS") {
            if (y == 0) {
                y = n-1;
            }else{
                y--;
            }
        }else if (cmd == "BAWAH") {
            if (y == n-1) {
                y = 0;
            }else{
                y++;
            }
        }else if (cmd == "KIRI") {
            if (x == 0) {
                x = n-1;
            }else{
                x--;
            }
        } else if (cmd == "KANAN") {
            if (x == n-1) {
                x = 0;
            }else{
                x++;
            }
        }
    }

    arr[ytemp][xtemp] = '_';
    arr[y][x] = 'A';

    for (int i = 0; i < n; i++) {
        for (int j=0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

}