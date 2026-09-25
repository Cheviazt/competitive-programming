#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
      ll n,x;cin>>n>>x;
      vector<int> price(n),book(n);

      for(auto &x:price)cin>>x;
      for(auto &x:book)cin>>x;

      vector<vector<int>> dp(n+1,vector<int>(x+1,0));

      for(ll i=1;i<=n;i++){
            for(ll j=0;j<=x;j++){
                  dp[i][j]=dp[i-1][j];          
                  int sisa=j-price[i-1];
                  if(sisa>=0){
                        dp[i][j]=max(dp[i][j], dp[i-1][sisa]+book[i-1]);
                  }
            }
      }

      cout<<dp[n][x]<<endl;

}