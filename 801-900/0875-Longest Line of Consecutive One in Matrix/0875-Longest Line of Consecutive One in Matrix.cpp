class Solution {
public:
    /**
     * @param M: the 01 matrix
     * @return: the longest line of consecutive one in the matrix
     */
    int longestLine(vector<vector<int>> &M) {
        // Write your code here
        int m = M.size();
        if (m == 0) return 0;
        int n = M[0].size();
        vector<int> cols(n), diag(m + n - 1), antidiag(m + n - 1);
        int maxLen = 0;
        for (int i = 0; i < m; ++i) {
            int row = 0;
            for (int j = 0; j < n; ++j) {
                if (M[i][j] == 1) {
                    ++row;
                    ++cols[j];
                    ++diag[i - j + n - 1];
                    ++antidiag[i + j];
                    maxLen = max({maxLen, row, cols[j], diag[i - j + n - 1], antidiag[i + j]});
                }
                else {
                    row = 0;
                    cols[j] = 0;
                    diag[i - j + n - 1] = 0;
                    antidiag[i + j] = 0;
                }
            }
        }
        return maxLen;
    }
};
