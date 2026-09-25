#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,t,x,y,xtemp,ytemp; cin >> n;

    /**
     *  - - A | 00 01 02
     *  - - - | 10 11 12
     *  - - - | 20 21 22
     *
     *  x = 2
     *  y = 0
     */

    char arr[n+1][n+1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
            if (arr[i][j] == 'A') {
                y = i;
                x = j;
                xtemp = j;
                ytemp = i;
            }
        }
    }

    cin >> t;
    for (int i = 0; i < t; i++) {
        string cmd; cin >> cmd;
        if (cmd == "ATAS") {
            if (y == 0) {
                y = n - 1;
            } else {
                y--;
            }
        } else if (cmd == "BAWAH") {
            if (y == n - 1) {
                y = 0;
            } else {
                y++;
            }
        } else if (cmd == "KIRI") {
            if (x == 0) {
                x = n - 1;
            } else {
                x--;
            }
        } else if (cmd == "KANAN") {
            if (x == n - 1) {
                x = 0;
            } else {
                x++;
            }
        }

    }

    arr[ytemp][xtemp] = '_';
    arr[y][x] = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}