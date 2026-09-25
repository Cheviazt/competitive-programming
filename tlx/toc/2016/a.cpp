#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    if (k>n) {
        cout<<"0"<<endl;
        return 0;
    }
/*
 *  11 7 6 9
 *  11 9 7 6
 * 5
 *
 */
    sort(arr,arr+n);
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, );
    }
}