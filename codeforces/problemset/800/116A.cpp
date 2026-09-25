#include <bits/stdc++.h>

using namespace std;

int main () {

   int n;  cin >>  n;
   int a[n+1], b[n+1],ans=0, temp, maks;
   
   for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    temp -= a[i];
    temp += b[i];
    ans = max(ans, temp); 
   }

   cout << ans << endl;

}