#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,k;
vector<ll> curr;

void backtrack(ll depth){

    if (curr.size() == k) {
        for (int i = 0; i < k; i++) {
            cout << curr[i] << " ";
        }
        cout << "\n";
    }

    for (ll i = depth; i <= n; i++) {
        curr.push_back(i);
        backtrack(i+1);
        curr.pop_back();
    }

}

int main () {
    cin>>n>>k;
    backtrack(1);
}