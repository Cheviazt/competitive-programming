#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>

using namespace std;

void solve(){
      ll x;cin>>x;
      
      vl dp(x+5,1e9);
      dp[0]=0;
      for(ll i=1;i<=x;i++){
            
            ll num=i;
            while(num!=0){
                  ll divide = num%10;
                  // cout<<"mod: " <<num<<endl;
                  dp[i]=min(dp[i],dp[i-divide]+1);
                  num/=10;
                  // cout<<"div: " << num<<endl;
            }
            // cout<<"dp: " << dp[i]<<endl;
            // cout<<endl;

      }

      cout<<dp[x]<<endl;
}

int main (){

      ll t=1;
      // cin>>t;
      while(t--){
            solve();
      }

}