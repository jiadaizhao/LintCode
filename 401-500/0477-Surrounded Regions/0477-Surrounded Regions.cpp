class Solution {
public:
    /**
     * @param board a 2D board containing 'X' and 'O'
     * @return void
     */
    void surroundedRegions(vector<vector<char>>& board) {
        // Write your code here
        int m = board.size();
        if (m == 0) {
            return;
        }
        
        int n = board[0].size();
        queue<pair<int, int>> Q;
        for (int i = 0; i < m; ++i) {
            if (board[i][0] == 'O') {
                Q.emplace(i, 0);
                board[i][0] = '#';
            }
            
            if (n > 1 && board[i][n - 1] == 'O') {
                Q.emplace(i, n - 1);
                board[i][n - 1] = '#';
            }
        }
        
        for (int j = 1; j < n - 1; ++j) {
            if (board[0][j] == 'O') {
                Q.emplace(0, j);
                board[0][j] = '#';
            }
            
            if (m > 1 && board[m - 1][j] == 'O') {
                Q.emplace(m - 1, j);
                board[m - 1][j] = '#';
            }
        }
        
        vector<int> deltaX = {-1, 1, 0, 0};
        vector<int> deltaY = {0, 0, -1, 1};
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            int r = p.first;
            int c = p.second;
            for (int k = 0; k < deltaX.size(); ++k) {
                int nr = r + deltaX[k];
                int nc = c + deltaY[k];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && board[nr][nc] == 'O') {
                    Q.emplace(nr, nc);
                    board[nr][nc] = '#';
                }
            }
        }
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == '#') {
                    board[i][j] = 'O';
                }
                else if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
