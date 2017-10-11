class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int n = prices.size();
        if (n == 0)
        {
            return 0;
        }
        int maxP = 0;
        int minPrice = prices[0];
        for (int i = 1; i < n; ++i)
        {
            maxP = max(maxP, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        
        return maxP;
    }
};
