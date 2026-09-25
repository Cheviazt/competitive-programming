#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
const long long INF = 1e18+7;

const long long MAXN = 200005;
long long tree[4 * MAXN];
long long a[MAXN];

void build(long long node, long long l, long long r) {
    if (l == r) {
        tree[node] = a[l];
        return;
    }
    long long mid = l + (r - l) / 2;
    build(2 * node, l, mid);
    build(2 * node + 1, mid + 1, r);
    
    tree[node] = min(tree[2 * node],tree[2 * node + 1]);
}

void update(long long node, long long l, long long r, long long idx, long long val) {
    if (l == r) {
        tree[node] = val; 
        return;
    }
    long long mid = l + (r - l) / 2;
    if (idx <= mid)
        update(2 * node, l, mid, idx, val);         
    else
        update(2 * node + 1, mid + 1, r, idx, val); 
    
    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

long long query(long long node, long long l, long long r, long long ql, long long qr) {
    if (ql > r || qr < l) return INF; 
    if (ql <= l && r <= qr) return tree[node]; 

    long long mid = l + (r - l) / 2;
    long long left_ans = query(2 * node, l, mid, ql, qr);
    long long right_ans = query(2 * node + 1, mid + 1, r, ql, qr);
    return min(left_ans,right_ans);
}

int main () {
    long long n,q;cin>>n>>q;
    for(long long i=1; i<=n;i++)cin>>a[i];
    build(1,1,n);
    while(q--){
        long long t,a,b;cin>>t>>a>>b;
        long long ans; 
        if(t==1) {
            update(1,1,n,a,b);}
        else {
            ans=query(1,1,n,a,b);
            cout<<ans<<endl;
        }
    }
}