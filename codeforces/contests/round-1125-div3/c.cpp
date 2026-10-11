#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
// 0 0 0 0 0 0 0

void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;

    vector<ll> vl(n-4);
    map<ll,ll> mp;

    for(ll i=0;i<n-4;i++){
        vl[i]+=a[i]+a[i+2]-a[i+4];
        mp[vl[i]]++;
    }

    ll ans=0;
    for(auto [k,v]:mp){
        ans+=v*(v-1)/2;
    }

    for(ll i=0;i<n-4;i++){
        if(i+2<n-4&&vl[i]==vl[i+2])ans--;
        if(i+4<n-4&&vl[i]==vl[i+4])ans--;
    }

    cout<<ans<<endl;
}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}