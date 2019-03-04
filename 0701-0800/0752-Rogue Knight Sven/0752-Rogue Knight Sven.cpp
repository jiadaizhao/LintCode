class Solution {
public:
    /**
     * @param n: the max identifier of planet.
     * @param m: gold coins that Sven has.
     * @param limit: the max difference.
     * @param cost: the number of gold coins that reaching the planet j through the portal costs.
     * @return: return the number of ways he can reach the planet n through the portal.
     */
    long long getNumberOfWays(int n, int m, int limit, vector<int> &cost) {
        // Write your code here
        vector<vector<long long>> dp(1 + n, vector<long long>(1 + m));
        dp[0][m] = 1;
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= m - cost[i]; ++j) {
                for (int k = max(0, i - limit); k < i; ++k) {
                    dp[i][j] += dp[k][j + cost[i]];
                }
            }
        }
        
        long long sum = 0;
        for (int j = 0; j <= m; ++j) {
            sum += dp[n][j];
        }
        return sum;
    }
};

class Solution {
public:
    /**
     * @param n: the max identifier of planet.
     * @param m: gold coins that Sven has.
     * @param limit: the max difference.
     * @param cost: the number of gold coins that reaching the planet j through the portal costs.
     * @return: return the number of ways he can reach the planet n through the portal.
     */
    long long getNumberOfWays(int n, int m, int limit, vector<int> &cost) {
        // Write your code here
        vector<vector<long long>> dp(1 + n, vector<long long>(1 + m));
        vector<vector<long long>> sum(1 + n, vector<long long>(1 + m));
        dp[0][m] = 1;
        sum[0][m] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                sum[i][j] = sum[i - 1][j];
                if (j > m - cost[i]) {
                    continue;
                }
                if (i - limit < 1) {
                    dp[i][j] += sum[i - 1][j + cost[i]];
                }
                else {
                    dp[i][j] += sum[i - 1][j + cost[i]] - sum[i - limit - 1][j + cost[i]];
                }
                
                sum[i][j] += dp[i][j];
            }
        }
        
        long long total = 0;
        for (int j = 0; j <= m; ++j) {
            total += dp[n][j];
        }
        return total;
    }
};
