#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; cin >> n;
    // 1 2 3 -4 -5 -6 5 -5 -6 -7 6

    int arr[n+1];
    vector<int> v;
    int non=0,cnt=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) non++;
        if (non < 3) {
            cnt++;
            if (i == n-1){
                v.push_back(cnt);
                continue;
            }
        }else{
            v.push_back(cnt);
            cnt=1;
            non=1;
        }

        if (i == n-1) {
            v.push_back(cnt);
        }
    }

    // for (int i = 0; i < n;) {
    //     cin >> arr[i];
    //     if (arr[i] < 0) non++;

    //     if (non < 3) {
    //         cnt++;
    //     }else{
    //         v.push_back(cnt);

    //     }

    // }

    
    cout << v.size() << "\n";
    for (auto x : v) {
        cout << x << " ";
    } 

}