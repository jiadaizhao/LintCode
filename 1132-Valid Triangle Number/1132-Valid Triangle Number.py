class Solution:
    """
    @param nums: the given array
    @return:  the number of triplets chosen from the array that can make triangles
    """
    def triangleNumber(self, nums):
        # Write your code here
        nums.sort()
        count = 0
        for i in range(2, len(nums)):
            left = 0
            right = i - 1
            while left < right:
                if nums[left] + nums[right] <= nums[i]:
                    left += 1
                else:
                    count += right - left
                    right -= 1
        return count
