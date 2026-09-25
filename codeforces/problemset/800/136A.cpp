#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;

    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        arr[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout <<  arr[i] << " ";
    }
    cout <<  endl;

    

}