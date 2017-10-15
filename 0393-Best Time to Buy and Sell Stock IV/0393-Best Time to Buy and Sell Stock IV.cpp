class Solution {
public:
    /**
     * @param k: An integer
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(int k, vector<int> &prices) {
        // write your code here
        int n = prices.size();
        if (k >= n / 2) {
            int sum = 0;
            for (int i = 1; i < n; ++i) {
                int diff = prices[i] - prices[i - 1];
                sum += (diff >= 0) ? diff : 0;
            }
            
            return sum;
        }
        
        vector<vector<int>> dp(1 + k, vector<int>(n));
        for (int i = 1; i <= k; ++i) {
            int localMax = dp[i - 1][0] - prices[0];
            for (int j = 1; j < n; ++j) {
                dp[i][j] = max(dp[i][j - 1], prices[j] + localMax);
                localMax = max(localMax, dp[i - 1][j] - prices[j]);
            }
        }
        
        return dp[k][n - 1];
    }
};
