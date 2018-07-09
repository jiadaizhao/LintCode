class Solution {
public:
    /**
     * @param prices: a list of integers
     * @return: return a integer
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int n = prices.size();
        if (n == 0) {
            return 0;
        }
        
        vector<int> buy(1 + n), sell(1 + n);
        buy[1] = -prices[0];
        for (int i = 2; i <= n; ++i) {
            buy[i] = max(buy[i - 1], sell[i - 2] - prices[i - 1]);
            sell[i] = max(sell[i - 1], buy[i] + prices[i - 1]);
        }
        
        return sell[n];
    }
};
