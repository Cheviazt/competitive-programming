#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

ll n,r,y,j;
vector<pair<ll,char>> tari(15);
vector<ll> pref(200005,0),dance(15);
vector<bool> vis(15,false);
 
void go(ll p){
    if(p<=r){
        for(ll i=1;i<=n;i++){
            if(!vis[i]){
                vis[i]=true;
                dance[p]=i;
                go(p+1);
                vis[i]=false;
            }
        }
        return;
    }

    ll ans=tari[dance[1]].first,yakin=0;
    for(ll i=2;i<=r;i++){
        if(tari[dance[i-1]].second=='Y')yakin++;

        if(tari[dance[i-1]].second=='P'){
            ans+=(tari[dance[i]].first*2)+(yakin*y);
        }else if(tari[dance[i-1]].second=='L'){
            ans+=(tari[dance[i]].first/2)+(yakin*y);
        }else{
            ans+=(yakin*y)+tari[dance[i]].first;
        }
    }

    // for (auto x:dance) cout<<x<<" ";
    // cout<<endl; 

    // for(auto x:dance)cout<<x<<" ";
    // cout<<endl;
    // cout<<ans<<endl;

    pref[ans]++;
    // cout<<pref[ans]<<endl;
}

void solve(){
    
    string s;cin>>s>>n;
    cin>>n>>r>>y>>j;

    for(int i=1;i<=n;i++){
        cin>>tari[i].first>>tari[i].second;
    }

    go(1);
    for(ll i=1;i<=100001;i++){
        pref[i]+=pref[i-1];
    }

    // for(auto x:pref)cout<<x<<" ";
    while(j--){
        ll h;cin>>h;
        cout<<pref[100001]-pref[h]<<endl;
    }
    


}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}