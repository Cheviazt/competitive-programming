#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
const ll maxn=2e5+1;
vector<ll>vis(maxn);
vector<ll>a(maxn);
vector<vector<ll>>g(maxn);
ll dfs(ll start){
    stack<ll>st;
    ll ans=0;
    st.push(start);
    ans+=a[start];
    vis[start]=true;
    while(!st.empty()){
        // cout<<"masuk"<<endl;
        ll tp=st.top();
        st.pop();
        for(ll i=0;i<(ll)g[tp].size();i++){
            ll city=g[tp][i];
            // cout<<"city: "<<city<<endl;
            // if(start==2)cout<<"vis 1: "<<vis[1]<<endl;
            if(!vis[city]&&abs(ans+a[city])>abs(ans)){
                vis[city]=true;
                st.push(city);
                // if(start==2)cout<<"city: "<<city<<endl;
                // cout<<"start :"<<start<<endl;
                // cout<<"nilai city: "<<a[city]<<endl;
                // cout<<endl<<"ans+a: "<<ans+a[city]<<endl;
                ans+=a[city];
                // cout<<"ans: "<<ans<<endl;
            }
        }
    }
    return abs(ans);
}
void solve(){
    ll n;cin>>n;
    
    for(ll i=1;i<=n;i++)cin>>a[i];
        // cout<<"masuk"<<endl;

    for(ll i=0;i<n-1;i++){
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        // cout<<"v"<<endl;
        // cout<<"masuk"<<endl;
    }
    // cout<<"2:"<<endl;
    // for(auto x:g[2])cout<<x<<' ';
    // cout<<endl;
    for(ll i=1;i<=n;i++){
        // cout<<"masuk"<<endl;
        vis=vector<ll>(maxn);
        cout<<dfs(i)<<' ';
    }
}
  
int main () {
    bismillah
    ll t; t=1;
    //cin>>t;
    while(t--){solve();}
}