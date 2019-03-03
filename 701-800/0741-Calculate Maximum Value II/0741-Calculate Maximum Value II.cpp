class Solution {
public:
    /**
     * @param str: a string of numbers
     * @return: the maximum value
     */
    int maxValue(string &str) {
        // write your code here
        int n = str.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            dp[i][i] = str[i] - '0';
        }
        
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i < n - l + 1; ++i) {
                int j = i + l - 1;
                for (int k = i; k < j; ++k) {
                    dp[i][j] = max({dp[i][j], dp[i][k] + dp[k + 1][j], dp[i][k] * dp[k + 1][j]});
                }
            }
        }
        
        return dp[0][n - 1];
    }
};
