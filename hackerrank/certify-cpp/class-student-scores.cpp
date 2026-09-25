#include <bits/stdc++.h>

using namespace std;

class StudentScores {
    private:
        int scores[5];
    public:
        void inputScore() {
            for (int i = 0; i < 5; i++) {
                cin >> scores[i];
            }
        }
        int calculateScores() {
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                sum += scores[i];
            }
            return sum;
        }
    };

int main () {

    int n,max,ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        StudentScores student;
        student.inputScore();
        if (i == 0) {
            max = student.calculateScores();
        }else if (student.calculateScores() > max) {
            ans++;
        }
    }

    cout << ans;

}