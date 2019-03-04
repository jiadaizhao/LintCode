class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int n = prices.size();
        if (n == 0) {
            return 0;
        }
        
        vector<int> left(n), right(n);
        int minPrice = prices[0];
        for (int i = 1; i < n; ++i) {
            left[i] = max(left[i - 1], prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        
        int maxPrice = prices[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            right[i] = max(right[i + 1], maxPrice - prices[i]);
            maxPrice = max(maxPrice, prices[i]);
        }
        
        int maxP = 0;
        for (int i = 0; i < n; ++i) {
            maxP = max(maxP, left[i] + right[i]);
        }
        return maxP;
    }
};
