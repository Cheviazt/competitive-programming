#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;
vector<ll> v;
bool used[10];

void backtrack() {
    
    if (v.size() == n) {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++) {
        if(used[i]) continue;

        v.push_back(i);
        used[i] = true;
        backtrack();
        v.pop_back();
        used[i] = false;
    }

}

int main () {
    cin >> n;
    backtrack();
}