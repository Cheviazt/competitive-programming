#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;
 
//acaabcbcd
void solve(){
    
    string s;cin>>s;
    
    int len=s.length();
    vector<char> arr;
    int ans=0;
    for(int i=0;i<len;i++){
        arr.push_back(s[i]);
        if(arr.size()>=3){
            // cout<<"masuk"<<" "<<arr[arr.size()-1]<<" "<<arr[arr.size()-2]<<" "<<arr[arr.size()-3]<<endl;
            if(arr[arr.size()-1]=='c'&&arr[arr.size()-2]=='b'&&arr[arr.size()-3]=='a'){
                arr.pop_back();
                arr.pop_back();
                arr.pop_back();
                ans++;
            }
        }
    }


    
    //aaaabcbcbc b c
    //01234567891011

    //aaa   bcbc b c
    //012   67891011
    
    cout<<ans<<endl;

}
  
int main () {
    bismillah
    int t; t=1;
    //cin>>t;
    while(t--){solve();}
}