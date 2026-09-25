#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int n,k;cin>>n>>k;
    int tot=0,cnt=0,saldo=0;
    while(n--){
        int ni;cin>>ni;
        if(tot>=k)break;
        if (ni>=8){
            saldo+=ni-8;
            tot+=8;
            cnt++;
        }else{
            // cout<<saldo<<endl;
            if(saldo>0){
                tot+=min(saldo+ni,8);
                saldo-=min(saldo+ni,8);
            }else{
                tot+=ni;
            }
            cnt++;
        }

    }
    // cout<<
    // cout<<tot<<endl;
    if(tot>=k) cout<<cnt<<endl;
    else cout<<"-1"<<endl; 
    
}