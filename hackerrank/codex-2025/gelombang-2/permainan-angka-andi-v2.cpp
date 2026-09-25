#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;

    while(t--){
        int a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;

        while(n){
            int m1,m2;
            if(a > x){
                m1 = (a-1)*b;
            }else if (b > y){
                b--;
                n--;
                continue;
            }else{
                n--;
                continue;
            }

            if(b > y){
                m2 = (b-1)*a;
            }else if (a > x){
                a--;
                n--;
                continue;
            }else{
                n--;
                continue;
            }

            //99, 100
            //88, 84
            //77, 

            if (m1 == m2) {
                int man1 = abs(a-x);
                int man2 = abs(b-y);
                if (man1 > man2){
                    a--;
                }else{
                    b--;
                }
            }else if (m1 < m2){
                int man3 = abs((a-x)-n);
                int man4 = abs((b-y)-n);
                if (man3 > man4) {
                    b--;
                }else{
                    a--;
                }
                // a--;
            }else{
                b--;
            }
            n--;
        }

        cout << a*b << endl;
    }
}