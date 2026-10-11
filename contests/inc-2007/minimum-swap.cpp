#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    string s;
    char sorted[10005];
    
    while(cin>>s){
        ll len=s.length();

        for(ll i=0;i<len;i++){
            sorted[i]=s[i];
        }
        sort(sorted,sorted+len);

        //edcba
        //abcde

        for(ll i=0;i<len-1;i++){
            if(sorted[i]!=s[i]){
                for(ll j=i+1;j<len;j++){
                    if(s[i]==sorted[j]){
                        char tmp=s[i];
                        s[i]=sorted[i];
                        
                    }
                }
            }
        }
    }

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}