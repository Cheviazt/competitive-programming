#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,total=0; cin >> n;
    string nama[n], type="";
    string nim[n];
    int nilai[n][3];

    for (int i = 0; i < n; i++) {
        cin >> nama[i] >> nim[i] >> nilai[i][0] >> nilai[i][1] >> nilai[i][2];
        total = (nilai[i][0] + nilai[i][1] + nilai[i][2])/3;
        if (total >= 80) {
            type = "Lulus";
        }else{
            type = "Tidak Lulus";
        }
        cout << nama[i] << " " << nim[i] << " " << total << " " <<  type << endl;
    }

}