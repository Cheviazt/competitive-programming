#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll> all;
    
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll maks=0;
        for(ll j=0;j<m;j++){
            ll x;cin>>x;
            all.push_back(x);
            maks=max(x,maks);
        }
        ans+=maks;
    }

    ll ans2=0;
    sort(all.begin(),all.end(),greater<>());
    for(int i=0;i<n;i++)ans2+=all[i];

    cout<<ans<<" "<<ans2<<endl;
}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}