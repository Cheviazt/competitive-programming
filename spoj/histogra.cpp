#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;
    while(cin>>n&&n!=0){
        vector<ll> arr(n+1,0);
        for(ll i=0;i<n;i++)cin>>arr[i];
        vector<ll> st;
        st.reserve(n+1);
        ll ans=0;
        for(ll i=0;i<=n;i++){
            while(!st.empty()&&arr[st.back()]>=arr[i]){
                ll h=arr[st.back()];
                st.pop_back();
                ll left=st.empty() ? -1 : st.back();
                ll w=i-left-1;
                ans=max(ans,w*h);
            }
            st.push_back(i);
        }

        cout<<ans<<endl;
    }
    
}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}