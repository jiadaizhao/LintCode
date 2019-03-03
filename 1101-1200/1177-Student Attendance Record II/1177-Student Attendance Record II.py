class Solution:
    """
    @param n: an integer
    @return: return an integer
    """
    def checkRecord(self, n):
        # write your code here
        MOD = 1000000007
        dp00 = 1
        dp01 = dp02 = dp10 = dp11 = dp12 = 0
        for i in range(n):
            dp00, dp01, dp02, dp10, dp11, dp12 = (dp00 + dp01 + dp02) % MOD, dp00, dp01, \
                                                 (dp00 + dp01 + dp02 + dp10 + dp11 + dp12) % MOD, dp10, dp11
        return (dp00 + dp01 + dp02 + dp10 + dp11 + dp12) % MOD
