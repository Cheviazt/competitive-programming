#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    ll n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    stack<pair<ll,ll>> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top().first >= v[i]){
            st.pop();
        }

        if (st.empty()) cout << "0" << " ";
        else cout << st.top().second << " ";

        st.push({v[i], i+1});
    }

}