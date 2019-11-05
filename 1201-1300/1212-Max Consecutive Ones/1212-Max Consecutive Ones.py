class Solution:
    """
    @param nums: a binary array
    @return:  the maximum number of consecutive 1s
    """
    def findMaxConsecutiveOnes(self, nums):
        # Write your code here
        count = maxCount = 0
        for num in nums:
            if num == 1:
                count += 1
                maxCount = max(maxCount, count)
            else:
                count = 0
        
        return maxCount
