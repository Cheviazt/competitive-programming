#include <bits/stdc++.h>
using namespace std;

int N, K;
int B[105], H[105];
int dp[2005][105];

int main() {
    cin >> N >> K;

    for (int x=1; x<=K; x++) {
        cin >> B[x] >> H[x];
    }
    for (int x=1; x<=K; x++) {
        for(int y=1; y<=N; y++) {
            if (y-B[x] >= 0) {
                dp[x][y] = max(dp[x-1][y], dp[x][y-B[x]] + H[x]);
            }
            cout <<dp[x][y] << ' ';
        }
        cout << endl;
    }

    cout << dp[K][N] << endl;
}
