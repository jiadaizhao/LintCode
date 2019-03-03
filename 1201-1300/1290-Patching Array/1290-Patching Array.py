class Solution:
    """
    @param nums: an array
    @param n: an integer
    @return: the minimum number of patches required
    """
    def minPatches(self, nums, n):
        # Write your code here
        count = 0
        i = 0
        miss = 1
        while miss <= n:
            if i < len(nums) and nums[i] <= miss:
                miss += nums[i]
                i += 1
            else:
                miss *= 2
                count += 1
        return count
