class Solution {
public:
    /**
     * @param n: Your money
     * @param prices: Cost of each university application
     * @param probability: Probability of getting the University's offer
     * @return: the  highest probability
     */
    double backpackIX(int n, vector<int> &prices, vector<double> &probability) {
        // write your code here
        int m = prices.size();
        vector<double> dp(1 + n, 1);
        for (int i = 0; i < m; ++i) {
            for (int j = n; j >= prices[i]; --j) {
                dp[j] = min(dp[j], dp[j - prices[i]] * (1 - probability[i]));
            }
        }
        return 1 - dp[n];
    }
};
