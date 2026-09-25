#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        vector<ll> y;
        int cnt=0;
        for (int i=1;i<=n*2;i++) {
            if(cnt<=n){
                if(i%3!=0){
                    y.push_back(i);
                }
                cnt++;
            }
        }

        for(auto x : y){
            cout << x << " ";
        }
        cout << endl;
    }

    
}