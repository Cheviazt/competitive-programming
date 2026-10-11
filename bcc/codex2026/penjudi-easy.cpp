#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    int n;cin>>n;
    
    int ans=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)ans++;
    }
    
    cout<<((ans%2==0) ? "NO" : "YES")<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}