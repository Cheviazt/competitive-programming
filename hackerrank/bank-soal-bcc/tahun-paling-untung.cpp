#include "bccTahunPalingUntung.h"

#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    int arr[n+1];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        v.push_back(make_pair(arr[i], i));
    }

     cout << v[v.first];

    int max = 0;
    bool cek = true;

    // while (n--) {
    //     int temp, awal, akhir;
    //
    //     cin >> arr[n];
    //     if (arr[n] > 0) {
    //         temp += arr[n];
    //
    //         akhir = 2020-n;
    //         if (cek) {
    //             awal = 2020-n;
    //             cek = false;
    //         }
    //         if (temp > max) {
    //             max = temp;
    //         }
    //     } else {
    //         awal = 0;
    //         cek = true;
    //         temp = 0;
    //     }
    // }

}