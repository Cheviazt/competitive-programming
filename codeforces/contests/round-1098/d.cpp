#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 lll;

vector<int> D;

lll largestOfLen(int len) {
    if (len <= 0) return -1;
    if (len > 1 && D.back() == 0) return -1;
    lll val = 0;
    for (int i = 0; i < len; i++) val = val * 10 + D.back();
    return val;
}

lll smallestOfLen(int len) {
    if (len <= 0) return -1;
    if (len == 1) return D[0];
    int first = -1;
    for (int x : D) if (x > 0) { first = x; break; }
    if (first == -1) return -1;
    lll val = first;
    for (int i = 1; i < len; i++) val = val * 10 + D[0];
    return val;
}

lll findLargestLeq(const string& sa) {
    int L = sa.size();
    vector<int> res(L);
    function<bool(int, bool)> go = [&](int pos, bool tight) -> bool {
        if (pos == L) return true;
        int lim = tight ? (sa[pos]-'0') : 9;
        for (int i = (int)D.size()-1; i >= 0; i--) {
            if (D[i] > lim) continue;
            res[pos] = D[i];
            if (D[i] < lim) {
                for (int j = pos+1; j < L; j++) res[j] = D.back();
                return true;
            }
            if (go(pos+1, true)) return true;
        }
        return false;
    };
    if (!go(0, true)) return -1;
    if (L > 1 && res[0] == 0) return -1;
    lll val = 0;
    for (int x : res) val = val*10 + x;
    return val;
}

lll findSmallestGeq(const string& sa) {
    int L = sa.size();
    vector<int> res(L);
    function<bool(int, bool)> go = [&](int pos, bool tight) -> bool {
        if (pos == L) return true;
        int lim = tight ? (sa[pos]-'0') : 0;
        for (int i = 0; i < (int)D.size(); i++) {
            if (D[i] < lim) continue;
            res[pos] = D[i];
            if (D[i] > lim) {
                for (int j = pos+1; j < L; j++) res[j] = D[0];
                return true;
            }
            if (go(pos+1, true)) return true;
        }
        return false;
    };
    if (!go(0, true)) return -1;
    if (L > 1 && res[0] == 0) return -1;
    lll val = 0;
    for (int x : res) val = val*10 + x;
    return val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll a; int n;
        cin >> a >> n;
        D.resize(n);
        for (int i = 0; i < n; i++) cin >> D[i];

        string sa = to_string(a);
        int L = sa.size();
        lll A = (lll)a, ans = -1;

        auto upd = [&](lll b) {
            if (b < 0) return;
            lll diff = b > A ? b-A : A-b;
            if (ans < 0 || diff < ans) ans = diff;
        };

        upd(findLargestLeq(sa));   // b ≤ a, panjang L
        upd(findSmallestGeq(sa));  // b ≥ a, panjang L
        upd(largestOfLen(L-1));    // b < a,  panjang L-1
        upd(smallestOfLen(L+1));   // b > a,  panjang L+1

        cout << (ll)ans << "\n";
    }
    return 0;
}