#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a,b) * b;
}

int main () {

    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }

    /*
    00 01 02 03
    10 11 12 13
    20 21 22 14

    20 10 00
    21 11 01
    22 12 02


    20 21 22
    10 11 12
    00 01 02
    */

    while (x--) {
        string cmd; cin >> cmd;
        if (cmd == "_") {
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n/2; j++) {
                    int temp = arr[j][i];
                    arr[j][i] = arr[n-j-1][i];
                    arr[n-j-1][i] = temp;
                }
            }
        }else if (cmd == "|") {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m/2; j++) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][n-j-1];
                    arr[i][n-j-1] = temp;
                }
            }
        }else if (cmd == "90"){
            for (int i = 0 ; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[n-j-1][]
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j=0; j < m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}