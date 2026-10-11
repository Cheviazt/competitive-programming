#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n,m,k;cin>>n>>m>>k;
    vector<vector<ll>> arr(n+2,vector<ll>(m+2,1));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>arr[i][j];
            arr[i][j]%=k;
        }
    }

    vector<vector<ll>> satu(n+2,vector<ll>(m+2,1)), dua=satu, tiga=satu, empat=satu;

    //satu
    // ll kana=1,kira=1,bawa=1,bawi=1;
    for(ll i=1;i<=n;i++){
        ll st=1;
        for(ll j=1;j<=m;j++){
            st=st*arr[i][j]%k;
            satu[i][j]=satu[i-1][j]*st%k;
        }
    }

    for(ll i=1;i<=n;i++){
        ll st=1;
        for(ll j=m;j>=1;j--){
            st=st*arr[i][j]%k;
            dua[i][j]=dua[i-1][j]*st%k;
        }
    }

    for(ll i=n;i>=1;i--){
        ll st=1;
        for(ll j=1;j<=m;j++){
            st=st*arr[i][j]%k;
            tiga[i][j]=tiga[i+1][j]*st%k;
        }
    }

    for(ll i=n;i>=1;i--){
        ll st=1;
        for(ll j=m;j>=1;j--){
            st=st*arr[i][j]%k;
            empat[i][j]=empat[i+1][j]*st%k;
        }
    }

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            ll ans=satu[i-1][j-1]*dua[i-1][j+1]%k;
            ans=ans*tiga[i+1][j-1]%k;
            ans=ans*empat[i+1][j+1]%k;
            cout<<ans%k<<" ";
        }
        cout<<endl;
    }

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}