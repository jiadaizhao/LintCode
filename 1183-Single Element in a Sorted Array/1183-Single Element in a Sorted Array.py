class Solution:
    """
    @param nums: a list of integers
    @return: return a integer
    """
    def singleNonDuplicate(self, nums):
        # write your code here
        low = 0
        high = len(nums) - 1
        while low + 1 < high:
            mid = (low + high) // 2
            if mid & 1:
                if nums[mid - 1] == nums[mid]:
                    low = mid + 1
                else:
                    high = mid - 1
            else:
                if nums[mid] == nums[mid + 1]:
                    low = mid + 2
                else:
                    high = mid - 1
        return nums[low]
