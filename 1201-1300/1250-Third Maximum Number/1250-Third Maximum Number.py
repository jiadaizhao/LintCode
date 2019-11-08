import math
class Solution:
    """
    @param nums: the array
    @return: the third maximum number in this array
    """
    def thirdMax(self, nums):
        # Write your code here.
        maxNums = [-math.inf] * 3
        for num in nums:
            if num > maxNums[0]:
                maxNums = [num, maxNums[0], maxNums[1]]
            elif num != maxNums[0] and num > maxNums[1]:
                maxNums[1:3] = [num, maxNums[1]]
            elif num != maxNums[0] and num != maxNums[1] and num > maxNums[2]:
                maxNums[2] = num
                
        return maxNums[0] if -math.inf in maxNums else maxNums[2]
