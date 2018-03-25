class Solution {
public:
    /**
     * @param n: the money you have
     * @return: the minimum money you have to give
     */
    int backPackX(int n) {
        // write your code here
        vector<int> dp(1 + n);
        for (int i = 1; i <= n; ++i) {
            dp[i] = i;
            if (i >= 150) {
                dp[i] = min(dp[i], dp[i - 150]);
            }
            if (i >= 250) {
                dp[i] = min(dp[i], dp[i - 250]);
            }
            if (i >= 350) {
                dp[i] = min(dp[i], dp[i - 350]);
            }
        }
        return dp[n];
    }
};
