#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t; cin>>t;
    while(t--){
        int n,ans=0,cnt1=0,cnt2=0; cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==0)ans++;
            if(x==1)cnt1++;
            if(x==2)cnt2++;
        }

        int same=min(cnt1,cnt2);
        ans+=same;
        if(cnt1==same){
            cnt2-=same;
            ans+=cnt2/3;
        }else{
            cnt1-=same;
            ans+=cnt1/3;
        }
        cout<<ans<<endl;
    }
    
}