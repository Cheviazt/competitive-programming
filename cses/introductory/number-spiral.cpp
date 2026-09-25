#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    ll q; cin>>q;
    while(q--){
        ll x,y;cin>>x>>y;
        ll n=max(x,y);
        ll b=(n-1)*(n-1);

        ll ans;
        if(n%2==0){
            if(n==y) ans=b+x;
            else ans=n*n-y+1; 
        }else{
            if(n==x)ans=b+y;
            else ans=n*n-x+1;
        }

        cout << ans << endl;
    }
    
}