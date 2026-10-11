#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;cin>>n;
    ll ans=0;
    for(ll i=1; i*i<=n;i++){
        if(n%i==0){
            if (i == n / i) ans += 1;
            else ans += 2;
        }
    }

    // if(n>1)ans++;

    cout<<(ans % 2 == 1 ? "YES" : "NO")<<endl;
}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}