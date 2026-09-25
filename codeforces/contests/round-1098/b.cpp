#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'
 
using namespace std;
 
int main () {
    bismillah
    
    int t;cin>>t;
    while(t--){
        ll n,x1,x2,k,ans=0;cin>>n>>x1>>x2>>k;
 
        if(n==2||n==3){
            cout<<1<<endl;
            continue;
        }
        ll d1,d2;
        d1=abs(x1-x2);
        d2=n-d1;
        ll z=min(d1,d2);
        cout<<k+z<<endl;
    }
    
}