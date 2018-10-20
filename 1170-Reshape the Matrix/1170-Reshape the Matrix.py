class Solution:
    """
    @param nums: List[List[int]]
    @param r: an integer
    @param c: an integer
    @return: return List[List[int]]
    """
    def matrixReshape(self, nums, r, c):
        # write your code here
        if len(nums) * len(nums[0]) != r * c:
            return nums
        
        vals = (val for row in nums for val in row)
        return [[next(vals) for col in range(c)] for row in range(r)]
