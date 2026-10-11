#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n,m;cin>>n>>m;
    vector<string> arr(n);
    for(auto &x:arr)cin>>x;

    ll mx=0,cnt=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            // ll batas=min()
            ll k=0;
            while(true){
                ll temp=k+1;
                if(i-temp<0||i+temp>=n||j-temp<0||j+temp>=m)break; 

                if(arr[i-temp][j]!=arr[i+temp][j])break;
                if(arr[i][j-temp]!=arr[i][j+temp])break;
                if(arr[i-temp][j-temp]!=arr[i+temp][j+temp])break;
                if(arr[i+temp][j-temp]!=arr[i-temp][j+temp])break;
                k=temp;
            }

            ll best=2*k+1;
            if(best>mx){
                mx=best;
                cnt=1;
            }else if(best==mx){
                cnt++;
            }
        }
    }
    cout<<cnt<<" "<<mx<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}