#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p1(n, -1), p2(n, -1);
    for (int i = 0; i < 2 * n; ++i) {
        int a;
        cin >> a;
        if (p1[a] == -1) p1[a] = i;
        else p2[a] = i;
    }

    // L dan R adalah batas luar dari angka-angka yang sudah kita proses
    int L = p1[0], R = p2[0];
    int ans = 1; // MEX 1 selalu mungkin jika n > 0

    // Cek apakah 0 bisa membentuk palindrom (pasti bisa: [0...0] jika di tengahnya simetris)
    // Tapi soal ini unik: setiap angka muncul 2x. 
    // MEX k tercapai jika 0, 1, ..., k-2 saling membungkus, 
    // dan k-1 bisa berada di antaranya.
    
    int k = 1;
    while (k < n) {
        // Angka k harus berada di DALAM rentang [L, R] agar bisa jadi palindrom
        if (p1[k] > L && p2[k] < R) {
            // Jika k di dalam, maka k bisa menjadi bagian dari palindrom yang dibungkus k-1, k-2...0
            // Kita perbarui L dan R untuk mengecil ke dalam (nested)
            L = p1[k];
            R = p2[k];
            k++;
        } else {
            break;
        }
    }
    
    // MEX adalah k jika k-1 adalah angka terakhir yang berhasil masuk
    // Namun kita bisa menambah 1 lagi jika angka k hanya muncul SEKALI di tengah
    // Tapi karena setiap angka muncul 2x, jika kita ambil satu 'k', 
    // MEX tetap k+1 asalkan struktur di luar k tetap palindrom.
    
    // Hasil yang benar untuk pola "setiap angka muncul 2x":
    cout << k + (k < n ? 1 : 0) << endl; 
    // Kita tambah 1 karena angka 'k' bisa diletakkan di tengah-tengah sebagai elemen tunggal.
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}