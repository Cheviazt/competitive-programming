#include <bits/stdc++.h>

using namespace std;

// 4 2 1
// 4 1 2
// 8 4 2
// 8 2 4
// 8 3 3
// 12 6 3

int main () {

    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+3, greater<>());

    if (arr[0] % 4 == 0) {
        if ((arr[1]+arr[2]+(arr[0]/4) == arr[0])) {
            cout << "YA" << endl;
        }else{
            cout << "TIDAK" << endl;
        }
    }else{
        cout << "TIDAK" << endl;
    }

}