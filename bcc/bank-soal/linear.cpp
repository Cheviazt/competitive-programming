#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x;cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans=0, mins = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int range = abs(arr[i]-x);
        if (mins == range) {
            ans = min(arr[i],ans);
        }
        if (range < mins){
            mins = range;
            ans = arr[i];
        }
    }

    cout << ans << "\n";
}