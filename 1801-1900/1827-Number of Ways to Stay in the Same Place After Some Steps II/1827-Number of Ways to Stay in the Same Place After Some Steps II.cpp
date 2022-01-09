class Solution {
public:
    /**
     * @param steps: steps you can move
     * @param arrLen: the length of the array
     * @return: Number of Ways to Stay in the Same Place After Some Steps
     */
    int numWays(int steps, int arrLen) {
        // write your code here
        int sz = min(steps / 2 + 1, arrLen);
        vector<long> dp(sz);
        dp[0] = 1;
        int MOD = 1e9 + 7;
        for (int i = 0; i < steps; ++i) {
            vector<long> temp(sz);
            for (int j = 0; j < sz; ++j) {
                temp[j] = (((j > 0) ? dp[j - 1] : 0) + dp[j] + 
                    ((j < sz - 1) ? dp[j + 1]: 0)) % MOD;
            }
            dp = std::move(temp);
        }
        
        return dp[0];
    }
};
