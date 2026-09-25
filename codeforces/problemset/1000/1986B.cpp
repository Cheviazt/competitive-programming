#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    ll n,m; cin>>n>>m;

    vector<vector<ll>> arr(n+2, vector<ll>(m+2,INT_MIN));
    for (ll i=1;i<=n;i++) 
        for(ll j=1;j<=m;j++)cin>>arr[i][j];

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            int target=arr[i][j];
            
            if(target>arr[i+1][j]&&target>arr[i-1][j]&&target>arr[i][j+1]&&target>arr[i][j-1]){
                arr[i][j]=max(max(arr[i+1][j], arr[i-1][j]),max(arr[i][j+1],arr[i][j-1]));
            }
        }
        // cout<<endl;
    }

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}