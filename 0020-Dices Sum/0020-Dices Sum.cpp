class Solution {
public:
    /**
     * @param n an integer
     * @return a list of pair<sum, probability>
     */
    vector<pair<int, double>> dicesSum(int n) {
        // Write your code here
        vector<vector<double>> dp(1 + n, vector<double>(1 + 6 * n));

        dp[0][0] = 1;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = i; j <= 6 * i; ++j)
            {
                for (int k = 1; k <= 6 && k <= j; ++k)
                {
                    dp[i][j] += dp[i - 1][j - k] / 6;
                }
            }
        }
        
        vector<pair<int, double>> result;
        for (int j = n; j <= 6 * n; ++j)
        {
            result.emplace_back(j, dp[n][j]);
        }
        
        return result;
    }
};
