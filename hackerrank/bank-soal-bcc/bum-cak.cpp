#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout<<"BumCak"<<endl;
        } else if (i % 3 == 0) {
            cout<<"Bum"<<endl;
        } else if (i % 5 == 0) {
            cout<<"Cak"<<endl;
        } else {
            cout<<i<<endl;
        }
    }

}