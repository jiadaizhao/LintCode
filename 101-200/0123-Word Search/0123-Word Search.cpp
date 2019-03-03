class Solution {
public:
    /**
     * @param board: A list of lists of character
     * @param word: A string
     * @return: A boolean
     */
    bool exist(vector<vector<char> > &board, string word) {
        // write your code here
        if (word.size() == 0)
        {
            return false;
        }
        int m = board.size();
        if (m == 0)
        {
            return false;
        }
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n));
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (dfs(board, i, j, visited, word, 0))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
    
private:
    bool dfs(vector<vector<char> > &board, int i, int j, vector<vector<bool>>& visited, string& word, int start)
    {
        if (start == word.size())
        {
            return true;
        }
        
        if (i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || visited[i][j])
        {
            return false;
        }
        
        if (board[i][j] != word[start])
        {
            return false;
        }
        
        visited[i][j] = true;
        bool result = dfs(board, i - 1, j, visited, word, start + 1) ||
                      dfs(board, i + 1, j, visited, word, start + 1) ||
                      dfs(board, i, j - 1, visited, word, start + 1) ||
                      dfs(board, i, j + 1, visited, word, start + 1);
        visited[i][j] = false;
        
        return result;
    }
};
