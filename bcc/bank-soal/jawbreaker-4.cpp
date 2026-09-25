#include <bits/stdc++.h>

using namespace std;

int n,m,t;
bool visited[25][25];
char board[25][25];

bool inside (int y, int x) {
    return (y >= 0 && y < n && x >= 0 && x < m);
}

void jawbreak (int y, int x, char c) {
    if (inside(y,x)) {
        if (!visited[y][x]) {
            if (board[y][x] == c) {
                t++;
                visited[y][x] = true;

                jawbreak(y-1,x,c);
                jawbreak(y+1,x,c);
                jawbreak(y,x+1,c);
                jawbreak(y,x-1,c);
            }
        }
    }
}

void titik (int y, int x, char c) {
    if (inside(y,x)) {
        if (!visited[y][x]) {
            if (board[y][x] == c) {
                visited[y][x] = true;
                board[y][x] = '.';

                titik(y-1,x,c);
                titik(y+1,x,c);
                titik(y,x+1,c);
                titik(y,x-1,c);
            }
        }
    }
}

void gravity () {
    for (int i = 0; i < m; i++) {
        int down = n-1;
        for (int j = n-1; j >= 0; j--) {
            if (board[j][i] != '.') {
                board[down][i] = board[j][i];

                if (down != j) board[j][i] = '.';
                down--;
            }
        }
    }
}

int main () {

    int ans = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (board[i][j] == '.' || visited[i][j]) continue;

            t = 0;
            jawbreak(i, j, board[i][j]);

            if (t < 2) continue;

            int score1 = t * (t - 1);

            // backup board
            char backup[25][25];
            memcpy(backup, board, sizeof(board));

            // hapus langkah pertama
            memset(visited, false, sizeof(visited));
            titik(i, j, board[i][j]);
            gravity();

            // cari langkah kedua terbaik
            int best2 = 0;

            memset(visited, false, sizeof(visited));
            for (int y = 0; y < n; y++) {
                for (int x = 0; x < m; x++) {

                    if (board[y][x] == '.' || visited[y][x]) continue;

                    t = 0;
                    jawbreak(y, x, board[y][x]);

                    if (t >= 2) {
                        best2 = max(best2, t * (t - 1));
                    }
                }
            }

            ans = max(ans, score1 + best2);

            // restore board
            memcpy(board, backup, sizeof(board));

            // RESET visited untuk eksplorasi level pertama berikutnya
            memset(visited, false, sizeof(visited));
        }
    }

    cout << ans;

}