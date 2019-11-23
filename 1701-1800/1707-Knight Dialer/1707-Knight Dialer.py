class Solution:
    """
    @param N: N
    @return: return the number of distinct numbers can you dial in this manner mod 1e9+7
    """
    def knightDialer(self, N):
        MOD = 10 ** 9 + 7
        dp = [1] * 10
        for _ in range(N - 1):
            dp[0], dp[1], dp[2], dp[3], dp[4], dp[5], dp[6], dp[7], dp[8], dp[9] = \
                (dp[4] + dp[6]) % MOD, \
                (dp[6] + dp[8]) % MOD, \
                (dp[7] + dp[9]) % MOD, \
                (dp[4] + dp[8]) % MOD, \
                (dp[0] + dp[3] + dp[9]) % MOD, \
                0, \
                (dp[0] + dp[1] + dp[7]) % MOD, \
                (dp[2] + dp[6]) % MOD, \
                (dp[1] + dp[3]) % MOD, \
                (dp[2] + dp[4]) % MOD
        return sum(dp) % MOD
