#include <bits/stdc++.h>

using namespace std;

/*
 * 123456
 *
 *
 *
 */

int main () {

    int nuklir, digit_ganjil, digit_genap, selisih;
    digit_ganjil = digit_genap = 0;
    cin>>nuklir;

    for(int i=0;i<6;i++) {
        int a = nuklir%10;
        nuklir=nuklir/10;
        if (i % 2 == 0) {
            digit_ganjil += a;
        } else {
            digit_genap += a;
        }
    }
    selisih = abs(digit_ganjil-digit_genap);

    int n; cin >> n;
    int arr[n+1];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int ans, max;
    max = 0;
    for (int i = selisih; i < n-selisih; i++) {
        int temp = 0;
        for (int j = i-selisih; j < i+selisih; j++) {
            temp += arr[j];
        }
        if (temp > max) {
            max = temp;
            ans = i;
        }
    }

    cout<<ans+1<<endl;


}