#include <bits/stdc++.h>

using namespace std;

int total = 10;
int kandang[11];

void kosongkan() {
    for (int i = 0; i < total; i++) {
        kandang[i] = 0;
    }
}

int cekTerbanyak() {
    int ans = kandang[0];
    for (int i = 1; i < total; i++) {
        ans = max(ans, kandang[i]);
    }
    return ans;
}

void masukkan(int awal, int akhir, int jumlah) {
    for (int i = awal-1; i <= akhir-1; i++) {
        kandang[i] += jumlah;
    }
}

int main(){
    kosongkan();

    masukkan(1, 8, 2);
    masukkan(2, 9, 10);
    masukkan(5, 6, 1);
    masukkan(9, 10, 3);
    masukkan(1, 4, 7);
    masukkan(1, 4, 2);
    masukkan(4, 8, 6);

    cout << cekTerbanyak() << endl;
}
