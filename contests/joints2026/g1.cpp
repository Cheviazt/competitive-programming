#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n,m,q;cin>>n>>m>>q;

    vector<vector<ll>> arr(n+1, vector<ll>(m+1,0));

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            ll a;cin>>a;
            arr[i][j]=a+arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
        }
    }

    while(q--){
        ll best=LLONG_MIN;
        ll r1,r2,c1,c2;cin>>r1>>c1>>r2>>c2;
        for(ll a=r1;a<=r2;a++){
            for(ll b=a;b<=r2;b++){
                for(ll c=c1;c<=c2;c++){
                    for(ll d=c;d<=c2;d++){
                        ll z=arr[b][d]-arr[a-1][d]-arr[b][c-1]+arr[a-1][c-1];
                        best=max(best,z);
                    }
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