#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    ll n,m;cin>>n>>m;

    // 1 7
    // 

    vector<ll> arr(n);
    vector<pair<ll,ll>> modz;
    // for(auto &x:arr)cin>>x;
    for(ll i=0;i<n;i++){
        ll z;cin>>z;
        modz.push_back({z%m,i+1});

    }
    sort(modz.begin(),modz.end());

    ll best=modz[0].first+m-modz[n-1].first;
    ll x=modz[0].second,y=modz[n-1].second;
    for(ll i =1;i<n;i++){
        ll zz=modz[i].first-modz[i-1].first;
        // cout<<"debug:"<<zz<<endl;
        if(zz<best){
            x=modz[i-1].second;
            y=modz[i].second;
            best=zz;
        }
    }

    cout<<x<<" "<<y<<endl;

    
    // 1 3 4 4


}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}