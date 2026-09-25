#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    string s; cin >> s;

    int anton = 0,danik = 0,draw = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            anton++;
        }else if(s[i] == 'D'){
            danik++;
        }else{
            draw++;
        }
    }

    if (anton > danik) {
        cout << "Anton" << endl;
    }else if (danik > anton){
        cout<< "Danik" <<  endl;
    }else{
        cout <<  "Friendship" <<  endl;
    }
}