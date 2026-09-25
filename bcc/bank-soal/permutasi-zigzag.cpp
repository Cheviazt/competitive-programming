#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
vector<int> v;
int used[10];

void backtrack() {

    if (v.size() == n) {
        bool flag = true;
        for (int i = 1; i < v.size()-1; i++) {
            if (!((v[i-1] > v[i] && v[i+1] > v[i]) || (v[i-1] < v[i] && v[i+1] < v[i]))) {
                flag = false;
                break;
            }
        }

        if (flag) {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i];
            }
            cout << "\n";
        }
    }


    for (int i = 1; i <= n; i++) {
        if (used[i]) continue;

        v.push_back(i);
        used[i] = true;

        backtrack();

        used[i] = false;
        v.pop_back();
    }

}

int main () {

    cin >> n;
    // if (n == 1) {
    //     cout << "1" << "\n";
    //     return 0;
    // } 
    backtrack();

}