#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;
    int len = s.length();

    int n = 1;
    while (n*n < len) {
        n++;
    }

    char ans[n][n];

    int p = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (p < len){
                ans[i][j] = s[p];
                p++;
            } else {
                ans[i][j] = '.';
                p++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if(i%2==0){
                cout << ans[i][j];
            }else{
                cout << ans[i][n-1-j];
            }
        }
        cout << endl;
    }
}