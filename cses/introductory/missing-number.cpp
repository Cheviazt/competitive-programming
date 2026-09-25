#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int n; cin >> n; 
    vector<int> arr(n+1, 0);

    for(int i=1;i<=n;i++){
        int x;cin>>x;
        arr[x]=1;
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==0)cout<<i<<endl;
    }
    
}