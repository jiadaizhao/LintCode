class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int sum = 0;
        for (int i = 1; i < prices.size(); ++i)
        {
            int diff = prices[i] - prices[i - 1];
            if (diff > 0)
            {
                sum += diff;
            }
        }
        
        return sum;
    }
};
