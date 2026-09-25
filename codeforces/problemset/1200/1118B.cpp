#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;cin>>n;

    vector<ll> arr(n,0);
    ll pref1=0,pref2=0,suf1=0,suf2=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(i&1)suf1+=arr[i];
        else suf2+=arr[i];
    }

    ll cnt=0;
    for (ll i=0;i<n;i++){
        if(i&1)suf1-=arr[i];
        else suf2-=arr[i];
        if(suf2+pref1 == suf1+pref2){
            cnt++;
        }
        if(i&1)pref1+=arr[i];
        else pref2+=arr[i];
    }

    cout<<cnt<<endl;


}

//24
//24
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}