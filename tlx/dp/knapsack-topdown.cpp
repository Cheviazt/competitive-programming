#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int w[101], h[2001], dp[101][2001];
bool cek[101][2001];
vector<int> takes;
int n, k;

int knapsack(int i, int c) {
    if (i > k) return 0;
    if (cek[i][c]) return dp[i][c];

    int best = knapsack(i+1, c);
    if (c >= w[i]) {
        int next = knapsack(i+1, c-w[i]);
        if (next+h[i] > best) {
            best = next+h[i];
        }
    }
    cek[i][c]=true;
    dp[i][c]=best;
    return best;
}

int main () {
    bismillah
    
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> w[i] >> h[i];
    }

    // int ans = knapsack(k,n);
    memset(cek, false, sizeof(cek));

    // cek maks capacity
    int maxval = 0, curcap = 0;
    for (int i = 0; i <= n; i++){
        int val = knapsack(1,i);
        if (val > maxval){
            maxval = val;
            curcap = i;
        }
    }

    // backtracking
    int best = curcap;
    for (int i = 1; i <= k; i++) {
        int valtake = h[i]+knapsack(i+1, best-w[i]);
        int valopt = knapsack(i,best);
        if (valtake == valopt){
            cout << i << endl;
            best -= w[i];
        }
    }
}