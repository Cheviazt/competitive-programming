#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
// 1 2 3 4 -> 2 4
// 1 3 3 -> 
// 1 3

// 1 2 3 4 5 6
// 1 2 3 5 5
// 1 2 3 5
// 1 2 4
// 1 3
// 2

//  1 2 3 4 5
//  1 2 4 4
// 1 2 4
// 13
// 2

void solve(){
    
    ll n;cin>>n;
    vector<ll> arr;
    for(int i=1;i<=n;i++)arr.push_back(i);
    sort(arr.begin(),arr.end(),greater<>());

    cout<<2<<endl;
    if(n==2)cout<<1<<" "<<2<<endl;
    for(int i=0;i<n-1;i++){
        if(i==1)cout<<arr[i]<<" "<<arr[i]<<endl;
        if(i==n-2)break;
        cout<<arr[i+2]<<" "<<arr[i]<<endl;
    }
}
  
int main () {
    bismillah
    int t; t=1;
    cin>>t;
    while(t--){solve();}
}