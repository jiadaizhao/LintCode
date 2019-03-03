class Solution:
    """
    @param N: a integer
    @return: return a integer
    """
    def numTilings(self, N):
        # write your code here
        MOD = 1000000007
        dp = [0] * 1001
        dp[0] = 1
        dp[1] = 1
        dp[2] = 2
        for i in range(3, N + 1):
            dp[i] = (dp[i - 1] * 2 + dp[i - 3]) % MOD
        return dp[N]
