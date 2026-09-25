#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;cin >> n;
    string s;cin >> s;

    // >>>>><<<>>>><>>
    // >><>><>>
    // <<<<>>>>>
    // <<

    int cnt=0, tempcnt=1;
    char temp = s[0];
    bool flag = true;
    for (int i = 1; i<s.length(); i++) {
        if (temp == '>') {
            if (s[i] == '<') {
                tempcnt=0;
                temp='>';
            }else{
                tempcnt++;
            }
        }else{
            if (s[i] == '>') {
                cnt += tempcnt;
                tempcnt=1;
                temp='>';
            }else{
                tempcnt++;
            }
        }
    }
    cnt += tempcnt;

    cout << cnt << "\n";

}