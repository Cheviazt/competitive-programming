#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];


    // 3 2 4 1 7
    int cnt=0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n-1; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
}