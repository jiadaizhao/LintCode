class Solution:
    """
    @param n: an integer
    @return: an ineger f(n)
    """
    def fibonacci(self, n):
        # write your code here
        if n == 1:
            return 0
        dp = [0] * n
        dp[1] = 1
        for i in range(2, len(dp)):
            dp[i] = dp[i - 1] + dp[i - 2]
        return dp[n - 1]
