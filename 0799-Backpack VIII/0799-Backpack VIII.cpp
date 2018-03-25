class Solution {
public:
    /**
     * @param n: the value from 1 - n
     * @param value: the value of coins
     * @param amount: the number of coins
     * @return: how many different value
     */
    int backPackVIII(int n, vector<int> &value, vector<int> &amount) {
        // write your code here
        int m = value.size();
        vector<vector<int>> dp(1 + m, vector<int>(1 + n));
        for (int i = 0; i <= m; ++i) {
            dp[i][0] = 1;
        }
        
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = dp[i - 1][j];
                if (dp[i][j]) {
                    continue;
                }
                for (int k = 1; k <= amount[i - 1]; ++k) {
                    if (j >= value[i - 1] * k && dp[i - 1][j - value[i - 1] * k]) {
                        dp[i][j] = 1;
                        break;
                    }
                }
            }
        }
        
        int count = 0;
        for (int j = 1; j <= n; ++j) {
            count += dp[m][j];
        }
        return count;
    }
};
