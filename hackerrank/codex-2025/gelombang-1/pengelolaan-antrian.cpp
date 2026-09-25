#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;

    deque<string> antri; 

    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    for (int i = 0; i < N; ++i) {
        string line;
        if (!getline(cin, line)) break;
        
        stringstream ss(line);
        string cmd;
        string name;
        int index;

        ss >> cmd;

        if (cmd == "add_masyarakat") {
            ss >> name;
            antri.push_back(name);

        } else if (cmd == "add_pejabat") {
            ss >> name;
            antri.push_front(name);
            
        } else if (cmd == "remove") {
            if (!antri.empty()) {
                string removee = antri.front();
                antri.pop_front();
                cout << removee << endl;
            }

        } else if (cmd == "show") {
            if (!antri.empty()) {
                bool first = true;
                for (const string& person : antri) {
                    if (!first) {
                        cout << " ";
                    }
                    cout << person;
                    first = false;
                }
                cout << endl;
            }

        } else if (cmd == "check_index") {
            ss >> index;
            
            int inde = index; 

            if (inde >= 0 && inde < (int)antri.size()) {
                cout << antri[inde] << endl;
            } else {
                cout << "Kosong" << endl;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}