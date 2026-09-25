#include <bits/stdc++.h>
#define ll long long
    
using namespace std;
    
int main () {
    int x;cin>>x;
    vector<int> v(x);

    for(int i=0;i<x;i++) cin>>v[i];

    vector<int> prefix(x);
    prefix[0] = v[0];
    for(int i=1;i<x;i++) prefix[i] = prefix[i-1] + v[i];

    int l,r;cin>>l>>r;
    cout<<prefix[r]-prefix[l-1]<<endl;
}