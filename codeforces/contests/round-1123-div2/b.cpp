#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    ll n;cin>>n;
    map<ll,ll,greater<ll>> mp;
    
    for (ll i=0;i<n;i++){
        ll x;cin>>x;
        mp[x]++;
    }

    bool cek=true;
    while(cek){
        cek=false;
        for (auto& [x,y]:mp){
            if(y==0)continue;
            cout<<x<<" ";
            y--;
            cek=true;
        }
    }
    cout<<endl;


}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}