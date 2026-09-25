#include <bits/stdc++.h>

using namespace std;

bool visited[25][25];
int board[25][25];
int t=0,n,m,b,k;

void jawbreak(int y, int x, int c){
    if (y < n && x < m && y >= 0 && x >= 0) {
        if (!visited[y][x]) {
            if (board[y][x] == c){
                t++;
                // cout << board[y][x] << ": "<< t << "\n";
                visited[y][x] = true;

                jawbreak(y+1, x, c);
                jawbreak(y-1, x, c);
                jawbreak(y, x+1, c);
                jawbreak(y, x-1, c);
            }
        }
    }
}

int main () {

    cin>>n>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            // visited[i][j] = false;
        }
    }
    cin >> b >> k;
    jawbreak(b, k, board[b][k]);

    cout << t * (t-1) << "\n";
}