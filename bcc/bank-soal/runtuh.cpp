#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int R, C;
    cin >> R >> C;
    
    vector<string> board(R);
    for (int i = 0; i < R; i++) {
        cin >> board[i];
    }
    
    bool changed = true;
    while (changed) {
        changed = false;
        
        // Find full rows and track the bottommost removed row
        vector<int> fullRows;
        for (int i = 0; i < R; i++) {
            bool full = true;
            for (int j = 0; j < C; j++) {
                if (board[i][j] == '0') {
                    full = false;
                    break;
                }
            }
            if (full) {
                fullRows.push_back(i);
                changed = true;
            }
        }
        
        if (fullRows.empty()) break;
        
        int bottomRemoved = fullRows.back(); // bottommost removed row
        int fixedStart = bottomRemoved + 1;  // rows from here to R-1 are fixed
        
        // Collect rows that are NOT full
        vector<string> nonFullRows;
        for (int i = 0; i < R; i++) {
            bool isFull = find(fullRows.begin(), fullRows.end(), i) != fullRows.end();
            if (!isFull) {
                nonFullRows.push_back(board[i]);
            }
        }
        
        // Build new board: empty rows at top, then non-full rows
        int numRemoved = fullRows.size();
        vector<string> newBoard(R);
        for (int i = 0; i < numRemoved; i++) {
            newBoard[i] = string(C, '0');
        }
        for (int i = 0; i < (int)nonFullRows.size(); i++) {
            newBoard[numRemoved + i] = nonFullRows[i];
        }
        
        board = newBoard;
        
        // Apply gravity: blocks from falling zone stack on fixed zone
        // fixedStart tells us where fixed zone begins in the ORIGINAL layout
        // After shifting, rows 0 to (fixedStart - 1 - numRemoved_above_fixedStart) are falling
        // Simpler: count how many removed rows were above fixedStart
        int removedAboveFixed = 0;
        for (int r : fullRows) {
            if (r < fixedStart) removedAboveFixed++;
        }
        // After shifting, falling zone ends at row (fixedStart - 1 - removedAboveFixed + numRemoved)
        // which simplifies to (fixedStart - 1) because numRemoved = removedAboveFixed in this case
        // Actually, fixed zone after shifting starts at fixedStart (unchanged since those rows don't move)
        
        // For each column, apply gravity: falling blocks stack on top of fixed structure
        for (int j = 0; j < C; j++) {
            // Find the "ceiling" in fixed zone (topmost 1 in rows fixedStart to R-1)
            int ceiling = R; // position where falling blocks land (R means floor)
            for (int i = fixedStart; i < R; i++) {
                if (board[i][j] == '1') {
                    ceiling = i;
                    break;
                }
            }
            
            // Count 1s in falling zone (rows numRemoved to fixedStart-1)
            int ones = 0;
            for (int i = numRemoved; i < fixedStart; i++) {
                if (board[i][j] == '1') ones++;
            }
            
            // Clear falling zone
            for (int i = numRemoved; i < fixedStart; i++) {
                board[i][j] = '0';
            }
            
            // Stack 1s just above ceiling
            for (int cnt = 0; cnt < ones; cnt++) {
                int pos = ceiling - 1 - cnt;
                if (pos >= 0) {
                    board[pos][j] = '1';
                }
            }
        }
    }
    
    for (int i = 0; i < R; i++) {
        cout << board[i] << "\n";
    }
    
    return 0;
}
