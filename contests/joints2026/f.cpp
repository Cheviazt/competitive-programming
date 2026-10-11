#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    ll n,q;cin>>n>>q;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    vector<ll>d;
    for(ll i=1;i<n;i++){
        d.push_back(a[i]-a[i-1]);
    }
    sort(d.begin(),d.end());
    ll dst_n=d.size();
    vector<ll> zz(dst_n+1,0),zzz(dst_n);
    for(ll i=1;i<=dst_n;i++){
        zz[i]=zz[i-1]+d[i-1];
        zzz[i-1]=zz[i]+d[i-1]*(ll)(n-i);
    }

    while(q--){
        ll x;cin>>x;
        ll s=lower_bound(zzz.begin(),zzz.end(),x)-zzz.begin();
        ll ans=x-zz[s],d=n-s;
        cout<<(ans-1+d)/d<<endl;
    }


    // while(q--){
    //     // ll curr_dst=a[n-1]-a[0]+1+dst_n;

    // }
}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}