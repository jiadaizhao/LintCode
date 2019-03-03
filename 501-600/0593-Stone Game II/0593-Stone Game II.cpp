class Solution {
public:
    /**
     * @param A an integer array
     * @return an integer
     */
    int stoneGame2(vector<int>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0) {
            return 0;
        }
        
        vector<int> presum(2 * n);
        for (int i = 1; i < 2 * n; ++i) {
            presum[i] = presum[i - 1] + A[(i - 1) % n];
        }
        
        vector<vector<int>> dp(2 * n, vector<int>(2 * n));
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i < 2 * n - l; ++i) {
                int j = i + l - 1;
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; ++k) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + presum[j + 1] - presum[i]);
                }
            }
        }
        
        int result = INT_MAX;
        for (int i = 0; i < n; ++i) {
            result = min(result, dp[i][i + n - 1]);
        }
        return result;
    }
};
