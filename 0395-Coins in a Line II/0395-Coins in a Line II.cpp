class Solution {
public:
    /**
     * @param values: a vector of integers
     * @return: a boolean which equals to true if the first player will win
     */
    bool firstWillWin(vector<int> &values) {
        // write your code here
        int n = values.size();
        if (n <= 2)
        {
            return true;
        }
        
        int sum = accumulate(values.begin(), values.end(), 0);
        
        vector<int> dp(1 + n);
        dp[n - 1] = values[n - 1];
        dp[n - 2] = values[n - 2] + values[n - 1];
        dp[n - 3] = values[n - 3] + values[n - 2];
        
        for (int i = n - 4; i >= 0; --i)
        {
            dp[i] = max(min(dp[i + 2], dp[i + 3]) + values[i], min(dp[i + 3], dp[i + 4]) + values[i] + values[i + 1]); 
        }
        
        return dp[0] > sum - dp[0];
    }
};
