#include <bits/stdc++.h>

using namespace std;

long long kpk(int a, int b){
    return (a * b) / __gcd(a,b);
}

int main () {
    string n; cin >> n;

    map<char, int> freq;
    for (auto a : n) {
        freq[a]++;
    }

    long long ans = 1;
    for (auto [c, f] : freq) {
        ans = kpk(ans,f);
    }

    cout << ans << endl;


}