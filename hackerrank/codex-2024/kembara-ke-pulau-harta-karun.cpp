#include <bits/stdc++.h>

using namespace std;

int main () {

    string s; cin >> s;
    cout << "Kapten Jarjit Singh harus berjalan ke arah ";
    // int loncat;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'U') {
            if(i > s.length()-5) {
                cout << "Dan ";
                cout << "Utara sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah.";
            }else{
                cout << "Utara sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah, ";
            }
        }else if(s[i] == 'B') {
            if(i > s.length()-5) {
                cout << "Dan ";
                cout << "Barat sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah.";
            }else{
                cout << "Barat sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah, ";
            }
        } else if(s[i] == 'S') {
            if(i > s.length()-5) {
                cout << "Dan ";
                cout << "Selatan sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah.";
            }else{
                cout << "Selatan sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah, ";
            }
        } else if(s[i] == 'T') {
            if(i > s.length()-5) {
                cout << "Dan ";
                cout << "Timur sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah.";
            }else{
                cout << "Timur sebanyak ";
                string temp = string() + s[i+1] + s[i+2];
                int langkah = stoi(temp);
                cout << langkah << " langkah, ";
            }
        }
    }
}