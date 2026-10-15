#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;
    pair<ll,ll> hp;
    priority_queue<ll> pq;
    string s;cin>>s;
    cin>>n>>hp.first>>hp.second;
    vector<ll> gate(n),k(n),l(n);

    ll ans=0;
    ll tmpk,tmpl;
    for(int i=0;i<n-1;i++){
        cin>>gate[i]>>tmpk>>tmpl;
        // tmpk=k[i];
        // tmpl=l[i];
        
        
        while(!pq.empty() && hp.first<gate[i]){
            hp.first++;
            ans+=abs(pq.top());
            pq.pop();
        }
   

        if(pq.empty() && hp.first<gate[i]){
            cout<<-1<<endl;
            return;
        }


        if(tmpl<=tmpk){
            ans+=tmpl;
            hp.first++;
        }else{
            pq.push(tmpk-tmpl);
            ans+=tmpk;
        }
    }

    while(!pq.empty() && hp.first<hp.second){
        hp.first++;
        ans+=abs(pq.top());
        pq.pop();
    }

    if(pq.empty() && hp.first<hp.second){
        cout<<-1<<endl;
        return;
    }

    cout<<ans<<endl;
    // cout<<hp.first<<endl;
    // cout<<hp.second<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}