#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
const long long MOD = 1000000007LL;
int f[MAXN + 1];

int main() {
    f[0] = 1; f[1] = 1; f[2] = 2;
    for (int i = 3; i <= MAXN; i++)
        f[i] = (int)((2LL * f[i - 1] + f[i - 3]) % MOD);

    int t;
    scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        printf("%d\n", f[n]);
    }
    return 0;
}