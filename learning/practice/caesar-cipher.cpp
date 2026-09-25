#include <bits/stdc++.h>

using namespace std;

int main () {

    // char be = 97;
    // cout << be << endl;
    cout << "Masukkan kalimat yang mau di enkripsi: ";
    string words; cin >> words;
    cout << "Masukkan nilai K: ";
    int d; cin >> d;
    string ans = "";
    for (auto c : words) {
        int a = (int)c + (d%26);
        char x = a;
        ans += x;
    }

    cout << "Hasil Enkripsi: " << ans << endl;

}