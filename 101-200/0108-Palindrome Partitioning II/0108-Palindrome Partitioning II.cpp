class Solution {
public:
    /**
     * @param s a string
     * @return an integer
     */
    int minCut(string s) {
        // write your code here
        int n = s.size();
        if (n == 0)
        {
            return 0;
        }
        vector<int> dp(n);
        vector<vector<bool>> Pa(n, vector<bool>(n));
        
        for (int j = 0; j < n; ++j)
        {
            dp[j] = j;
            for (int i = j; i >= 0; --i)
            {
                if (s[i] == s[j] && (j - i < 2 || Pa[i + 1][j - 1]))
                {
                    Pa[i][j] = true;
                    if (i == 0)
                    {
                        dp[j] = 0;
                    }
                    else if (dp[i - 1] + 1 < dp[j])
                    {
                        dp[j] = dp[i - 1] + 1;
                    }
                }
            }
        }
        
        return dp[n - 1];
    }
};
