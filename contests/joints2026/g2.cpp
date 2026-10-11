#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n,m,q;cin>>n>>m>>q;

    vector<vector<ll>> arr(n+1, vector<ll>(m+1,0));
    vector<ll> colz(305);

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }

    while(q--){
        ll best=LLONG_MIN;
        ll r1,r2,c1,c2;cin>>r1>>c1>>r2>>c2;
        for(ll a=r1;a<=r2;a++){
            for(ll c=c1;c<=c2;c++)colz[c]=0;
                for(ll b=a;b<=r2;b++){
                    ll z=0;
                    for(ll c=c1;c<=c2;c++){
                        colz[c]+=arr[b][c];
                        z=max(z,(ll)0)+colz[c];
                        best=max(best,z);
                    }
                }
        }
        cout<<best<<endl;
    }

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}
