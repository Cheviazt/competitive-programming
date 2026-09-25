#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
    ll n,m,a; 
    cin >> n >> m >> a;
    n += (n%a);
    m += (m%a);
    

    cout << (m*n)/(a*a) << endl;
}