#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){

    ll n,m;cin>>n>>m;
    vector<ll> a(n),b(m);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;

    a[0]=min(a[0],b[0]-a[0]);
    for(int i=1;i<n;i++){
        if(max(b[0]-a[i],a[i]) < a[i-1]){
            cout<<"NO"<<endl;
            return;
        }
        if(min(a[i],b[0]-a[i]) >= a[i-1]){
            a[i]=min(a[i],b[0]-a[i]);
        }else{
            a[i]=max(a[i],b[0]-a[i]);
        }
    }

    cout<<"YES"<<endl;

}

int main () {

    int t;cin>>t;
    while(t--){
        solve();
    }

}