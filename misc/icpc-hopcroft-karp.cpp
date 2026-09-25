#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int N;
vector<vector<int>> adj;
vector<int> matchL, matchR, distHK;

// BFS untuk Hopcroft–Karp
bool bfsHK() {
    queue<int> q;
    for (int u = 1; u <= N; u++) {
        if (matchL[u] == 0) {
            distHK[u] = 0;
            q.push(u);
        } else {
            distHK[u] = INF;
        }
    }
    distHK[0] = INF;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (distHK[u] < distHK[0]) {
            for (int v : adj[u]) {
                if (distHK[ matchR[v] ] == INF) {
                    distHK[ matchR[v] ] = distHK[u] + 1;
                    q.push(matchR[v]);
                }
            }
        }
    }
    return distHK[0] != INF;
}

// DFS untuk Hopcroft–Karp
bool dfsHK(int u) {
    if (u == 0) return true;
    for (int v : adj[u]) {
        if (distHK[ matchR[v] ] == distHK[u] + 1) {
            if (dfsHK(matchR[v])) {
                matchL[u] = v;
                matchR[v] = u;
                return true;
            }
        }
    }
    distHK[u] = INF;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Baca input
    cin >> N;
    vector<pair<int,int>> edges;
    edges.reserve(N-1);
    adj.assign(N+1, {});
    for (int i = 0; i < N-1; i++) {
        int u, v;
        cin >> u >> v;
        edges.emplace_back(u, v);
        adj[u].push_back(v);           // arah asli: u -> v
    }

    // Inisialisasi matching
    matchL.assign(N+1, 0);
    matchR.assign(N+1, 0);
    distHK.assign(N+1, 0);

    // Hopcroft–Karp main loop
    int matching = 0;
    while (bfsHK()) {
        for (int u = 1; u <= N; u++) {
            if (matchL[u] == 0 && dfsHK(u))
                matching++;
        }
    }

    // Hitung chain decomposition size dan K
    int MCD = N - matching;
    int K = MCD - 1;

    // Bangun chain
    vector<vector<int>> chains;
    vector<int> chain_idx(N+1, -1);
    for (int i = 1; i <= N; i++) {
        if (matchR[i] == 0) {
            vector<int> chain;
            int cur = i;
            while (true) {
                chain.push_back(cur);
                if (matchL[cur]) cur = matchL[cur];
                else break;
            }
            int cid = chains.size();
            for (int x : chain) chain_idx[x] = cid;
            chains.push_back(chain);
        }
    }

    // Bangun graf antar-chain dan toposort
    int C = chains.size();
    vector<vector<int>> chainG(C);
    vector<int> indeg(C, 0);
    for (auto &e : edges) {
        int u = e.first, v = e.second;
        int cu = chain_idx[u], cv = chain_idx[v];
        if (cu != cv) {
            chainG[cu].push_back(cv);
            indeg[cv]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < C; i++)
        if (indeg[i] == 0) q.push(i);

    vector<int> order;
    while (!q.empty()) {
        int c = q.front(); q.pop();
        order.push_back(c);
        for (int nc : chainG[c]) {
            if (--indeg[nc] == 0)
                q.push(nc);
        }
    }

    // Output hasil
    cout << K << "\n";
    for (int i = 0; i < K; i++) {
        int c1 = order[i];
        int c2 = order[i+1];
        int u = chains[c1].back();
        int v = chains[c2].front();
        cout << u << " " << v << "\n";
    }
    return 0;
}