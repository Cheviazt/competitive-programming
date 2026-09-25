#include <bits/stdc++.h>    

using namespace std;

int n,m,t,board[25][25];
bool visited[25][25];

void jawbreaker (int y, int x, int c) {


    if (y < n && y >= 0 && x < m && x>= 0) {
        if (!visited[y][x]) {
            if (board[y][x] == c) {
                t++;
                visited[y][x] = true;

                jawbreaker(y+1,x,c);
                jawbreaker(y-1,x,c);
                jawbreaker(y,x+1,c);
                jawbreaker(y,x-1,c);
            }
        }
    }

}

int main () {

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            t=0;
            jawbreaker(i,j, board[i][j]);
            ans = max(ans, t*(t-1));
            memset(visited, false, sizeof(visited));
            t=0;
        }
    }

    cout << ans << "\n";
}