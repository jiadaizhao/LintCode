class Solution {
public:
    /**
     * @param A: An integer array.
     * @param target: An integer.
     */
    int MinAdjustmentCost(vector<int> A, int target) {
        // write your code here
        int n = A.size();
        int maxVal = 0;
        for (int a : A)
        {
            maxVal = max(maxVal, a);
        }
        
        vector<vector<int>> dp(1 + n, vector<int>(1 + maxVal));
        
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= maxVal; ++j)
            {
                dp[i][j] = INT_MAX;
                for (int k = 0; k <= maxVal; ++k)
                {
                    if (abs(k - j) <= target)
                    {
                        dp[i][j] = min(dp[i][j], dp[i - 1][k] + abs(A[i - 1] - j));
                    }
                }
            }
        }
        
        int result = INT_MAX;
        for (int j = 0; j <= maxVal; ++j)
        {
            result = min(result, dp[n][j]);
        }
        return result;
    }
};
