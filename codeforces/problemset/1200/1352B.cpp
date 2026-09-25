#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int q;cin>>q;
    while(q--){
        ll n,k;cin>>n>>k;
        
        ll c1=n-(k-1);
        if(c1>0 && c1%2==1){
            cout<<"YES"<<endl;
            for(int i = 0; i < k-1; i++){
                cout << "1 ";
            }
            cout<<c1<<endl;
            continue;
        }

        ll c2=n-(k-1)*2;
        if(c2>0 && c2%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"2 ";
            }
            cout<<c2<<endl;
            continue;
        }

        cout<<"NO"<<endl;
    }
    
}