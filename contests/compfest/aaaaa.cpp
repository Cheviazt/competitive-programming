#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n; cin >> n;
    vector<pair<ll, ll>> v;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back({x, i+1});
    }
    ll anomaly = 0; 
    for(ll i = 0; i < n-1; i++){
        if(v[i].first != v[i+1].first) anomaly++;
    }
    if(!anomaly) cout << "SESUAI";
    else{
        sort(v.begin(), v.end());
        if(anomaly > 2){
            cout << "TIDAK SESUAI";
          return 0;  
        } 
        else{
            ll maxx = v[n-1].first;
            ll minn = v[0].first;
            ll maxj = 0, minj = 0;
            for(ll i = 0; i < n; i++){
                if(v[i].first == maxx) maxj++;
                else if(v[i].first == minn) minj++;
            }
            ll mid;
            if(maxj > 1 || minj > 1){
                cout << "TIDAK SESUAI";
                return 0;
            }
            if((maxx+minn)%2 == 1){
                cout << "TIDAK SESUAI";
                return 0;
            }
            
            else{
                mid = (maxx+minn)/2;
                // if(n == 2){
                //     else{
                //         
                //     }
                //     return 0;
                // }
                for(ll i = 0; i < n; i++) if(v[i].first != maxx && v[i].first != minn){
                    mid = v[i].first;
                    break;
                }   
                if(abs(mid - minn) == abs(maxx-mid)){
                    cout << mid-minn << " " << v[n-1].second << " " << v[0].second;
                }
                else{
                    cout << "TIDAK SESUAI";
                }
            }
        }

    }
}