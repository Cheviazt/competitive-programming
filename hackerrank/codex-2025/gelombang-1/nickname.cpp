#include <bits/stdc++.h>

using namespace std;

int main () {

    int t; cin >> t;
    map<string, int> v;
    while (t--) {
        string nama;
        cin >> nama;

        if (v[nama] > nama.length()){
            cout << "ERROR" << endl;
            continue;
        }

        for (int i = 0; i < nama.length(); i++) {
            if (i == v[nama]-1) {
                char a = toupper(nama[i]);
                cout <<a;
            }else{
                cout << nama[i];
            }
        }
        cout << endl;

        v[nama]++;

    }

}