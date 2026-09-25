#include <bits/stdc++.h>
using namespace std;

// ██████╗░██╗░██████╗███╗░░░███╗██╗██╗░░░░░██╗░░░░░░█████╗░██╗░░██╗
// ██╔══██╗██║██╔════╝████╗░████║██║██║░░░░░██║░░░░░██╔══██╗██║░░██║
// ██████╦╝██║╚█████╗░██╔████╔██║██║██║░░░░░██║░░░░░███████║███████║
// ██╔══██╗██║░╚═══██╗██║╚██╔╝██║██║██║░░░░░██║░░░░░██╔══██║██╔══██║
// ██████╦╝██║██████╔╝██║░╚═╝░██║██║███████╗███████╗██║░░██║██║░░██║
// ╚═════╝░╚═╝╚═════╝░╚═╝░░░░░╚═╝╚═╝╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝

#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (ll i = 0; i < (n); i++)
#define frr(i,n) for (ll i = 1; i <= (n); i++)
#define pb push_back
#define fi first
#define se second
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define maxx(a,b,c) max((a), max((b),(c))
#define minn(a,b,c) min((a), min((b),(c))

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;

const ll INF = 1e18;
const int MOD = 1e9+7;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

ll fpb(ll a, ll b){
    if(b == 0) return a;
    return fpb(b, a % b);
}

ll kpk(ll a, ll b){
    return a / fpb(a,b) * b;
}


bool isab(char z){
    if (z == 'A' || z == 'B')return true;
    else return false;
}

void solve(){

    string s; cin >> s;
    int len = s.length();

    vector<bool> dp1(len,false),dp2(len,false);

    //AB
    for (int i = 1; i < len; i++) {
        dp1[i]=dp1[i-1];
        if(s[i]=='B' && s[i-1]=='A'){
            dp1[i]=true;
        }
    }

    //BA
    for (int i = 1; i < len; i++) {
        dp2[i]=dp2[i-1];
        if(s[i]=='A' && s[i-1]=='B'){
            dp2[i]=true;
        }
    }

    for (int i = 0; i < len-1; i++) {
        if (s[i]=='A'&&s[i+1]=='B'){
            if (i-1>=0 && dp2[i-1]) {
                yes; return;
            }
        }
        if (s[i]=='B'&&s[i+1]=='A'){
            if (i-1>=0 && dp1[i-1]) {
                yes; return;
            }
        }
    }

    no

}

void _solve(){
    
    string s; cin>>s;
    int len = s.length();
    vector<bool> cek(len, false);

    bool overlap=false, ab=false, ba=false,ans=false;
    int cnt=0, cnz=0;
    for(int i = 1; i < len; i++){
        if (isab(s[i])&&isab(s[i-1])) {
            if (s[i]==s[i-1]){
                cek[i-1]=true;
                continue;
            }else{
                if (s[i-1] == 'A' && s[i] == 'B')ab=true;
                else ba = true;
                if (cek[i-1]==true) {
                    if (s[i-1] == 'A' && s[i] == 'B')ab=false;
                    else ba = false;
                }else{
                    cek[i]=true;
                    cek[i-1]=true;
                }
                
                // if (cek[i-1]==true){
                //     overlap=true;
                //     cnz++;
                // }
                // cnt++;
                // cek[i]=true;
                // cek[i-1]=true;
            }
        }
    }

    // debug(cnt);
    // debug(ba);
    // if (cnt>1)ans=false;

    if(ab&&ba)yes
    else no

    // if (ab && ba){
    //     if (overlap){
    //         if(cnt>2 && cnz>2){
    //             yes;
    //         }else{
    //             no;
    //         }
    //     }else{
    //         yes;
    //     }
    // }else{
    //     no;
    // }

}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}