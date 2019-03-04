class Solution {
public:
    /**
     * @param matrix a matrix of 0 and 1
     * @return an integer
     */
    int maxSquare2(vector<vector<int>> &matrix) {
        // write your code here
        int m = matrix.size();
        if (m == 0) {
            return 0;
        }
        
        int n = matrix[0].size();
        vector<vector<int>> dp(1 + m, vector<int>(1 + n));
        vector<vector<int>> upZero(1 + m, vector<int>(1 + n));
        vector<vector<int>> leftZero(1 + m, vector<int>(1 + n));
        int maxArea = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (matrix[i - 1][j - 1] == 1) {
                    dp[i][j] = min(dp[i - 1][j - 1], min(upZero[i - 1][j], leftZero[i][j - 1])) + 1;
                    maxArea = max(maxArea, dp[i][j] * dp[i][j]);
                }
                else {
                    upZero[i][j] = upZero[i - 1][j] + 1;
                    leftZero[i][j] = leftZero[i][j - 1] + 1;
                }
            }
        }
        
        return maxArea;
    }
};
