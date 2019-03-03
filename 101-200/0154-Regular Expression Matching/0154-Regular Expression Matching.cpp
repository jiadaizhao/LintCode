class Solution {
public:
    /**
     * @param s: A string 
     * @param p: A string includes "." and "*"
     * @return: A boolean
     */
    bool isMatch(const char *s, const char *p) {
        // write your code here
        int m = 0;
        for (int i = 0; s[i]; ++i)
        {
            ++m;
        }
        
        int n = 0;
        for (int i = 0; p[i]; ++i)
        {
            ++n;
        }
        
        vector<vector<bool>> dp(1 + m, vector<bool>(1 + n));
        
        dp[0][0] = true;
        
        for (int j = 2; j <= n; ++j)
        {
            if (p[j - 1] == '*')
            {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (p[j - 1] == '.' || s[i - 1] == p[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else if (p[j - 1] == '*' && j > 1)
                {
                    dp[i][j] = dp[i][j - 2] || (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j];
                }
            }
        }
        
        return dp[m][n];
    }
};
