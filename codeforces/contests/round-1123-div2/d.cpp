#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n+1);
    for(ll i=1;i<=n;i++){
        ll x;cin>>x;
        arr[x]=i&1;
    }   

    bool cek=true;
    for(ll i=n;i>=2;i-=2){
        if(arr[i]==arr[i-1])cek=false;
    }
    cout<<(cek?"YES":"NO")<<endl;
}

int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}