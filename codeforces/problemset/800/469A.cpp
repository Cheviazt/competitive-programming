#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;

    bool arr[n];
    memset(arr, false, sizeof(arr));

    for (int i = 0; i < 2; i++) {
        int x; cin >> x;
        for (int j = 0; j < x; j++) {
            int a; cin >> a;
            arr[a-1] = true;
        }
    }

    for (auto a : arr) {
        if (!a) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
}