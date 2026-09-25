#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Hitung bilangan ke-k (0-indexed) dengan L digit dari {d0, d1}
// Jika d0=0 dan L>1, digit pertama wajib d1 (tidak boleh leading zero)
ll kth_number(ll k, int L, int d0, int d1) {
    ll result = 0;
    if (d0 == 0 && L > 1) {
        // Digit pertama selalu d1
        result = d1;
        // Sisa L-1 digit di-encode dari bit k
        for (int i = L - 2; i >= 0; i--) {
            int bit = (k >> i) & 1;
            result = result * 10 + (bit ? d1 : d0);
        }
    } else {
        // Semua L digit di-encode dari bit k
        for (int i = L - 1; i >= 0; i--) {
            int bit = (k >> i) & 1;
            result = result * 10 + (bit ? d1 : d0);
        }
    }
    return result;
}

ll count_valid(int L, int d0) {
    if (L == 1) return 2LL;
    if (d0 == 0) return 1LL << (L - 1); // digit pertama wajib d1
    return 1LL << L;
}

ll min_diff_for_length(ll a, int L, int len_a, int d0, int d1) {
    ll cnt = count_valid(L, d0);

    if (L < len_a) {
        // Semua nilai valid < a → ambil yang terbesar
        ll max_val = kth_number(cnt - 1, L, d0, d1);
        return a - max_val;
    }
    if (L > len_a) {
        // Semua nilai valid > a → ambil yang terkecil
        ll min_val = kth_number(0, L, d0, d1);
        return min_val - a;
    }

    // L == len_a: binary search floor & ceil
    ll min_val = kth_number(0, L, d0, d1);
    ll max_val = kth_number(cnt - 1, L, d0, d1);

    if (a <= min_val) return min_val - a;
    if (a >= max_val) return a - max_val;

    // Cari k terbesar dengan kth_number(k) <= a
    ll lo = 0, hi = cnt - 1;
    while (lo < hi) {
        ll mid = (lo + hi + 1) / 2;
        if (kth_number(mid, L, d0, d1) <= a) lo = mid;
        else hi = mid - 1;
    }

    ll floor_val = kth_number(lo, L, d0, d1);
    ll result = a - floor_val;

    if (lo + 1 < cnt) {
        ll ceil_val = kth_number(lo + 1, L, d0, d1);
        result = min(result, ceil_val - a);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll a;
        int n;
        cin >> a >> n;

        int d[2];
        for (int i = 0; i < n; i++) cin >> d[i];
        int d0 = d[0], d1 = d[1];

        int len_a = (int)to_string(a).size();

        ll ans = LLONG_MAX;
        // Cukup cek 3 panjang: len_a-1, len_a, len_a+1
        for (int L = max(1, len_a - 1); L <= len_a + 1; L++) {
            ans = min(ans, min_diff_for_length(a, L, len_a, d0, d1));
        }

        cout << ans << "\n";
    }

    return 0;
}