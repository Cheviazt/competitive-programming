#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
// 1 2 3 1 1

// 1 3 3 1 1
// 1 0 -1 0 1
// 1 0 -1 0 1

void solve(){
    
    ll n;cin>>n;
    vector<ll> arr(n);
    for(auto &x:arr)cin>>x;

    vector<ll> pref1(n+1,0),pref2(n+1,0);
    for(ll i=0;i<n;i++){
        pref1[i+1]=pref1[i]+(arr[i]==1?1:-1);
        pref2[i+1]=pref2[i]+(arr[i]==3?-1:1);
    }

    ll mn=INT_MAX;
    for (ll i=1;i<n;i++) {
        if(pref2[i]-mn>=0){
            cout<<"YES"<<endl;
            return;
        }

        if(pref1[i]>=0){
            mn=min(mn,pref2[i]);
        }
    }

    cout<<"NO"<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}