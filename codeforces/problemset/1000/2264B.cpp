#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 

/*
5 3
0 8 1 7 3
[0]
[8,0]

4 3
0 -4 10 -2

4 2
0 5 -2 4

6 3
0 9 8 7 6 5

1 1
7

3 2
5 -100 4

*/
void solve(){
    
    ll n,m;cin>>n>>m;
    vector<ll> arr(n);
    for(auto &x:arr)cin>>x;
    
    priority_queue<ll> pq;
    ll sum=0, ans=LLONG_MIN;
    for(ll i=0;i<n;i++){
        if((int)pq.size() == m-1){
            ans=max(ans,m*arr[i]-sum);
        }

        pq.push(arr[i]);
        sum +=arr[i];

        if((int)pq.size() == m){
            sum-=pq.top();
            pq.pop();
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