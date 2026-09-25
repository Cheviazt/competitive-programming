#include <bits/stdc++.h>

using namespace std;

int main () {

    string a,b;cin>>a>>b;

    int len = a.length(), lin = b.length(), div=0;

    if (abs(len-lin) > 1 ) {
        cout << "Wah, tidak bisa :(" << "\n";
        // cout << len <<lin;
        return 0;
    }

    string temp = "";
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (j==i) {
                continue;
            }
            temp += a[j];
        }
        // cout << temp << endl;
        if (temp == b) {
            break;
        }
        temp = "";
    }

    // cout << temp << endl;

    if (temp == b) {
        cout << "Tentu saja bisa!" << "\n";
    }else{
        cout << "Wah, tidak bisa :(" << "\n";
    }

}