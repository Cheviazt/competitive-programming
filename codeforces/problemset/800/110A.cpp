#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ll n,cnt=0; cin >> n;

    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) {
            cnt++;
        }
        n /= 10;
    }
    
    if (cnt == 4 || cnt == 7) {
        cout << "YES" << endl;
    }else{
        cout << "NO" <<  endl;
    }

}