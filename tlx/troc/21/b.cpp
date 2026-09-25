#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,d,ans=0; cin >> n >> d;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    sort(v.begin(), v.end());
    for (int i : v) {
        int l = 0, r = n-1;
        while (l <= r) {
            int m = (l+r)/2;
            if(v[m] == d+i){
                ans++;
                break;
            }

            if (v[m] > i+d) r = m-1;
            else l = m+1;
        }
    } 

    cout << ans << "\n";

}