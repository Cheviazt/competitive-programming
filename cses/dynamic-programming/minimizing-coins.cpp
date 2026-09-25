#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    ll n,z;cin>>n>>z;
    vector<ll> coins(n);
    for(auto &x : coins) cin>>x;

    vector<ll> dp(z+5,1e9);
    dp[0]=0;
    for(int i=1;i<=z;i++){
        for(auto x:coins){
            if(x<=i && dp[i-x]!=1e9){
                dp[i] = min(dp[i], dp[i-x]+1);
            }
        }
    }

    if(dp[z]!=1e9)cout<<dp[z]<<endl;
    else cout<<-1<<endl;
    
}