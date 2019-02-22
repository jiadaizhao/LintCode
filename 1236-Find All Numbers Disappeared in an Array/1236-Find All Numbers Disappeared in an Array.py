class Solution:
    """
    @param nums: a list of integers
    @return: return a list of integers
    """
    def findDisappearedNumbers(self, nums):
        # write your code here
        for i in range(len(nums)):
            index = abs(nums[i]) - 1
            nums[index] = -abs(nums[index])
        return [i + 1 for i in range(len(nums)) if nums[i] > 0]
