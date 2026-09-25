#include <bits/stdc++.h>

using namespace std;

int main () {

    int actual[7], forecasted[7];

    for (int i = 0; i < 7; i++) {
        cin >> actual[i];
    }

    
    for (int i = 0; i < 7; i++) {
        cin >> forecasted[i];
    }

    int totalForecastInaccuracy = 0;
    for (int i = 0; i<7; i++) {
        totalForecastInaccuracy += abs(actual[i]-forecasted[i]);
    }

    cout << totalForecastInaccuracy;
}