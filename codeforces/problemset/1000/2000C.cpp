#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    ll n;cin>>n;
    vector<ll> arr(n,0);
    for(auto &x:arr)cin>>x;

    ll m;cin>>m;
    while(m--){
        string s; cin>>s;
        unordered_map<char,int> map1;
        unordered_map<int,char> map2;
        if(s.length()!=n){
            cout<<"NO"<<endl;
            continue;
        }
        
        // 3 5 2 1 3
        // abfda
        // afbfa

        bool cek=true;
        for(ll i=0;i<s.length();i++){
            if(!map1.count(s[i])){
                map1[s[i]]=arr[i];
            }
            if(!map2.count(arr[i])){
                map2[arr[i]]=s[i];
            }
            // cout << map1[s[i]] <<endl;
            // cout<<map2[arr[i]]<<endl;
            if(map1[s[i]]!=arr[i] || map2[arr[i]]!=s[i]){
                cek=false;
                break;
            }
        }

        if(cek)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}