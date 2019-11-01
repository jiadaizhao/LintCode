class Solution {
public:
    /**
     * @param board: the sudoku puzzle
     * @return: nothing
     */
    void solveSudoku(vector<vector<int>> &board) {
        // write your code here
        usedRows = vector<vector<bool>>(9, vector<bool>(9));
        usedCols = vector<vector<bool>>(9, vector<bool>(9));
        usedBlocks = vector<vector<bool>>(9, vector<bool>(9));
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != 0) {
                    int index = board[i][j] - 1;
                    int k = i / 3 * 3 + j / 3;
                    usedRows[i][index] = usedCols[j][index] = usedBlocks[k][index] = true;
                }
            }
        }
        helper(board);
    }
    

    vector<vector<bool>> usedRows;
    vector<vector<bool>> usedCols;
    vector<vector<bool>> usedBlocks;
    bool helper(vector<vector<int>> &board) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != 0) {
                    continue;
                }
                
                for (int v = 1; v <= 9; ++v) {
                    int index = v - 1;
                    int k = i / 3 * 3 + j / 3;
                    if (!usedRows[i][index] && !usedCols[j][index] && !usedBlocks[k][index]) {
                        board[i][j] = v;
                        usedRows[i][index] = usedCols[j][index] = usedBlocks[k][index] = true;
                        if (helper(board)) {
                            return true;
                        }
                        board[i][j] = 0;
                        usedRows[i][index] = usedCols[j][index] = usedBlocks[k][index] = false;
                    }
                }
                return false;
            }
        }
        
        return true;
    }
};
