class Solution {
public:
    /**
      * @param board: the board
      * @return: wether the Sudoku is valid
      */
    bool isValidSudoku(const vector<vector<char>>& board) {
        vector<vector<bool>> usedRows(9, vector<bool>(9));
        vector<vector<bool>> usedCols(9, vector<bool>(9));
        vector<vector<bool>> usedBlocks(9, vector<bool>(9));
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    int blockIndex = i / 3 * 3 + j / 3;
                    int index = board[i][j] - '0' - 1;
                    if (usedRows[i][index] || usedCols[index][j] || usedBlocks[blockIndex][index]) {
                        return false;
                    }
                    else {
                        usedRows[i][index] = usedCols[index][j] = usedBlocks[blockIndex][index] = true;
                    }
                }
            }
        }
        
        return true;
    }
};
