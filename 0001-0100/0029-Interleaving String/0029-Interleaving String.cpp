class Solution {
public:
    /**
     * Determine whether s3 is formed by interleaving of s1 and s2.
     * @param s1, s2, s3: As description.
     * @return: true of false.
     */
    bool isInterleave(string s1, string s2, string s3) {
        // write your code here
        int m = s1.size();
        int n = s2.size();
        if (s3.size() != m + n)
        {
            return false;
        }
        
        vector<vector<bool>> dp(1 + m, vector<bool>(1 + n));
        dp[0][0] = true;
        for (int i = 1; i <= m && dp[i - 1][0]; ++i)
        {
            dp[i][0] = (s1[i - 1] == s3[i - 1]);
        }
        
        for (int j = 1; j <= n && dp[0][j - 1]; ++j)
        {
            dp[0][j] = (s2[j - 1] == s3[j - 1]);
        }
        
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (s1[i - 1] == s3[i + j - 1] && dp[i - 1][j] ||
                    s2[j - 1] == s3[i + j - 1] && dp[i][j - 1])
                {
                    dp[i][j] = true;
                }
            }
        }
        
        return dp[m][n];
    }
};
