#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    int arr[n+1];
    
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int maks,min;
    maks = min = 1;
    for (int i = 1; i <= n; i++) {
        if (arr[i] > arr[maks]) {
            maks = i;
        }
        if (arr[i] <= arr[min]) {
            min = i;
        }
    }

    if (maks > min) {
        cout << abs(1-maks) + abs(n-min)-1;
    }else{
        cout << abs(1-maks) + abs(n-min);
    }

}