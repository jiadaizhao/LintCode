class Solution:
    """
    @param nums: an array
    @return: the number of longest increasing subsequence
    """
    def findNumberOfLIS(self, nums):
        # Write your code here
        n = len(nums)
        if n <= 1:
            return n
        dp = [1] * n
        count = [1] * n
        maxLen = 1
        total = 1
        for j in range(1, n):
            for i in range(j):
                if nums[i] < nums[j]:
                    if dp[i] + 1 > dp[j]:
                        dp[j] = dp[i] + 1
                        count[j] = count[i]
                    elif dp[i] + 1 == dp[j]:
                        count[j] += count[i]
            if dp[j] > maxLen:
                maxLen = dp[j]
                total = count[j]
            elif dp[j] == maxLen:
                total += count[j]
        return total
