#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a,b) * b;
}

int main () {

    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d;

    e = ((gcd(b,d) / b) * a) + ((gcd(b,d) / d) * c);
    f = gcd(b,d);

    cout << e / f << " " <<  f / f << endl;

}