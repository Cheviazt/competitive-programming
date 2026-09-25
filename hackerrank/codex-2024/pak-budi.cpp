#include <bits/stdc++.h>

using namespace std;

bool prime[10000001] = {true};

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {

    int n; cin >> n;
    vector<int> v, res;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int a; cin >> a;

    for (int i = 0; i < n; i++) {
        // bool cek = isPrime(v[i]);
        if (!isPrime(v[i]) && isPrime(v[i] - a)) {
            ans++;
            res.push_back(v[i]);
        }
    }

    cout << ans << endl;
    for(auto a : res){
        cout << a << " ";
    }

}