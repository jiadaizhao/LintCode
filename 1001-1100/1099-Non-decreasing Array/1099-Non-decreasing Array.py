class Solution:
    """
    @param nums: an array
    @return: if it could become non-decreasing by modifying at most 1 element
    """
    def checkPossibility(self, nums):
        # Write your code here
        OneDec = False
        for i in range(1, len(nums)):
            if nums[i] < nums[i - 1]:
                if OneDec:
                    return False
                OneDec = True
                if i > 1 and nums[i - 2] > nums[i] and i < len(nums) - 1 and nums[i - 1] > nums[i + 1]:
                    return False
        return True
