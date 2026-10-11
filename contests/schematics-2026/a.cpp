#include<bits/stdc++.h>
#define ll long long
using namespace std;


const ll maxn = 10e5+7;
const int maxnode=2e5*40+7;

ll a[maxnode];
ll c=0;
ll tree[4*maxn];
ll nxt[maxnode];
ll hp [maxn];
ll x[maxn];


// void build(ll node,ll l,ll r){
//     if(l==r){
//         tree[node] = a[l];
//         return;

//     }else{
//         ll mid = (l + (r-1))/2;
//         build(2*node,l,mid);
//         build(2*node+1,mid+1,r);
//         tree[node] = max(a[tree[2*node]],a[tree[2*node+1]]);
//     }

// }

void query(ll node,ll l,ll r,ll ql,ll qr,ll val){
        if(ql>r||qr<l)return;
    
        if(ql<=l&&r<=qr){
            c++;
            a[c] = val;
            nxt[c] = tree[node];
            tree[node] = c;

        }else{
            ll mid = (l + (r-1))/2;
           query(2*node,l,mid,ql,qr,val);
            query(2*node+1,mid+1,r,ql,qr,val);
        }   
}
ll update(ll node,ll l,ll r,ll idx,ll cur){
    while (tree[node]&&(hp[a[tree[node]]]<=0||x[a[tree[node]]]<cur))
    {
        tree[node] = nxt[tree[node]];
    }
    ll best=0;
    if(tree[node]){
        best = a[tree[node]];
    }

    if(l==r)return best;
    ll mid = (l +(r-1))/2;
    if(idx<=mid) return max(best,update(2*node,l,mid,idx,cur));
    else return max(best, update(2*node+1,mid+1,r,idx,cur));
    
}

int main(){
    ios::sync_with_stdio(false);
    ll n,m;

    cin>>n>>m;
    // ll hit =0;


    // build(1,1,n);
    for(ll i=1;i<=m;i++){
        ll t;
        cin>>t;

        if(t==1){
            ll a,b,d,h;
            cin>>a>>b>>d>>h;
            hp[i] = h;
            x[i] = i+d-1;
            query(1,1,n,a,b,i);
            
        }else{
            ll a,b;
            cin>>a>>b;
            ll id = update(1,1,n,a,i);
            if(id==0){
                // hit++;
                cout<<"EVAKUASI SEKARANG!"<<"\n";
            } 
            else{
                hp[id] -=b;
                cout<<"Shield Elmax pelindung kota!"<<"\n";
            }  

        }

    }
    // cout<<hit<<"\n";




}