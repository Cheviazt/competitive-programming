#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

ll const MOD=1000000007;

int main () {
      bismillah
    
      ll a,target;cin>>a>>target;
      vector<int> coins(a), dp(target+5,0);
      vector<bool> cek(target+5, false);
      for(auto &z:coins)cin>>z;

      // 2 3 5
      // 9
      // 1 -> 0
      // 2 -> 1
      // 3 -> 1
      // 4 -> 1
      // 5 -> 1+1+1 = 3
      // 6 -> 1+1 = 2

      cek[0]=true;
      dp[0] = 1;
      for(int i=1;i<=target;i++){
            for(auto z:coins){
                  if (z<=i){
                        dp[i]=(dp[i]+dp[i-z])%MOD;
                        // cek[i]=true;
                  }
            }
      }

      cout<<dp[target]<<endl;
}