class Solution {
public:
    /**
     * @param n a positive integer
     * @return an integer
     */
    int numSquares(int n) {
        // Write your code here
        vector<int> dp(1 + n);
        
        for (int i = 1; i <= n; ++i) {
            dp[i] = i;
            for (int j = 1; j * j <= i; ++j) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        
        return dp[n];
    }
};
