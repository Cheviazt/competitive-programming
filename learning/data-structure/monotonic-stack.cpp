#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
void solve(){
    
    int n;cin>>n;

    vector<int> kandidat(n);
    for(auto &x:kandidat)cin>>x;

    vector<int> st;
    for(auto x:kandidat){
        while(!st.empty()){
            if(st.back() >= x){
                cout<<x<<" Ditutupin oleh "<<st.back()<<endl;
                break;
            }else{
                st.pop_back();
            }
        }
        st.push_back(x);
    }

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}