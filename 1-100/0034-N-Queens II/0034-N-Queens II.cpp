class Solution {
public:
    /**
     * Calculate the total number of distinct N-Queen solutions.
     * @param n: The number of queens.
     * @return: The total number of distinct solutions.
     */
    int totalNQueens(int n) {
        // write your code here
        if (n == 0) {
            return 0;
        }
        vector<bool> diag(2 * n - 1), antidiag(2 * n - 1), col(n);
        int count = 0;
        dfs(0, n, diag, antidiag, col, count);
        return count;
    }
    
private:
    void dfs(int row, int n, vector<bool>& diag, vector<bool>& antidiag,
    vector<bool>& col, int& count) {
        if (row == n) {
            ++count;
            return;
        }
        
        for (int j = 0; j < n; ++j) {
            if (!diag[row + j] && !antidiag[row - j + n - 1] && !col[j]) {
                diag[row + j] = antidiag[row - j + n - 1] = col[j] = true;
                dfs(row + 1, n, diag, antidiag, col, count);
                diag[row + j] = antidiag[row - j + n - 1] = col[j] = false;
            }
        }
    }
};
