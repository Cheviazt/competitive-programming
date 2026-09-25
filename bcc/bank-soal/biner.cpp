#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    ll arr[n];
    for(int i = 0; i < n; i++)cin>>arr[i];

    sort(arr, arr+n);

    // 1 3 5 7` 9 10 11
    // 2 7

    int q;cin>>q;
    while (q--) {
        int x,y;cin>>x>>y;
        int l=0,r=n-1,kiri=-1,kanan=-1;
        while (l <= r) {
            int mid = (l+r)/2;
            if (arr[mid] > x) {
                r = mid-1;
                kiri = mid;
            }else{
                l = mid+1;
            }
        }

        l = 0, r=n-1;
        while(l <= r) {
            int mid = (l+r)/2;
            if (arr[mid] <= y) {
                l = mid+1;
                kanan = mid;
            }else{
                r = mid-1;
            }
        }

        if (kiri == -1 || kanan == -1) {
            cout << "0" << "\n";
            continue;
        }

        cout << kanan-kiri+1 << "\n";

    }

}