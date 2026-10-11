#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;cin>>n;
    string s;
    cin>>s;
    // ll i=1;
    vector<int> ans,ans2;
    for(ll i=0;i<n;i++){
        ll num=s[i]-'0';
        // cout<<"num: "<<num<<endl;
        if(num==1)ans.push_back(i+1);
        if(num==2){
            if(!ans.empty()){
                ans.pop_back();
                // ans.push_back(i+1);
                ans2.push_back(i+1);
            }
        }
        // if(num==3)
    }

    vector<int> last;
    

    for(auto x:ans2)last.push_back(x);
    for(auto x:ans)last.push_back(x);
    sort(last.begin(),last.end());
    cout<<last.size()<<endl;
    for(auto x:last)cout<<x<<" ";
    cout<<endl;
    

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}