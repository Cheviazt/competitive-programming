#include <bits/stdc++.h>

using namespace std;

int hitung_vokal(string s) {
    if (s.substr(0) == "") {
        return 0;
    }

    char c = s[0];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1 + hitung_vokal(s.substr(1));
    }else {
        return hitung_vokal(s.substr(1));
    }
}


int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}
