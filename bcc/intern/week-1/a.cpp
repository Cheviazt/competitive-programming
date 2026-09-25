#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
 
    int n; cin >> n;
    stack<char> st;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        char x; cin >> x;
        
        if(x == '(' || x == '{' || x == '['){
            st.push(x);
        }

        if (x == ')' || x == '}' || x == ']'){
            if (st.empty()){
                flag = false;
                break;
            }

            if ((st.top() == '(' && x == ')') || (st.top() == '{' && x == '}') || (st.top() == '[' && x == ']')){
                st.pop();
            }else{
                flag = false;
                break;
            }
        }
    }

    if (!st.empty()) flag = false;

    cout << (flag ? "YES" : "NO") <<endl;
    
}