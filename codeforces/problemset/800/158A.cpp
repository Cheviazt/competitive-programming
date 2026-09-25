#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,k,ans=0; cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i < k && arr[i] == 0) {
            cout << ans;
            return 0;
        }else if (i < k && arr[i] != 0) {
            ans++;
        }
    }

    if (arr[0] <= 0) {
        cout << 0;
        return 0;
    }
    
    for (int i = k-1; i < n-1; i++) {
        if (arr[i] <= arr[i+1]) {
            ans++;
        }else{
            break;
        }
    }

    cout << ans;



}