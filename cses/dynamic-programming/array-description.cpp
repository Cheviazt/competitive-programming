#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD=1e9+7;

int main () {

      int n,m;cin>>n>>m;
      vector<int> nums(n);
      for(auto &x:nums)cin>>x;

      vector<vector<int>> dp(n+5, vector<int>(m+5,0));
      if(nums[0]==0){
            for(int i=1;i<=m;i++){
                  dp[0][i]=1;
            }
      }else{
            dp[0][nums[0]]=1;
      }

      for(int i=1;i<n;i++){
            if(nums[i]==0){
                  for(int j=1;j<=m;j++){
                        for(auto x:{j-1,j,j+1}){
                              if(x>=1&&x<=m){
                                    dp[i][j] = (dp[i][j]+dp[i-1][x])%MOD;     
                              }
                        }
                  }
            }else{
                  for(auto x:{nums[i]-1,nums[i],nums[i]+1}){
                        if(x>=1&&x<=m){
                              dp[i][nums[i]] = (dp[i][nums[i]]+dp[i-1][x])%MOD;
                        }
                  }
            }
      }

      int ans=0;
      for(int i=1;i<=m;i++){
            (ans+=dp[n-1][i])%=MOD;
            // cout<< ans<<endl;
      }

      cout<<ans<<endl;


}