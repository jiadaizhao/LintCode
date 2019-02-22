class Solution:
    """
    @param nums: an array
    @return: the minimum number of moves required to make all array elements equal
    """
    def minMoves2(self, nums):
        # Write your code here
        median = sorted(nums)[len(nums) // 2]
        return sum(abs(num - median) for num in nums)
