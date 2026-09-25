#include <bits/stdc++.h>

using namespace std;

bool relativePrime(int a, int b){
    int ix = 0;
    for (int i = 1; i <= min(a,b); i++) {
        if ((a % i == 0) && (b % i == 0)) {
            ix++;
        }
    }

    if (ix > 1) {
        return false; 
    } else {
        return true;
    }
}

int main () {

    int n; cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        if (!relativePrime(arr[i], arr[i+1])) {
            flag = false;
            break;
        }
    }

    if (flag){

        cout << "Mamah aku selamat" << endl;
    }else{
        cout << "BOOM" << endl;
    }

}