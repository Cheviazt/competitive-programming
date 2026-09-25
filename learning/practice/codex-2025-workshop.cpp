#include <bits/stdc++.h>
#define long long ll

using namespace std;

int fak(int n){
    if(n == 0 || n == 1) return n;

    return n*fak(n-1);
}

int main () {
    int n; cin >> n;

    cout << fak(n)/fak(n-2)*fak(2);
}