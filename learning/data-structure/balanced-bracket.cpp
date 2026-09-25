#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

/*
URL PROBLEM: https://www.hackerrank.com/challenges/balanced-brackets/problem
*/

using namespace std;
 
void solve(){
    string s;cin>>s;
    stack<char> st;

    for(auto x:s){
        if(x=='('||x=='['||x=='{'){
            st.push(x);
        }else{
            if(st.empty()){
                cout<<"NO"<<endl;
                return;
            }

            if((x==')'&&st.top()=='(')||(x==']'&&st.top()=='[')||(x=='}'&&st.top()=='{')){
                st.pop();
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    if(!st.empty()){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
}
  
int main () {
    bismillah
    int t; t=1;
    // cout<<(int)')'<<" "<<(int)'('<<endl;
    cin>>t;
    while(t--){solve();}
}