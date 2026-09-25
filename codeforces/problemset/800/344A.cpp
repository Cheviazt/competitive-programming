#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,ans=0; cin >> n;

    for (int i = 0; i < n; i++) {
        int temp,now;
        cin >> now;
        if (temp != now){
            ans++;
        }
        temp = now;
    }

    cout << ans << endl;

}