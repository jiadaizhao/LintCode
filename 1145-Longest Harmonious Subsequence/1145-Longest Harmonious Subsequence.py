import collections
class Solution:
    """
    @param nums: a list of integers
    @return: return a integer
    """
    def findLHS(self, nums):
        # write your code here
        table = collections.Counter(nums)
        maxCount = 0
        for num in table:
            if num + 1 in table:
                maxCount = max(maxCount, table[num] + table[num + 1])
        return maxCount
