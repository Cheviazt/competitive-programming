#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,r,v; cin >> n >> r >> v;

    double maks = INT_MIN;

    vector<double> arr(n);
    for (auto &a : arr){
        cin >> a;
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            flag = false;
            break;
        }else{
            double divid = r / abs(arr[i]-v);
            maks = max(maks, divid);
        }
    }

    flag ? cout << fixed << setprecision(9)<<maks : cout << "-1";


}