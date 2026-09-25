#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int INF = 1e18+7;

const int MAXN = 200005;
long long tree[4 * MAXN];
long long a[MAXN];

// Membangun tree dari array awal
void build(int node, int l, int r) {
    if (l == r) {
        tree[node] = a[l]; // Sampai di daun
        return;
    }
    int mid = l + (r - l) / 2;
    build(2 * node, l, mid);         // Bangun anak kiri
    build(2 * node + 1, mid + 1, r); // Bangun anak kanan
    
    // Merge step (contoh: sum query)
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

// Point update: set a[idx] = val
void update(int node, int l, int r, int idx, long long val) {
    if (l == r) {
        tree[node] = val; // Sampai di target
        return;
    }
    int mid = l + (r - l) / 2;
    if (idx <= mid)
        update(2 * node, l, mid, idx, val);         // Belok kiri
    else
        update(2 * node + 1, mid + 1, r, idx, val); // Belok kanan
    
    // Perbarui nilai orang tua setelah anak ter-update
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

// Range query: sum dari interval [ql, qr]
long long query(int node, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return 0; // Tidak overlap sama sekali (elemen netral penjumlahan)
    if (ql <= l && r <= qr) return tree[node]; // Total overlap

    int mid = l + (r - l) / 2;
    long long left_ans = query(2 * node, l, mid, ql, qr);
    long long right_ans = query(2 * node + 1, mid + 1, r, ql, qr);
    return left_ans + right_ans;
}

int main () {
    long long n,q;cin>>n>>q;
    for(int i=1; i<=n;i++)cin>>a[i];
    build(1,1,n);
    while(q--){
        long long ql,qr;cin>>ql>>qr;
        long long ans=query(1,1,n,ql,qr);
        cout<<ans<<"\n";
    }
}