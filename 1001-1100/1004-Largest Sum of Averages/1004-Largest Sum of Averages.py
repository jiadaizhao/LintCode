class Solution:
    """
    @param A: an array
    @param K: an integer
    @return: the largest score
    """
    def largestSumOfAverages(self, A, K):
        # Write your code here
        presum = [0] * (1 + len(A))
        for i in range(1, len(presum)):
            presum[i] = presum[i - 1] + A[i - 1]
        
        dp = [0] + [presum[i] / i for i in range(1, len(presum))]
        result = dp[-1]
        for k in range(2, 1 + K):
            for j in range(len(A), 0, -1):
                for i in range(k - 1, j):
                    dp[j] = max(dp[j], dp[i] + (presum[j] - presum[i]) / (j - i))
            
            result = max(result, dp[-1])
        
        return result
