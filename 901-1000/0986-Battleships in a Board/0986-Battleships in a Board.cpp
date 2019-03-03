class Solution {
public:
    /**
     * @param board: the given 2D board
     * @return: the number of battle ships
     */
    int countBattleships(vector<vector<char>> &board) {
        // Write your code here
        int count = 0;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] == 'X' && (j - 1 < 0 || board[i][j - 1] == '.') && (i - 1 < 0 || board[i - 1][j] == '.')) {
                    ++count;
                }
            }
        }
        
        return count;
    }
};
