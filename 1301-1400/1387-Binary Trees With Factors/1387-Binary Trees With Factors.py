class Solution:
    """
    @param A: 
    @return: nothing
    """
    def numFactoredBinaryTrees(self, A):
        A.sort()
        MOD = 10 ** 9 + 7
        dp = {}
        for j in range(len(A)):
            dp[A[j]] = 1
            for i in range(j):
                if A[j] % A[i] == 0:
                    num = A[j] // A[i]
                    if num in dp:
                        dp[A[j]] = (dp[A[j]] + dp[A[i]] * dp[num]) % MOD
        return sum(dp.values()) % MOD
