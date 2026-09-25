#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        if (temp > max) {
            max = temp;
        }
    }

    cout <<  max <<  endl;

}