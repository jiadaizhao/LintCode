class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        int m = A.size();
        int n = B.size();
        vector<vector<int>> dp(1 + m, vector<int>(1 + n));
        int maxLen = 0;
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (A[i - 1] == B[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    maxLen = max(maxLen, dp[i][j]);
                }
            }
        }
        
        return maxLen;
    }
};
