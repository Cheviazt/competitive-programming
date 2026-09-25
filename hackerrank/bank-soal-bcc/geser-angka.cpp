#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    string s;

    for (int i = 0; i < 9; i++) {
        cin >> s;
        if (s != "_") {
            arr.push_back(stoi(s));
        }
    }

    int inversi = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversi++;
            }
        }
    }

    if (inversi % 2 == 0) {
        cout << "Bisa" << endl;
    } else {
        cout << "Tidak bisa" << endl;
    }

    return 0;
}
