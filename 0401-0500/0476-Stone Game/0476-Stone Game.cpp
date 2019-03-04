class Solution {
public:
    /**
     * @param A an integer array
     * @return an integer
     */
    int stoneGame(vector<int>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0)
        {
            return 0;
        }
        
        vector<int> presum(1  + n);
        for (int i = 1; i <= n; ++i)
        {
            presum[i] = presum[i - 1] + A[i - 1];
        }
        
        vector<vector<int>> dp(n, vector<int>(n));
        for (int l = 2; l <= n; ++l)
        {
            for (int i = 0; i < n - l + 1; ++i)
            {
                int j = i + l - 1;
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; ++k)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + presum[j + 1] - presum[i]);
                }
            }
        }
        
        return dp[0][n - 1];
    }
};
