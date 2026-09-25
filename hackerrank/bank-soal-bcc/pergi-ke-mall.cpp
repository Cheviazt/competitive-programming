#include <bits/stdc++.h>

using namespace std;

int arr[101];
int chi (int a, int b) {
    while (b != 0) {
        int s = a % b;
        a = b;
        b = s;
    }
    return a;
}
int gapa (int a, int b) {
    return (a) / chi(a,b) * b;
}
int main () {
    int n;
    vector<pair<string, int>> hari = {
        {"senin",0},
        {"selasa", 1},
        {"rabu", 2},
        {"kamis", 3},
        {"jumat", 4},
        {"sabtu", 5},
        {"minggu", 6}
    };

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int kpk = arr[0];
    for (int i = 1; i < n; i++) {
        kpk = gapa(kpk, arr[i]);
    }

    string hariSekarang;
    int idHariSekarang = 0;
    cin >> hariSekarang;

    for (auto h : hari) {
        if (h.first == hariSekarang) {
            idHariSekarang = h.second;
            break;
        }
    }

    string ans;
    int idAns = (idHariSekarang + kpk) % 7;
    for (auto h : hari) {
        if (h.second == idAns) {
            ans = h.first;
        }
    }
    cout << ans << endl;
}