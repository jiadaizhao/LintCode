class Solution {
public:
    /**
     * @param n: the money of you
     * @param prices: the price of rice[i]
     * @param weight: the weight of rice[i]
     * @param amounts: the amount of rice[i]
     * @return: the maximum weight
     */
    int backPackVII(int n, vector<int> &prices, vector<int> &weight, vector<int> &amounts) {
        // write your code here
        int m = prices.size();
        vector<vector<int>> dp(1 + m, vector<int>(1 + n));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = dp[i - 1][j];
                for (int k = 1; k <= amounts[i - 1]; ++k) {
                    if (j >= prices[i - 1] * k) {
                        dp[i][j] = max(dp[i][j], dp[i - 1][j - prices[i - 1] * k] + weight[i - 1] * k);
                    }
                }
            }
        }
        return dp[m][n];
    }
};
