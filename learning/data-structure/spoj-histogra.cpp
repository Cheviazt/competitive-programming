#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(ll n){
    
    vector<ll> arr(n);
    for(auto &x:arr)cin>>x;

    ll ans=LLONG_MIN,p=0,l=0;
    vector<ll> st;
    for(auto x:arr){
        p++;
        while(!st.empty()){
            if(st.back() >= x){
                ans=max(ans, p*st.())
            }else{
                st.pop_back();
                p--;
            }
        }
    }

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t!=0){solve(t);}
}