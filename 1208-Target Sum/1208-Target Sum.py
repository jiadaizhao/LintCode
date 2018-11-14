class Solution:
    """
    @param nums: the given array
    @param s: the given target
    @return: the number of ways to assign symbols to make sum of integers equal to target S
    """
    def findTargetSumWays(self, nums, s):
        # Write your code here
        total = sum(nums)
        if s > total or s < -total:
            return 0
        for i in range(len(nums)):
            nums[i] *= 2
        dp = [1] + [0] * (s + total)
        for i in range(len(nums)):
            for j in range(s + total, nums[i] - 1, -1):
                dp[j] += dp[j - nums[i]]
        return dp[s + total]
