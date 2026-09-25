#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>

const ll MOD = 1e9+7;

using namespace std;

int main(){

      ll n;cin>>n;
      vector<vector<char>> grid(n+5, vector<char>(n+5,0));
      for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                  cin>>grid[i][j];
            }
      }

      vector<vl> dp(n+5, vl(n+5,0));
      dp[1][1]=1;

      for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                  if(grid[i][j]=='.'){
                        if(j>0){
                              dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
                        }
                        if(i>0){
                              dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
                        }
                  }else{
                        dp[i][j]=0;
                  }
            }  
      }

      cout<<dp[n][n]<<endl;

}