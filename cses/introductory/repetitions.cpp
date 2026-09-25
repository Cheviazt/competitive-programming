#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    string s; cin >> s;

    int cnt=1,ans=-1;
    for(int i=0;i<s.length()-1;i++){
        if (s[i]==s[i+1]) {
            cnt++;
        }else{
            ans = max(ans,cnt);
            cnt=1;
        }
    }
    ans = max(ans,cnt);


    cout<<ans<<endl;

}