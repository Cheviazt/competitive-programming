#include <bits/stdc++.h>
#define long long ll

using namespace std;

vector<int> arr(101, true);

void sieve(){
    // memset(arr, true, sizeof(arr));
    arr[0] = arr[1] = false;
    for (int i = 2; i*i <= 100; i++) {
        if(arr[i]){
            for (int j = i*i; j <= 100; j+=i){
                arr[j] = false;
            }
        }
    }
}

int main () {
    sieve();
    int sum =0;
    for (int i = 0; i <= 100; i++){
        if(arr[i]) sum++;
    }

    cout << sum;
}