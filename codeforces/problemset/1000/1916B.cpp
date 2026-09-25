#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;


//fpb
ll gcd (ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, b%a);
}

//kpk
ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

int main () {
    bismillah
    
    cout << lcm(1,5);
    
}

