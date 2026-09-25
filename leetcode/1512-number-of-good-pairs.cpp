#include <bits/stdc++.h>

using namespace std;

int main () {

    vector<int> nums = {1,2,3,1,1,3};

    int panjang = nums.size();

    int sum = 0;
    for (int i = 0; i < panjang-1; i++) {

        for (int j = i+1; j < panjang; j++) {
            if (nums[i] == nums[j]) {
                sum++;
            }
        }

    }

    cout<<sum<<endl;

}