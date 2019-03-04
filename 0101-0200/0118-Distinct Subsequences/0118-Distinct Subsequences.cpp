class Solution {
public:    
    /**
     * @param S, T: Two string.
     * @return: Count the number of distinct subsequences
     */
    int numDistinct(string &S, string &T) {
        // write your code here
        int m = S.size();
        int n = T.size();
        if (m < n)
        {
            return 0;
        }
        
        vector<int> dp(1 + n);
        dp[0] = 1;

        for (int i = 1; i <= m; ++i)
        {
            for (int j = n; j >= 1; --j)
            {
                if (S[i - 1] == T[j - 1])
                {
                    dp[j] += dp[j - 1];
                }
            }
        }
        
        return dp[n];
    }
};
