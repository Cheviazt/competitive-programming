#include <bits/stdc++.h>

using namespace std;

void cetak(int i) {
    if (i == 1) {
        cout<<i<<endl;
    }else {
        cout<<i<<endl;
        cetak(i-1);
    }
}


int main () {
    cetak(10);
}