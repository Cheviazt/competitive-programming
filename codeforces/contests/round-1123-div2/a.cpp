#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    // string s;cin>>s;
    ll n;cin>>n;
    char c;cin>>c;
    string s;cin>>s;

    ll ans=0;
    for(ll i = 0; i < n/2; i++){
        if(s[i]==s[n-i-1])continue;
        if(s[i]!=c)ans++;
        if(s[n-i-1]!=c)ans++;
    }
    cout<<ans<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}