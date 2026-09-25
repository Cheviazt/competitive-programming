#include <bits/stdc++.h>
using namespace std;

unordered_set<long long> v;
string s;
int n;

void ekspresi(int pos, long long total, long long curr_num, char last_op) {
    if (pos == n) {
        if (last_op == '+') total += curr_num;
        else total -= curr_num;

        v.insert(total);
        return;
    }

    int digit = s[pos] - '0';

    ekspresi(pos + 1, total, curr_num * 10 + digit, last_op);

    if (last_op == '+')
        ekspresi(pos + 1, total + curr_num, digit, '+');
    else
        ekspresi(pos + 1, total - curr_num, digit, '+');

    if (last_op == '+')
        ekspresi(pos + 1, total + curr_num, digit, '-');
    else
        ekspresi(pos + 1, total - curr_num, digit, '-');
}

int main() {
    cin >> s;
    n = s.length();

    ekspresi(1, 0, s[0] - '0', '+');

    cout << v.size() << "\n";
}
