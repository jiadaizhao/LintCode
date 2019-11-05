class Solution:
    """
    @param nums: a integer array
    @return: the index of the largest element
    """
    def dominantIndex(self, nums):
        # Write your code here
        max1 = max2 = imax1 = -1
        for i, num in enumerate(nums):
            if num > max1:
                max2 = max1
                max1 = num
                imax1 = i
            elif num > max2:
                max2 = num
                
        return imax1 if max1 >= max2 * 2 else -1
