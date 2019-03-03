class Solution:
    """
    @param nums: the given array
    @param k: the given number
    @return:  whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k
    """
    def containsNearbyDuplicate(self, nums, k):
        # Write your code here
        table = {}
        for i, num in enumerate(nums):
            if num in table and i - table[num] <= k:
                return True
            else:
                table[num] = i
        return False
