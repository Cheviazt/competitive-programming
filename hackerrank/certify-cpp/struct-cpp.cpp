#include <bits/stdc++.h>

using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main () {

    Student stn;

    cin >> stn.age >> stn.first_name >> stn.last_name >> stn.standard;

    cout << stn.age << " " << stn.first_name << " " << stn.last_name << " " << stn.standard << endl;

}