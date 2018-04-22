class Solution {
public:
    /**
     * @param board: a 2D integer array
     * @return: the current board
     */
    vector<vector<int>> candyCrush(vector<vector<int>> &board) {
        // Write your code here
        int m = board.size(), n = board[0].size();
        bool crush = false;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n - 2; ++j) {
                if (board[i][j] != 0) {
                    int v = abs(board[i][j]);
                    if (abs(board[i][j + 1]) == v && abs(board[i][j + 2]) == v) {
                        board[i][j] = board[i][j + 1] = board[i][j + 2] = -v;
                        crush = true;
                    }
                }
            }
        }
        
        for (int i = 0; i < m - 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] != 0) {
                    int v = abs(board[i][j]);
                    if (abs(board[i + 1][j]) == v && abs(board[i + 2][j]) == v) {
                        board[i][j] = board[i + 1][j] = board[i + 2][j] = -v;
                        crush = true;
                    }
                }
            }
        }
        
        for (int j = 0; j < n; ++j) {
            int r = m - 1;
            for (int i = m - 1; i >= 0; --i) {
                if (board[i][j] > 0) {
                    board[r--][j] = board[i][j];
                }
            }
            
            while (r >= 0) {
                board[r--][j] = 0;
            }
        }
        
        return crush ? candyCrush(board) : board;
    }
};
