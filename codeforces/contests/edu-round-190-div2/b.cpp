#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        int len=s.length();

        int dp1,dp2;
        dp1=dp2=0;
        for(auto x : s){
            if(x=='2'){
                dp1++;
            }

            if(x=='1'||x=='3'){
                dp2=max(dp1+1,dp2+1);
            }
        }

        cout << len-max(dp1,dp2)<<endl;
    }
    
}