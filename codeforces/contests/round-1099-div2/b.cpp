#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Langkah 1: Cari nilai minimum k (L) berdasarkan inversi yang ada
    long long L = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            L = max(L, a[i] - a[i + 1]);
        }
    }

    // Jika sudah terurut dari awal
    if (L == 0) {
        cout << "YES\n";
        return;
    }

    // Langkah 2: Lakukan pengecekan dengan pendekatan Greedy menggunakan k = L
    long long k = L;
    long long current_val = a[0];
    bool possible = true;

    for (int i = 1; i < n; ++i) {
        if (a[i] >= current_val) {
            // Sebisa mungkin jangan ditambah k agar nilainya sekecil mungkin
            current_val = a[i];
        } else if (a[i] + k >= current_val) {
            // Jika terpaksa, tambahkan dengan k
            current_val = a[i] + k;
        } else {
            // Jika sudah ditambah k tetapi masih lebih kecil dari elemen sebelumnya
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Mengoptimalkan waktu Input/Output (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}