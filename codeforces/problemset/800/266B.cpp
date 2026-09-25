#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,t; cin >> n >> t;
    string s,temp; cin >>  s;
    bool flag = true;
    char arr[n];
    temp = s;
    
    for (int i = 0; i <  t; i++) {
        for (int j = 0; j < n-1; j++) {
            if (s[j] == 'B' && s[j+1] == 'G') {
                temp[j] = 'G';
                temp[j+1] = 'B';
            }
        }
        s = temp;
    }

    cout << s << endl;
}
