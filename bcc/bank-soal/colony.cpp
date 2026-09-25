#include <bits/stdc++.h>
using namespace std;

int main() {
    long long K;
    cin >> K;
    
    // After K growths, we have colony sizes: 1, 2, 4, 8, ..., 2^K
    // This gives us K+1 unique sizes
    cout << K + 1 << endl;
    
    return 0;
}
