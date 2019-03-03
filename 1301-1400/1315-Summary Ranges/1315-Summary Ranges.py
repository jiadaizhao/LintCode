class Solution:
    """
    @param nums:  a sorted integer array without duplicates
    @return: the summary of its ranges
    """
    def summaryRanges(self, nums):
        # Write your code here
        result = []
        start = 0
        i = 0
        while i < len(nums):
            while i < len(nums) - 1 and nums[i] + 1 == nums[i + 1]:
                i += 1
            if start == i:
                result.append(str(nums[start]))
            else:
                result.append(str(nums[start]) + '->' + str(nums[i]))
            i += 1
            start = i
        return result
