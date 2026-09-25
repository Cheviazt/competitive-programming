#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    int n;cin>>n;
    int arr[n+1];
    int pref[n+1];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    pref[0] = arr[0];
    for(int i = 1; i < n; i++){
        pref[i] = arr[i]+pref[i-1];
    }

    // 10 20 30 
    // 5 10 30 10
    // 5 15 45 55 | 16 4 8 56

    // int ans=-1;
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        
        cout << lower_bound(pref, pref+n, x)-pref+1 << "\n";
    }

}