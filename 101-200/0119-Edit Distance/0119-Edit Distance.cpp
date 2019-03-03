class Solution {
public:    
    /**
     * @param word1 & word2: Two string.
     * @return: The minimum number of steps.
     */
    int minDistance(string word1, string word2) {
        // write your code here
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(1 + m, vector<int>(1 + n));
        for (int i = 1; i <= m; ++i)
        {
            dp[i][0] = i; 
        }
        
        for (int j = 1; j <= n; ++j)
        {
            dp[0][j] = j; 
        }

        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
            }
        }
        
        return dp[m][n];
    }
};

class Solution {
public:    
    /**
     * @param word1 & word2: Two string.
     * @return: The minimum number of steps.
     */
    int minDistance(string word1, string word2) {
        // write your code here
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(2, vector<int>(1 + n));

        for (int j = 1; j <= n; ++j)
        {
            dp[0][j] = j; 
        }

        for (int i = 1; i <= m; ++i)
        {
            dp[i % 2][0] = i;
            for (int j = 1; j <= n; ++j)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i % 2][j] = dp[(i - 1) % 2][j - 1];
                }
                else
                {
                    dp[i % 2][j] = min(dp[(i - 1) % 2][j - 1], min(dp[(i - 1) % 2][j], dp[i % 2][j - 1])) + 1;
                }
            }
        }
        
        return dp[m % 2][n];
    }
};
