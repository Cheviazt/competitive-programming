#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    ll n;cin>>n;
    if(n<4&&n>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    ll i=2;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    i=1;
    while(i <= n){
        cout<<i<<" ";
        i+=2;
    }


    cout<<endl;

    
}