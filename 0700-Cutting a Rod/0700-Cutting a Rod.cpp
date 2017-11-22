class Solution {
public:
    /*
     * @param : the prices
     * @param : the length of rod
     * @return: the max value
     */
    int cutting(vector<int>& prices, int n) {
        // Write your code here
        vector<int> dp(1 + n);
        for (int i = 1; i <= n; ++i) {
            dp[i] = prices[i - 1];
            for (int j = i - 1; j >= 1; --j) {
                dp[i] = max(dp[i], dp[j] + prices[i - j - 1]);
            }
        }
        
        return dp[n];
    }
};
