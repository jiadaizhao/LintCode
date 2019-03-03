class Solution {
public:
    /**
     * @param coins: a list of integer
     * @param amount: a total amount of money amount
     * @return: the fewest number of coins that you need to make up
     */
    int coinChange(vector<int> &coins, int amount) {
        // write your code here
        vector<int> dp(1 + amount, 1 + amount);
        dp[0] = 0;
        for (int coin : coins) {
            for (int j = coin; j <= amount; ++j) {
                dp[j] = min(dp[j], dp[j - coin] + 1);
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};
