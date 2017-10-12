class Solution {
public:
    /**
     * @paramn n: An integer
     * @return: An integer
     */
    int numTrees(int n) {
        // write your code here
        vector<int> dp(1 + n);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = i; j >= 1; --j)
            {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }
        
        return dp[n];
    }
};
