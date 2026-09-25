#include <bits/stdc++.h>

using namespace std;

vector<int> bongkarMas (string kalimat) {

    for (char &c : kalimat) {
        if (c == ',') c = ' '; 
    }

    vector<int> data;
    stringstream s(kalimat);
    int pcs;

    while (s >> pcs) {
        data.push_back(pcs);
    }

    return data;

}

int main () {

    string input;
    cin >> input;

    for (auto ans : bongkarMas(input)) {
        cout << ans << endl;
    }


}
