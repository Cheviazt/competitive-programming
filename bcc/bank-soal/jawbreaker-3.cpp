#include <bits/stdc++.h>

using namespace std;

// cari titik maks
// jawbreak maks 
// ubah ke titik
// runtuhkan.

int t,n,m;
string board[25][25];
bool visited[25][25];

void jawbreak (int y, int x, string c) {
    if (y < n && y >= 0 && x < m && x >= 0) {
        if (!visited[y][x]) {
            if (board[y][x] == c) {
                t++;
                visited[y][x]=true;

                jawbreak(y-1,x,c);
                jawbreak(y+1,x,c);
                jawbreak(y,x+1,c);
                jawbreak(y,x-1,c);
            }
        }
    }
}

void elimjawbreak(int y, int x, string c){
    if (y < n && y >= 0 && x < m && x >= 0) {
        if (!visited[y][x]) {
            if (board[y][x] == c) {
                visited[y][x] = true;
                board[y][x] = ".";

                elimjawbreak(y-1,x,c);
                elimjawbreak(y+1,x,c);
                elimjawbreak(y,x+1,c);
                elimjawbreak(y,x-1,c);
            }
        }
    }
}

int main () {

    cin >> n >> m;
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int maks=INT_MIN, xmaks, ymaks;
    string ctarget;
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++) {
            t=0;
            jawbreak(i,j,board[i][j]);
            if ((t*(t-1)) > maks ) {
                ymaks=i;
                xmaks=j;
                ctarget=board[i][j];
                maks=t*(t-1);
            }
            t=0;
            memset(visited, false, sizeof(visited));
        }
    }

    memset(visited, false, sizeof(visited));
    elimjawbreak(ymaks,xmaks, ctarget);

    //jatuhin
    for (int i = 0; i < m; i++ ){
        int down = n-1;
        for (int j = n-1; j >= 0; j--) {
            if (board[j][i] != ".") {
                board[down][i] = board[j][i];

                if(down != j) board[j][i] = ".";

                down--;

            }
            // down--;
        }
        // cout << endl;
    }

    //keluarin
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}