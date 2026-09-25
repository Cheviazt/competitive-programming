#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n+1];
        int maks=INT_MIN,mins=INT_MAX, pos1,pos2;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < mins){
                pos1 = i+1;
                mins = arr[i];
            }
            if (arr[i] > maks){
                pos2 = i+1;
                maks = arr[i];
            }
        }

        // cout << "pos1: " << pos1 << " pos2: " << pos2 << endl;
  
        int case1, case2, case3;
        int l=min(pos1, pos2), r=max(pos1,pos2);

        case1 = r;
        case2 = n-l+1;
        case3 = l+(n-r+1);
        // cout << case1 << " " << case2 << " " << case3 << endl;
        cout << min(case1, min(case2, case3)) << endl;
    }
    
}