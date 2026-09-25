#include <bits/stdc++.h>

using namespace std;


// PASS BY REFERENCE
// bisa menggunakan &
void tukar(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    int p = 10, q = 20, r = 30;
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(p, q);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(q, r);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;
}