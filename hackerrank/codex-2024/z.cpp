#include <bits/stdc++.h>

using namespace std;


int main () {

    int n; cin >> n;
    int arr[n][2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    int startI = 0, startJ = 0, maks = -1, sum = arr[0][0];
    int j = 0;
    // 8
    // 3 4
    // 7 2
    // 8 1
    // 9 6 
    // 10 11
    // 3 4
    // 4 3
    // 5 6
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            //dikiri
            if (j % 2 == 0) {
                if (arr[i][j] + arr[i][j+1] % 2 == 0){ 
                    sum += arr[i][j+1];
                }else{ 
                    sum = 0; startI = i; startJ = j;
                }
            }

            //dikanan
            if (j % 2 == 1) {
                if (i+1 < n){
                    if (arr[i][j] + arr[i+1][0] % 2 == 0){
                        sum += arr[i+1][0]; 
                    }else{ 
                        sum = 0;
                        startI = i; startJ = j;
                    }
                }
            }

            if (sum > maks) {
                maks = sum;
                sum = 0;
            }
        } 
    }

    cout << "Bilangan maksimal adalah: " << maks << endl;
    cout << "Jika dimulai dari titik: " << startI << "," << startJ << endl;

}

