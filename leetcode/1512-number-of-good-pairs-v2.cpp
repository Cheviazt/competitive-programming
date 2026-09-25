#include <bits/stdc++.h>

using namespace std;


int main () {

    int n;
    cin>>n;

    int arr[n+1];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n-1; i++) {

        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                sum++;
            }
        }

    }

    cout<<sum<<endl;

}