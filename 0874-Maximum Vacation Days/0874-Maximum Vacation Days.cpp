class Solution {
public:
    /**
     * @param flights: the airline status from the city i to the city j
     * @param days: days[i][j] represents the maximum days you could take vacation in the city i in the week j
     * @return: the maximum vacation days you could take during K weeks
     */
    int maxVacationDays(vector<vector<int>> &flights, vector<vector<int>> &days) {
        // Write your code here
        int N = flights.size(), K = days[0].size();
        vector<vector<int>> dp(2, vector<int>(N));
        for (int k = K - 1; k >= 0; --k) {
            for (int i = 0; i < N; ++i) {
                dp[k & 1][i] = dp[(k + 1) & 1][i] + days[i][k];
                for (int j = 0; j < N; ++j) {
                    if (flights[i][j]) {
                        dp[k & 1][i] = max(dp[k & 1][i], dp[(k + 1) & 1][j] + days[j][k]);
                    }
                }
            }
        }
        
        return dp[0][0];
    }
};
