#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;
vector<ll> v;

void backtracking(ll depth){

    if (!v.empty()){
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    for (ll i = depth; i <= n; i++) {
        v.push_back(i);
        backtracking(i+1);
        v.pop_back();
    }


}

int main () {
    cin>>n;
    backtracking(1);
}