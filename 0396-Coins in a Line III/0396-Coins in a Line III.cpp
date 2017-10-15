class Solution {
public:
    /**
     * @param values: a vector of integers
     * @return: a boolean which equals to true if the first player will win
     */
    bool firstWillWin(vector<int> &values) {
        // write your code here
        int n = values.size();
        int sum = accumulate(values.begin(), values.end(), 0);
        
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            dp[i][i] = values[i];
            if (i < n - 1)
            {
                dp[i][i + 1] = max(values[i], values[i + 1]);
            }
        }
        
        for (int len = 3; len <= n; ++len)
        {
            for (int i = 0; i < n - len + 1; ++i)
            {
                int j = i + len - 1;
                dp[i][j] = max(min(dp[i + 1][j - 1], dp[i + 2][j]) + values[i],
                               min(dp[i][j - 2], dp[i + 1][j - 1]) + values[j]);
            }
        }
        
        return dp[0][n - 1] > sum - dp[0][n - 1];
    }
};
