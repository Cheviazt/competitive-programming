#include <bits/stdc++.h>
using namespace std;

#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (int i = 0; i < (n); i++)
#define pb push_back
#define fi first
#define se second

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

//fpb
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

//kpk
ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

void solve(){
    ll n; cin >> n;
    vl arr(n);
    fr(i,n)cin>>arr[i];
    sort(all(arr));
    ll q; cin >> q;
    while(q--){
        ll target; cin >> target;
        int l=0,r=n-1,ans=0;
        while(l<=r){
            int mid = (l+r)/2;
            // if (arr[mid]==target){
            //     ans=mid+1;
            //     break;
            // }
            if (arr[mid]>target) {
                r=mid-1;
                ans=mid-1+1;
            }else{
                l = mid+1;
                ans=mid+1;
            }
        }

        cout << ans << endl;
    }
}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}