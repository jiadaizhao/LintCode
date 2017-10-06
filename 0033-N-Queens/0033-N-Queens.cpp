class Solution {
public:
    /**
     * Get all distinct N-Queen solutions
     * @param n: The number of queens
     * @return: All distinct solutions
     * For example, A string '...Q' shows a queen on forth position
     */
    vector<vector<string> > solveNQueens(int n) {
        // write your code here
        vector<vector<string>> result;
        if (n == 0) {
            return result;
        }
        vector<bool> diag(2 * n - 1), antidiag(2 * n - 1), col(n);
        vector<string> path(n, string(n, '.'));
        dfs(0, n, diag, antidiag, col, path, result);
        return result;
    }
    
private:
    void dfs(int row, int n, vector<bool>& diag, vector<bool>& antidiag,
    vector<bool>& col, vector<string>& path, vector<vector<string>>& result) {
        if (row == n) {
            result.push_back(path);
            return;
        }
        
        for (int j = 0; j < n; ++j) {
            if (!diag[row + j] && !antidiag[row - j + n - 1] && !col[j]) {
                diag[row + j] = antidiag[row - j + n - 1] = col[j] = true;
                path[row][j] = 'Q';
                dfs(row + 1, n, diag, antidiag, col, path, result);
                path[row][j] = '.';
                diag[row + j] = antidiag[row - j + n - 1] = col[j] = false;
            }
        }
    }
};
