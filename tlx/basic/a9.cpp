#include <bits/stdc++.h>

using namespace std;

int faktorial(int a) {
    if (a == 0) {
        return 1;
    }else {
        return a * faktorial(a - 1);
    }
}

int main() {
    cout<<faktorial(5);


}