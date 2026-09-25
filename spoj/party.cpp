#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    while(true){
        int m,n;cin>>m>>n;
        if(m==0&&n==0)break;

        vector<int> cost(n+1),fun(n+1);
        for(int i=1;i<=n;i++){
            cin>>cost[i]>>fun[i];
        }

        vector<int> dp(m+5, 0);
        for(int i=1;i<=n;i++){
            for(int j=m;j>=cost[i];j--){
                int candidate = dp[j-cost[i]] + fun[i];
                if(candidate > dp[j]){
                    dp[j] = candidate;
                    // dp[j].second = dp[j].second+cost[i];
                }
            }
        }

        int mxfun=dp[m];
        int mncost=0;
        for(int j=0;j<=m;j++){
            if(dp[j]==mxfun){
                mncost=j;
                break;
            }
        }
        cout<<mncost<<" "<<dp[m]<<endl;
    }

}