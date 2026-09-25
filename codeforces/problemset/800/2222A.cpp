#include <bits/stdc++.h>
#define ll long long

using namespace std;

// versi brutal jir
void solve(){
    ll n;cin>>n;
    bool valid = false;
    vector<ll> tc(n);
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(x==100){
            valid=true;
        }
        tc[i]=(100/x);
    }

    if(valid){
        cout<<"Yes"<<endl;
        return;
    }

    vector<bool> dp(100*n, false);
    dp[0]=true;
    for(ll i=1;i<=100*n;i++){
        for(auto x:tc){
            if(x >= i){
                if(!dp[i-x]){
                    // cout<<x<<" ";
                    dp[i]=dp[i-x];
                }
            }
        // cout<<endl;
        }
    }

    for(ll i=1;i<=100*n;i++){
        if(!dp[i]){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main () {

    ll t;cin>>t;
    while(t--){

        solve();

    }

}