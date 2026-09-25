#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ll a,b,c,d; cin >> a >> b >> c >> d;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4 - s.size() << endl;


}