import math
class Solution:
    """
    @param nums: a list of integers
    @return: return a boolean
    """
    def increasingTriplet(self, nums):
        # write your code
        small = math.inf
        big = math.inf
        for num in nums:
            if num <= small:
                small = num
            elif num <= big:
                big = num
            else:
                return True
        return False
