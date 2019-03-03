class Solution {
public:
    /**
     * @param amount: a total amount of money amount
     * @param coins: the denomination of each coin
     * @return: the number of combinations that make up the amount
     */
    int change(int amount, vector<int> &coins) {
        // write your code here
        vector<int> dp(1 + amount);
        dp[0] = 1;
        for (int i = 0; i < coins.size(); ++i) {
            for (int j = coins[i]; j <= amount; ++j) {
                dp[j] += dp[j - coins[i]];
            }
        }
        return dp[amount];
    }
};
