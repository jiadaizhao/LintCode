import itertools
import collections
class Solution:
    """
    @param nums: an array
    @param k: an integer
    @return: three non-overlapping subarrays with maximum sum
    """
    def maxSumOfThreeSubarrays(self, nums, k):
        # Write your code here
        n = len(nums)
        presum = [0] + list(itertools.accumulate(nums))
        dp = [[0] * (1 + n) for i in range(4)]
        index = [[0] * (1 + n) for i in range(4)]
        
        for i in range(1, 4):
            dp[i][i * k] = presum[i * k]
            index[i][i * k] = k * i - k
            for j in range(k * i + 1, n + 1):
                dp[i][j] = dp[i][j - 1]
                index[i][j] = index[i][j - 1]
                curr = dp[i - 1][j - k] + presum[j] - presum[j - k]
                if curr > dp[i][j]:
                    dp[i][j] = curr
                    index[i][j] = j - k
                    
        result = [0] * 3
        currIndex = n
        for i in range(2, -1, -1):
            result[i] = index[i + 1][currIndex]
            currIndex = result[i]
        return result
