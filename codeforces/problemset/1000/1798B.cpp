#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

void solve(){
    
    ll m;cin>>m;
    vector<vector<ll>> arr(m);
    vector<ll> last(50500);
    for(ll day=0;day<m;day++){
        ll n;cin>>n;
        for(ll i=0;i<n;i++){
            int x;cin>>x;
            arr[day].push_back(x);
            last[x]=day;
        }
    }

    vector<ll> ans(m,-1);
    for (ll day=0;day<m;day++) {
        for (auto x:arr[day]) {
            if(last[x]==day)ans[day]=x;
        }
        if(ans[day]==-1){
            cout<<-1<<endl;
            return;
        }
    }

    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}