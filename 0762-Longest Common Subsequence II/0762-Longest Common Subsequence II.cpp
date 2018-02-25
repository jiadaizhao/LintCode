class Solution {
public:
    /**
     * @param P: an integer array P
     * @param Q: an integer array Q
     * @param k: the number of allowed changes
     * @return: the length of lca with at most k changes allowed.
     */
    int longestCommonSubsequence2(vector<int> &P, vector<int> &Q, int k) {
        // Write your code here
        int m = P.size();
        int n = Q.size();
        int dp[1 + k][1 + m][1 + n];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (P[i - 1] == Q[j - 1]) {
                    dp[0][i][j] = 1 + dp[0][i - 1][j - 1];
                }
                else {
                    dp[0][i][j] = max(dp[0][i - 1][j], dp[0][i][j - 1]);
                }
            }
        }
        
        for (int l = 1; l <= k; ++l) {
            for (int i = 1; i <= m; ++i) {
                for (int j = 1; j <= n; ++j) {
                    if (P[i - 1] == Q[j - 1]) {
                        dp[l][i][j] = 1 + dp[l][i - 1][j - 1];
                    }
                    else {
                        dp[l][i][j] = max({dp[l][i - 1][j], dp[l][i][j - 1], 1 + dp[l - 1][i - 1][j - 1]});
                    }
                }
            }
        }
        
        return dp[k][m][n];
    }
};
