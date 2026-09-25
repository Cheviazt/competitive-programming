#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t;
    while(t--){
        int n,k;cin>>n>>k;
        int cnt=0;
        bool flag = false;
        while (n > 0) {
        	cnt++;
        	if (n % 2 == 0) {
        		if (n/2==k) {
        			flag = true;
        			break;
        		}else{
        			n /= 2;
        		}
        	}else{
        		if (n/2 == k || (n/k)+1 == k) {
        			flag = true;
        			break;
        		}else{
        			n /= 2;
        		}
        	}
        }

        if (flag) {
        	cout << cnt << "\n";
        }else{
        	cout << "-1" << "\n";
        }
    }
}