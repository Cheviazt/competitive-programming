#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin>>n;

    int jam,menit,detik;
    jam = n/3600;
    menit = (n/60)%60;
    detik = n%60;

    cout<<jam<<" jam "<<menit<<" menit "<<detik<<" detik"<<endl;


}