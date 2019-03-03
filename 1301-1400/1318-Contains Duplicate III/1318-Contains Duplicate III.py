class Solution:
    """
    @param nums: the given array
    @param k: the given k
    @param t: the given t
    @return: whether there are two distinct indices i and j in the array such that the absolute difference between nums[i] and nums[j] is at most t and the absolute difference between i and j is at most k.
    """
    def containsNearbyAlmostDuplicate(self, nums, k, t):
        # Write your code here
        if t < 0 or k <= 0:
            return False
        table = {}
        w = 1 + t
        for i, num in enumerate(nums):
            curr = num // w
            if curr in table:
                return True
            if curr - 1 in table and num - table[curr - 1] <= t:
                return True
            if curr + 1 in table and table[curr + 1] - num <= t:
                return True
            table[curr] = num
            if i >= k:
                del table[nums[i - k] // w]
        return False
