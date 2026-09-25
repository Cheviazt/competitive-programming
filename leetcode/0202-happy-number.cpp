#include <bits/stdc++.h>

using namespace std;

int getHappy(int n) {

    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;

}

int main () {

    set<int> happySet;
    
    int n;
    cin >> n;

    while (n != 1) {
        if (happySet.count(n)) {
            cout << "tidak hepi" << endl; return 0;
        }

        happySet.insert(n);
        n = getHappy(n);


    }
    cout << "heppy" << endl;



}


