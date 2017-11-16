class Solution {
public:
    /*
     * @param n: An integer
     * @return: how much money you need to have to guarantee a win
     */
    int getMoneyAmount(int n) {
        // write your code here
        vector<vector<int>> dp(2 + n, vector<int>(2 + n));
        for (int l = 2; l <= n; ++l) {
            for (int i = 1; i <= n - l + 1; ++i) {
                int j = i + l - 1;
                dp[i][j] = INT_MAX;
                for (int k = i; k <= j; ++k) {
                    dp[i][j] = min(dp[i][j], k + max(dp[i][k - 1], dp[k + 1][j]));
                }
            }
        }
        return dp[1][n];
    }
};
