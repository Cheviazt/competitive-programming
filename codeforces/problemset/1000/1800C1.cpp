#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;cin>>n;
    vector<ll> st;
    ll ans=0;
    for(ll i=0;i<n;i++){
        int x; cin>>x;
        if(x>0){
            st.push_back(x);
        }else if(st.size()>0){
            sort(st.begin(),st.end(),greater<>());
            ans+=st[0];
            st.erase(st.begin());
        }
    }

    cout<<ans<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}