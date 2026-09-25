#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int t;cin>>t;
    while(t--){

        int n; cin >> n;
        priority_queue<int> q;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            q.push(x);
        }

        while(q.top() > 0) {
            cout << q.top() << " ";
            int num = q.top()/2;

            q.pop();
            q.push(num);
        }
        cout << endl;

    }
    
}
