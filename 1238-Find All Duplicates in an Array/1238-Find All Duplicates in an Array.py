class Solution:
    """
    @param nums: a list of integers
    @return: return a list of integers
    """
    def findDuplicates(self, nums):
        # write your code here
        result = []
        for num in nums:
            index = abs(num) - 1
            if nums[index] < 0:
                result.append(abs(num))
            else:
                nums[index] = -nums[index]
        return result
