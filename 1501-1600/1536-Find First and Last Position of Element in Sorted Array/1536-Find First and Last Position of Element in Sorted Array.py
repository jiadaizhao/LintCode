class Solution:
    """
    @param nums: the array of integers
    @param target: 
    @return: the starting and ending position
    """
    def searchRange(self, nums, target):
        # Write your code here.
        low = 0
        high = len(nums)
        while low < high:
            mid = (low + high) // 2
            if nums[mid] < target:
                low = mid + 1
            else:
                high = mid
                
        if low == len(nums) or nums[low] != target:
            return [-1, -1]
        
        left = low
        low = 0
        high = len(nums)
        while low < high:
            mid = (low + high) // 2
            if nums[mid] > target:
                high = mid
            else:
                low = mid + 1
                
        right = high - 1
        return [left, right]
