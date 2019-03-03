class Solution:
    """
    @param nums: the given array
    @return: if any value appears at least twice in the array
    """
    def containsDuplicate(self, nums):
        # Write your code here
        return len(set(nums)) != len(nums)
