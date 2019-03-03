class Solution:
    """
    @param nums: an array
    @return: the "pivot" index of this array
    """
    def pivotIndex(self, nums):
        # Write your code here
        s = sum(nums)
        leftSum = 0
        for i, num in enumerate(nums):
            if leftSum == s - leftSum - num:
                return i
            leftSum += num
        return -1
