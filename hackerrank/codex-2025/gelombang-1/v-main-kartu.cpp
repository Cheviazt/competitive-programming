#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll fakk[1000001];

void fak(int a){
    fakk[0] = 1;
    for (ll i = 1; i <= a; i++) {
        fakk[i] = (fakk[i-1]*i) % 1000000007;
    }
    // return sum;
}

int main () {
    ll a,b;
    cin >> a >> b;
    fak(a+1);
    cout << (fakk[a]/(fakk[a-b]*fakk[b]));
}