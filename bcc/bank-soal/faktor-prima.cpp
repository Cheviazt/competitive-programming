#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<bool> prime(10000001, true);

void load() { 

    prime[0] = prime[1] = false;
    for (int i = 2; i*i <= 10000001; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= 10000001; j+=i) {
                prime[j] = false;
            }
        }
    }

}

int main () {

    load();
    ll n;cin>>n;

    // 56

    for (int i = 2; i < n; i++) {
        if (prime[i] && n % i == 0) {\
            int power=0;
            while(n % i == 0){
                power++;
                n /= i;
            }
            if (power > 1) {
                cout << i << "^" << power;
                if (n > 1) {
                    cout << " x ";
                }
            }else{
                cout << i;
                if (n > 1) {
                    cout << " x ";
                }
            }
        }
    }

    if (n > 1) {
        cout << n;
    }
}