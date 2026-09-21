#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 // 8 3 2
// 00000000
// 00110000


void solve(){
    ll n,m,k;cin>>n>>m>>k;
    string s; cin>>s;
    vector<ll> cek(n,0);

    ll ans=0,sum=0,cnt=0;
    for(ll i=0;i<n;i++){
        sum+=cek[i];
        if(sum||s[i]=='1')cnt=0;
        else{
            cnt++;
            if(cnt==m){
                sum++,ans++,cnt=0;
                if(i+k<n)cek[i+k]--;
            }
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