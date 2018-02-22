class Solution {
public:
    /**
     * @param str: a string S
     * @return: the number of different non-empty palindromic subsequences in S
     */
    int countPalindSubseq(string &str) {
        // write your code here
        int n = str.size();
        int MOD = 1000000007;
        int dp[4][n][n];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; ++i) {
            for (int k = 0; k < 4; ++k) {
                if (str[i] == 'a' + k) {
                    dp[k][i][i] = 1;
                }
            }
        }
        
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i < n - l + 1; ++i) {
                int j = i + l - 1;
                for (int k = 0; k < 4; ++k) {
                    char c = 'a' + k;
                    if (str[i] != c) {
                        dp[k][i][j] = dp[k][i + 1][j];
                    }
                    else if (str[j] != c) {
                        dp[k][i][j] = dp[k][i][j - 1];
                    }
                    else {
                        dp[k][i][j] = 2;
                        if (l != 2) {
                            for (int m = 0; m < 4; ++m) {
                                dp[k][i][j] = (dp[k][i][j] + dp[m][i + 1][j - 1]) % MOD;
                            }
                        }
                    }
                }
            }
        }
        
        int count = 0;
        for (int k = 0; k < 4; ++k) {
            count = (count + dp[k][0][n - 1]) % MOD;
        }
        
        return count;
    }
};
