#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    int x;cin>>x;
    int jam,menit,detik;
    jam = x/3600;
    menit = (x/60)%60;
    detik = x%60;

    cout << jam << " jam " << menit << " menit " << detik << " detik" << "\n";

}