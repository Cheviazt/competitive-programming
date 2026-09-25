#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n,q;cin>>n>>q;
    vector<ll> a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;

    for(ll i=n-1;i>=0;i--){
        if(i==n-1){
            a[i]=max(a[i],b[i]);
            continue;
        }
        a[i]=max(max(a[i+1],b[i]),a[i]);
    }

    vector<ll> pref(n+1,0);
    for(ll i=0;i<n;i++){
        pref[i+1]=pref[i]+a[i];
    }

    while(q--){
        ll l,r;cin>>l>>r;

        cout<<pref[r]-pref[l-1]<<" ";
    }
    cout<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}