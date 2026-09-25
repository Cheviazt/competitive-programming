#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n,k;
vector<ll> v;
// bool used[10001];

void backtrack(ll st, ll sum) {
    
    if (sum == k) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    if (sum > k) return; 

    for (int i = st; i <= n; i++) {
        v.push_back(i);
        backtrack(i+1, sum+i);
        v.pop_back();
    }
}

int main () {

    cin >> n >> k;
    backtrack(1, 0);

}